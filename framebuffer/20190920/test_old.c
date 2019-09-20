#include <stdlib.h>  
#include <unistd.h>  
#include <stdio.h>  
#include <fcntl.h>  
#include <linux/fb.h>  
#include <sys/mman.h>  
  
int main()  
{  
    int fbfd = 0;  
    struct fb_var_screeninfo vinfo;  
    struct fb_fix_screeninfo finfo;  
    long int screensize = 0;  
    char *fbp = 0;  
    int x = 0, y = 0;  
    long int location = 0;  
    fbfd = open("/dev/fb0", O_RDWR);  
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
    for ( y = 100; y < 300; y++ )  
        for ( x = 100; x < 300; x++ ) {  
            location = (x+vinfo.xoffset) * (vinfo.bits_per_pixel/8) +  
                       (y+vinfo.yoffset) * finfo.line_length;  
            if ( vinfo.bits_per_pixel == 32 ) {  
                *(fbp + location) = 100;    
                *(fbp + location + 1) = 15+(x-100)/2;  
                *(fbp + location + 2) = 200-(y-100)/5;   
                *(fbp + location + 3) = 0;  
            } else  {  
                int b = 10;  
                int g = (x-100)/6;  
                int r = 31-(y-100)/16;  
                unsigned short int t = r<<11 | g << 5 | b;  
                *((unsigned short int*)(fbp + location)) = t;  
            }  
        }  
    munmap(fbp, screensize);  
    close(fbfd);  
    return 0;  
}  
