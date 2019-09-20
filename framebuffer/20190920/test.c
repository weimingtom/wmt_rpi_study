//gcc test.c && ./a.out

/*
GND               (right top 3)
VCC               (left top 1)
SCLK P11/SCLK     (Left Top 12)
MOSI P10/MOSI     (left top 10)
RST	P27	          (left top 7)
DC	P25	          (right top 11) 
CS	P8/CE0        (right top 12)
BL	P24	          (right top 9)
*/

//sudo raspi-config
//Interfacing Options->SPI->Yes

//run fbtft
//sudo modprobe fbtft_device name=adafruit18_green gpios=reset:27,dc:25,cs:8,led:24 speed=40000000 bgr=1 fps=60 custom=1 height=128 width=128 rotate=180

//output:
//The framebuffer device was opened successfully.
//128x128, 16bpp
//The framebuffer device was mapped to memory successfully.


#include <stdlib.h>  
#include <unistd.h>  
#include <stdio.h>  
#include <fcntl.h>  
#include <linux/fb.h>  
#include <sys/mman.h>  
#include <sys/ioctl.h>
  
int main()  
{  
    int fbfd = 0;  
    struct fb_var_screeninfo vinfo;  
    struct fb_fix_screeninfo finfo;  
    long int screensize = 0;  
    char *fbp = 0;  
    int x = 0, y = 0;  
    long int location = 0;
    //in rpi3b, /dev/fb0 is HDMI 
    fbfd = open("/dev/fb1", O_RDWR);  
    if (!fbfd) {  
        printf("Error: cannot open framebuffer device.\n");  
        exit(1);  
    }  
    printf("The framebuffer device was opened successfully.\n");  
    if (ioctl(fbfd, FBIOGET_FSCREENINFO, &finfo)) {  
        printf("Error reading fixed information.\n");  
        exit(2);  
    }  
    if (ioctl(fbfd, FBIOGET_VSCREENINFO, &vinfo)) {  
        printf("Error reading variable information.\n");  
        exit(3);  
    }  
    printf("%dx%d, %dbpp\n", vinfo.xres, vinfo.yres, vinfo.bits_per_pixel );  
    screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;  
    fbp = (char *)mmap(0, screensize, PROT_READ | PROT_WRITE, MAP_SHARED,  
                       fbfd, 0);  
    if ((int)fbp == -1) {  
        printf("Error: failed to map framebuffer device to memory.\n");  
        exit(4);  
    }  
    printf("The framebuffer device was mapped to memory successfully.\n");  
    x = 100;   
    y = 100;  
    for ( y = 0; y < 128; y++ )  
        for ( x = 0; x < 128; x++ ) {  
            location = (x+vinfo.xoffset) * (vinfo.bits_per_pixel/8) +  
                       (y+vinfo.yoffset) * finfo.line_length;  
            if ( vinfo.bits_per_pixel == 32 ) {  
                *(fbp + location) = 100;    
                *(fbp + location + 1) = 15+(x-0)/2;  
                *(fbp + location + 2) = 200-(y-0)/5;   
                *(fbp + location + 3) = 0;  
            } else  {  
                int b = 0x00;//10;  
                int g = 0x00;//(x-0)/6;  
                int r = 0xff;//31-(y-0)/16;  
                unsigned short int t = r<<11 | g << 5 | b;  
                *((unsigned short int*)(fbp + location)) = t;  
            }  
        }  
    munmap(fbp, screensize);  
    close(fbfd);  
    return 0;  
}  
