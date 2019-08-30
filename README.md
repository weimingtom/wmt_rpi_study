# wmt_rpi_study
My Raspberry Pi study

## rpi3b test   
(baidupan) 2018-04-18-raspbian-stretch.zip    
(baidupan) 2018-04-18-raspbian-stretch-lite.zip  

## rpi0 buildroot  
* https://github.com/weimingtom/buildroot_rpi0_hello  
* https://github.com/weimingtom/wmt_rpi_study/blob/master/buildroot_manual.txt  
* (baidupan) buildroot_rpi0_2018  
* (baidupan) hello_v3.tar.gz  
* (baidupan) buildroot-2018.02-rc3.tar.gz  
* (baidupan) dl_2018.tar.gz  

## rpi zero serial login  
(1) 接好右上第3，第4，第5针  
GND<->GND  
TXD0<->RX  
RXD0<->TX  
**电源用usb供电，不要用转换器的5V供电**  
(2) Win32DiskImager烧录2018-11-13-raspbian-stretch-lite.zip, 不要使用2018-04-18-raspbian-stretch-lite.zip  
(3) 修改config.txt，增加enable_uart=1（不需要添加ssh空文件）  

## 订阅号  
树莓派创客营  
https://mp.weixin.qq.com/s/g5aNe2sBoxuWhSPd_QjCyw  
(baidupan) 2018-04-18-raspbian-stretch-lite.zip  
(baidupan) 2018-11-13-raspbian-stretch-lite.zip  

## 树莓派开发板超市  
http://www.shumeipai.net/portal.php  

## Kernel building   
https://www.raspberrypi.org/documentation/linux/kernel/building.md  

## Toolchain  
* linaro  
https://www.linaro.org/downloads/  
https://releases.linaro.org/components/toolchain/binaries/latest-7/arm-linux-gnueabihf/  

## Ref  
* quake3  
https://github.com/raspberrypi/quake3  
https://github.com/ioquake/ioq3  

* OpenGL ES  
https://github.com/peepo/openGL-RPi-tutorial  

## MonoGame  
* https://www.vihrearobotti.com/raspberry-pi/monogamegles/  
* https://github.com/MonoGame/MonoGame  
* https://github.com/KonajuGames/MonoGame  
* https://github.com/noxo/MonoGame  
* https://github.com/mono/opentk  
* https://github.com/CartBlanche/MonoGame-Samples  

## game console   
https://github.com/JohSchneider/piboy-zero  

## Embeded Linux GUI  
* 适用于ecos的嵌入式GUI(lwegui)源代码  
search baidupan csdn.7z  

## ZeroPhone  
https://github.com/ZeroPhone/  

## vs1003 drivers  
https://github.com/RajivBiswas/RaspberryPi-Dev  

## LCD-show  
3.5寸Raspberry Pi彩屏触摸屏  
https://github.com/goodtft/LCD-show  

## USB HUB  
* 世友  
* SSK  

## 使用qemu虚拟机运行树莓派(linux kernel 4.9)  
https://blog.csdn.net/talkxin/article/details/79505826  

## Book  
Linux设备驱动开发详解：基于新的Linux 4.0  

## LCDWiki  
http://www.lcdwiki.com/zh/MHS-3.5inch_RPi_Display  
(baidupan) Panasonic_SDFormatter.zip  
(baidupan) putty.zip  
(baidupan) Win32DiskImager.zip    

## 【Bad Apple】树莓派驱动12864OLED屏  
https://www.bilibili.com/video/av6668646/  
https://chenxublog.ctfile.com/fs/MkT158467783  
(baidupan) raspi-badapple.7z  

## boards  
https://elinux.org/Main_Page  
(1) 香橙派：250元左右  
(2) PocketBeagle: beagleboard出品，250元左右  
(3) 香蕉派：BPI-M2 Berry，250元左右，BPI-M2 Zero，100元左右  
(4) CubieBoard：250元-300元左右  
(5) PINE64、Rock64:150元-250元左右  
(6) Marsboard：250-350元左右  
(7) ROC-RK3328-CC: FireFly, 250元左右  
(8) MTK7688: 120元左右  
(9) NanoPi Duo：全志，100元左右  
(10) NanoPi Duo2：全志，150元左右  
(11) LinkIt Smart 7688：联发科，120元左右  
(12) LinkIt Smart 7688 Duo：联发科，140元左右  
(13) Widora-BIT5：Widora (歪朵拉), 联发科MT7688, 100元左右  

## 树莓派wiringPi库详解  
https://www.cnblogs.com/lulipro/p/5992172.html  
树莓派-wiringPI-设置引脚编号模式  
https://blog.csdn.net/nicekwell/article/details/78607695  

## libsdl2-rpifb  
https://github.com/dotsha747/libsdl2-rpifb  
http://blog.shahada.abubakar.net/post/hardware-accelerated-sdl-2-on-raspberry-pi  

## SDL-1.2.15-raspberrypi  
https://github.com/vanfanel/SDL-1.2.15-raspberrypi  

## awesome-raspberry-pi-zh  
https://github.com/wwj718/awesome-raspberry-pi-zh  

## spi  
https://www.raspberrypi.org/documentation/hardware/raspberrypi/spi/README.md  
https://raspberrypi-aa.github.io/session3/spi.html  

## S5PV210  
S5PV210  

## wiringpi-tft-tool  
https://github.com/nopnop2002/wiringpi-tft-tool  

## screen  
SPI / GPIO  
KeDei  
MHS  
HDMI  
DSI  

## ARM9, ARM10, ARM11    
* s3c2440  
https://elinux.org/S3C2440  
* 飞凌S3C6410开发板学习板三星ARM11评估板Linux、Android、Wince  
* 友善之臂嵌入式开发板ARM9 mini2440学习板，送显示屏Linux工控板  

## Benchmarking Raspberry Pi GPIO Speed  
http://codeandlife.com/2012/07/03/benchmarking-raspberry-pi-gpio-speed/  
https://github.com/jokkebk/rpi-gpio-benchmark  
https://github.com/sammyizimmy/ili9341  
ioremap  
https://github.com/fundoong/Raspberry-pi-Device-Driver  

## Mastering the Raspberry Pi  
https://github.com/Apress/mastering-raspberry-pi  
https://github.com/ve3wwg/raspberry_pi  
(baidupan) Mastering_the_Raspberry_Pi.pdf  

## screen pixel count  
https://tieba.baidu.com/p/1248658772  
gba: 240 * 160  
fc: 255 * 224  

## InfoNES  
(baidupan) InfoNES097JRC1_SDL.tar.gz  
(baidupan, win) InfoNES097JRC1_SDL_v2.rar  
(baidupan, rpi) infones_rpi_v1.rar  
see (baidupan) infones_stm32f407ve_v1.rar  

## RGB555toRGB, RGBtoRGB565  
https://blog.csdn.net/iteye_4515/article/details/81800882  
https://ssjupiter.iteye.com/blog/890104  

## Nofrendo  
(baidupan) nofrendo-2.0pre1.zip  
(baidupan, linux) nofrendo_linux_v1.tar.gz  
(baidupan, ubuntu) nofrendo_linux_v2_ubuntu.tar.gz  
(baidupan, win32) nofrendo_vc6_v9_min.rar  

## Size  
https://tieba.baidu.com/p/1248658772  
fc SFC都是255x224  
GB 160x144  
GBA 240x160   
GBC和GB一样只不过是彩屏  
GB是四阶灰度的黑白屏  

## NanoPi Duo  
http://wiki.friendlyarm.com/wiki/index.php/NanoPi_Duo/zh  
https://github.com/wertyzp/WiringNP  

## Cylon.js  
https://cylonjs.com  

## linkit-smart-7688  
https://labs.mediatek.com/en/support/resources  
https://labs.mediatek.com/zh-cn/platform/linkit-smart-7688  
https://github.com/MediaTek-Labs  

## Onion Omega2 plus    
https://docs.onion.io/omega2-docs/first-time-setup.html  
https://onion.io/getstarted/  
https://github.com/OnionIoT  

## 7688  
RALINK_GPIO_BASE  
0xB0000600  
https://github.com/aggresss/RFDemo  
https://github.com/jiangrunwu/linux_driver  

## mraa  
http://iotdk.intel.com/docs/master/mraa/

## 路由器就是开发板  
https://github.com/aggresss/RFDemo  
https://blog.csdn.net/aggresss/article/details/52753098  

## 開發新掌機 Handmade01 (黒妹01)  
https://tieba.baidu.com/p/5293710050?pn=1  
https://steward-fu.github.io/website/handheld/handmade01/design.htm  

## linux-sunxi  
https://github.com/linux-sunxi/  
http://linux-sunxi.org/Main_Page  

## ClockworkPi (CPI) / GameShell  
https://www.clockworkpi.com  
https://github.com/clockworkpi  

## fbtft  
https://github.com/notro/fbtft  

## XtsGamingSystem  
https://github.com/fgalliat/XtsGamingSystem  

## NanoPi Duo / Duo2, WiringNP   
https://github.com/friendlyARM/WiringNP  

## orange pi zero plus2, wiringOP  
https://github.com/orangepi-xunlong/wiringOP  

## BPI-M2 Zero, BPI-WiringPi2    
https://shop108780008.taobao.com  
https://www.banana-pi.org.cn  
http://wiki.banana-pi.org/Getting_Started_with_M2_Zero  
https://github.com/BPI-SINOVOIP/BPI-WiringPi2  
https://github.com/BPI-SINOVOIP/RPi.GPIO  
https://github.com/BPI-SINOVOIP/BPI-M2Z-bsp  

## WR703N  
https://www.kafan.cn/edu/4809992.html  

## DietPi  
https://dietpi.com  

## imx280a  
http://www.zlg.cn/ipc/ipc/product/id/91.html  
https://www.nxp.com/products/processors-and-microcontrollers/arm-based-processors-and-mcus/i.mx-applications-processors:IMX_HOME  

## embedded_project  
https://github.com/guowenxue/embedded_project  

## Linaro公司基于GCC推出的ARM交叉编译工具  
https://blog.csdn.net/ztguang/article/details/51016325  

## Android  
* https://www.makeuseof.com/tag/install-android-raspberry-pi/  
* https://github.com/android-rpi/device_brcm_rpi3/tree/nougat-tablet  

## book, GNU Linux Rapid Embedded Programming  
* GNU/Linux嵌入式快速编程  
* https://github.com/giometti/gnu_linux_rapid_embedded_programming  
* https://github.com/giometti/gnu_linux_rapid_embedded_programming/blob/master/chapter_05/openwrt-helloworld/Makefile  
* yocto  

## yoctoproject  
* https://www.yoctoproject.org  
* https://www.cnblogs.com/fah936861121/articles/6797064.html  

## 1.5" ILI9163 lcd screen working  
https://www.raspberrypi.org/forums/viewtopic.php?p=446411#p446411  

## 生命不息 折腾不止  
http://nicekwell.net  

## 用RaspberryPi 3B 驱动LCD1602(八位总线）液晶显示屏（使用iwringPi库，C语言编写）  
https://blog.csdn.net/wa779478028/article/details/84498017  
digitalWriteByte  

## 树莓派wiringPi库使用说明  
http://www.wnavy.com/archives/584  
https://blog.csdn.net/a656343072/article/details/41209857  
https://blog.csdn.net/xukai871105/article/details/17737005  
https://blog.csdn.net/xukai871105/article/details/17881433  

## KeDei  
https://github.com/lzto/RaspberryPi_KeDei_35_lcd_v62  

## st7735fb  
https://github.com/rm-hull/st7735fb  

## ili9341  
???  

## RPI-TFTLIBS  
https://github.com/Nand-e/RPI-TFTLIBS  

## 树莓派CM3 掌上游戏机DIY全记录  
https://www.quwj.com/2018/04/14/retro-cm3-a-powerful-retropie-handled-game-console.html  

## search tft35a_pins  
ilitek, ili9486  
https://github.com/willprice/willprice.github.com/blob/master/_posts/2017-09-16-adventures-with-tft-screens-for-raspberry-pi.md  
https://github.com/swkim01/waveshare-dtoverlays/blob/master/waveshare35a.dts  
tft35a-overlay.dtb  
https://github.com/goodtft/LCD-show/blob/master/usr/tft35a-overlay.dtb  
https://github.com/waveshare/LCD-show/blob/master/waveshare35a-overlay.dtb  
$ sudo apt-get install device-tree-compiler  
$ dtc -O dts -o tft35a.dts -I dtb tft35a-overlay.dtb  
$ dtc -O dts -o waveshare35a.dts -I dtb waveshare35a-overlay.dtb  

## 74HC595, ILI9481 (???)  
https://github.com/ioxhop/Adafruit-ILI9481-ESP32-SPI  

## vs10xx linux drivers  
https://github.com/rvp-nl/vs10xx-linux  

## LCD  
* 友达屏，群创屏，群创兼容屏，分别针对各种型号的主板  
https://tieba.baidu.com/p/6090881402  

* WX150, WX300  
https://tieba.baidu.com/p/6092629172  

## arcade  
https://arcade.makecode.com  
https://learn.adafruit.com/makecode-arcade-with-raspberry-pi-zero  

## sdl for android  
https://github.com/weimingtom/eriri/blob/master/rubysdl/jni/sdl/src/video/android/SDL_androidvideo.c  

## retrozero  
https://facelesstech.wordpress.com/2019/04/07/retrozero-retropie-handheld/  
https://github.com/facelessloser/retro_zero_handheld  
https://github.com/facelessloser/ST7789_1.3_screen  

## Step01 – Bare Metal Programming in C Pt1  
http://www.valvers.com/open-software/raspberry-pi/step01-bare-metal-programming-in-cpt1/  

## Buildroot  
https://buildroot.org  
https://cellux.github.io/articles/diy-linux-with-buildroot-part-1/  
https://github.com/cellux/rpi-buildroot  
https://git.busybox.net/buildroot/tree/board/raspberrypi  

## rpi_gpio_driver  
https://github.com/bogics/rpi_gpio_driver  

## allwinner camdroid  
https://github.com/gitlicheng/camdroid  

## omega2 u-boot  
https://github.com/sysadminmike/freebsd-onion-omega2-build  
https://github.com/dwelch67/onion_omega2_samples  

## RazDroid
Android for the Raspberry Pi  
https://sourceforge.net/projects/razdroid/  
https://github.com/Razdroid  

## 《开源硬件创客:15个酷应用玩转树莓派》  

## buildroot  
* https://blog.csdn.net/apiculate/article/details/79257789  

## Raspberry Pi树莓派实作应用  
https://www.ptpress.com.cn/shopping/buy?bookId=0fc6355e-5915-473e-9479-b63ca6f15f33  
gentoo  
https://gentoo.org  

## 手把手教你做树莓派语音识别，文本变语音
http://www.jackxiang.com/post/7637/  

## 实现用PS4 Dual Shock蓝牙连接树莓派3 控制小车  
http://tieba.baidu.com/p/5514213749  

## RaspberryPi_3_Starter_Kit  
https://github.com/userdw/RaspberryPi_3_Starter_Kit  

## Gentoo  
https://wiki.gentoo.org/wiki/Raspberry_Pi  

## buildroot wiringpi    
https://github.com/rockchip-linux/buildroot/tree/rockchip/2018.02-rc3/package/wiringpi  
http://wiki.friendlyarm.com/wiki/index.php/Buildroot_for_RK3399  
https://buildroot.org/downloads/buildroot-2018.02-rc3.tar.gz  
https://github.com/WiringPi/WiringPi/tree/96344ff7125182989f98d3be8d111952a8f74e15  

## buildroot 下载和make nconfig  
https://blog.csdn.net/liuqun69/article/details/82455823  

## Building Raspberry Pi Systems with Buildroot  
https://jumpnowtek.com/rpi/Raspberry-Pi-Systems-with-Buildroot.html  

## buildroot package for rpi  
http://sources.buildroot.net/bcm2835/  
bcm2835  
c-periphery  
https://github.com/vsergeev/c-periphery  
lua  
wiringpi  

## OpenEmbedded  
http://www.openembedded.org/wiki/Main_Page  

## Yocto Project  
https://www.yoctoproject.org  

## hat  
https://github.com/raspberrypi/hats  
https://hackaday.io/project/20482-designing-a-raspberry-pi-hat  

## pisugar-case-pihat-cap  
https://github.com/PiSugar/pisugar-case-pihat-cap  

## 如何在Ubuntu上使用Yocto创建自己的Linux发行版  
https://www.howtoing.com/how-to-create-your-own-linux-distribution-with-yocto-on-ubuntu/  

## u-boot download    
https://ftp.denx.de/pub/u-boot/  

## openwrt bcm2710    
http://downloads.openwrt.org/snapshots/targets/brcm2708/bcm2710/  

## pigpio  
https://github.com/joan2937/pigpio  
https://github.com/raspberrypi/gpioexpander/blob/master/gpioexpand/package/pigpio/pigpio.mk  

## minigui  
https://github.com/OpenNuvoton/NUC970_Linux_Applications/tree/master/minigui  
https://github.com/weimingtom/wmt_arm9_study  

## Buildroot for the i.MX6 sabre sd platform in a few commands  
https://community.nxp.com/docs/DOC-99218  

## 树莓派 wiringPi 用户手册  
http://blog.lxx1.com/树莓派-wiringpi-用户手册  

## 树莓派学习笔记——wiringPi GPIO使用详解  
https://blog.csdn.net/xukai871105/article/details/17881433  

## 树莓派-wiringPi-优先级&中断&线程  
http://nicekwell.net/blog/20171123/shu-mei-pai-wiringpi-you-xian-ji-and-zhong-duan-and-xian-cheng.html  

