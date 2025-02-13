# wmt_rpi_study
My Raspberry Pi study

## rpi0 cross compile toolchain  
* https://github.com/raspberrypi/tools/blob/master/arm-bcm2708/arm-linux-gnueabihf  
* If you want to cross compile elf for raspberry pi zero (like Qt 4), you can  
use the old toolchain, like this, C and C++ (for Ubuntu 1404 64bit version):  
* /home/wmt/work_qt/tools-master/arm-bcm2708/arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -march=armv6  
* /home/wmt/work_qt/tools-master/arm-bcm2708/arm-linux-gnueabihf/bin/arm-linux-gnueabihf-g++ -std=gnu++98 -march=armv6
* for rom: 2018-04-18-raspbian-stretch-lite.zip  

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

## raspi-gpio  
https://github.com/RPi-Distro  
https://github.com/RPi-Distro/raspi-gpio  

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
书，book  

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
https://github.com/rockchip-linux/minigui  

## Buildroot for the i.MX6 sabre sd platform in a few commands  
https://community.nxp.com/docs/DOC-99218  

## 树莓派 wiringPi 用户手册  
http://blog.lxx1.com/树莓派-wiringpi-用户手册  

## 树莓派学习笔记——wiringPi GPIO使用详解  
https://blog.csdn.net/xukai871105/article/details/17881433  

## 树莓派-wiringPi-优先级&中断&线程  
http://nicekwell.net/blog/20171123/shu-mei-pai-wiringpi-you-xian-ji-and-zhong-duan-and-xian-cheng.html  

## Rockchip  
http://opensource.rock-chips.com/wiki_Main_Page  

## linaro  
https://releases.linaro.org/components/toolchain/binaries/5.4-2017.01/arm-linux-gnueabihf/  

## sxx1314  
https://blog.sxx1314.com    

## gcc for windows  
https://sysprogs.com  

## bpi-m2z    
https://github.com/BPI-SINOVOIP/BPI-M2Z-bsp  
https://github.com/BPI-SINOVOIP/BPI-files  
https://github.com/BPI-SINOVOIP/BPI_WiFi_Firmware  
https://github.com/linux-sunxi  
(baidupan) search buildroot-2019.02.3_bpi-m2z.tar.gz  

## 荔枝派Zero指南  
http://zero.lichee.pro  
http://nano.lichee.pro  
https://licheezero.readthedocs.io/  
https://www.kancloud.cn/lichee/lpi0  
https://www.kancloud.cn/lichee/lpi0/421924  

## stm32 buildroot  
https://elinux.org/STM32  
https://github.com/fdu/STM32F429I-disco_Buildroot  

## 荔枝派Licheepi nano裸机移植ZLG_GUI和3D旋转立方体  
https://www.cnblogs.com/zhinianzhizhan/p/10051013.html  
https://whycan.cn/t_1457.html  
(baidupan) minimal_f1c100s_framebuffer_zlggui.rar  

## arm 芯片型号 汇总  
https://blog.csdn.net/dunwin/article/details/84253928  

## RK3308 buildroot package  
http://wiki.t-firefly.com/zh_CN/ROC-RK3308-CC/buildroot_development.html  
https://gitlab.com/TeeFirefly/rk3308-linux/tree/firefly/buildroot/package/rockchip  

## rpi framebuffer  
https://github.com/txurtxil/ST7735R-LCD  
https://github.com/vinodstanur/raspberry-pi-frame-buffer-mapping-to-160x128-ST7735R-LCD  

## A Raspberry pi framebuffer driver for the ili9341 lcd driver    
https://github.com/sammyizimmy/ili9341  

## 树莓派 spi 液晶屏支持  
http://wiki.jikexueyuan.com/project/raspberry-pi/spi.html  

## rk3288-cc上编写一个hello world  
https://www.cnblogs.com/ch122633/p/10959419.html  

## 用crosstool-ng构建交叉工具编译链  
https://blog.csdn.net/cztqwan/article/details/79428341  

## 用crosstool工具建立交叉工具链过程记录  
https://blog.csdn.net/lhw88117/article/details/7183896  

## 《Linux From Scratch》第一部分：介绍 第一章：介绍-1.1 如何构建LFS系统  
https://yq.aliyun.com/articles/235931?spm=a2c4e.11153940.0.0.3d054edcLXxH7F  

## 重走LFS之路：（六） 工具链编译-3  
https://yq.aliyun.com/articles/87208  

## Beyond Linux From Scratch  
http://www.linuxfromscratch.org/blfs/view/8.1/index.html  

## 2 Mic Hat rpi driver  
https://github.com/respeaker/seeed-voicecard  

## Qemu搭建ARM vexpress开发环境(一)  
https://www.cnblogs.com/microxiami/p/9746979.html  

## RaspberryPi-FreeRTOS  
https://github.com/jameswalmsley/RaspberryPi-FreeRTOS  

## 使用Buildroot为I.MX6制作根文件系统  
https://blog.csdn.net/wangwenxue1989/article/details/90085798  

## Raspberry Pi Assembly and Architecture Books  
http://www.microdigitaled.com/ARM/RPi_ASM_books.htm  
http://nicerland.com/raspberry-pi/  
http://nicerland.com/eduFiles/RaspPi/RaspberryPiAsmProgramming_v1.pdf  

## FC / NES ROM  
(baidupan) FC任天堂红白机中文模拟器 500经典游戏大集合.rar  

## MYiR-iMX-Linux, MYS-6ULX    
http://down.myir-tech.com/MYS-6ULX/  
https://github.com/louisrubet/MYiR-iMX-Linux  
https://github.com/louisrubet/MYiR-iMX-uboot  
https://github.com/boundarydevices/linux-imx6  
https://github.com/hgqian/MYiR-iMX-Linux  
https://github.com/hgqian/MYiR-iMX-uboot  
https://github.com/robe-zhang/project_mys_y6ulx  

## SecureCRT  

## 用树莓派改造 NumWorks 计算器    
https://shumeipai.nxez.com/2019/12/27/raspberrypi-numworks.html  
https://www.numworks.com/simulator/  
https://github.com/zardam/epsilon/tree/rpi  

## bootloader  
https://github.com/marin9/RPi_Bootloader  
https://github.com/marwansalama94/Raspberrypi3-bootloader  

## jupyter  
$ pip3 install jupyter  
$ nano .profile  
PATH加入/home/pi/.local/bin或者$HOME/.local/bin  
$ jupyter notebook --generate-config  
$ cd /home/pi/.jupyter  
$ nano jupyter_notebook_config.py (if ip is fixed to 192.168.1.188)    
```
-> change c.NotebookApp.allow_remote_access = False to 
c.NotebookApp.allow_remote_access = True  
-> c.NotebookApp.ip = '192.168.1.188'  # <== (or not suggest 0.0.0.0)  
-> c.NotebookApp.local_hostnames = ['localhost', '192.168.1.188']    # <== (or not suggest 0.0.0.0) 
```
```
-> c.NotebookApp.shutdown_no_activity_timeout = 0 # <== mod here, uncomment   
->  c.NotebookApp.quit_button = False  
->  c.NotebookApp.shutdown_no_activity_timeout = 0  
```
补充一下上次说的jupyter，如果想把IP定为任意，可以在配置文件中填0.0.0.0，这样可以避免绑定不了有堡垒机的机器的IP（例如那些云服务）。另外jupyter除了可以运行python3，还可以直接调用终端shell，所以如果想暴露出去远程，记得要加个密码保护一下  
$ jupyter notebook --debug  
$ jupyter notebook &  
$ exit  
open web browser http://192.168.1.188:8888  
$  jupyter notebook list  
$ ps aux | grep jupyter  
$ kill -KILL xxxx  
https://blog.csdn.net/Dolphinsz/article/details/83623514  

## mysql timezone, not need to change global var time_zone, only to change rpi's timezone through raspi-config  
$ sudo mysql -uroot -p  
show global variables like '%time%'
(see time_zone (set to default value 'SYSTEM') and system_time_zone (set to 'CST') )  
$ sudo raspi-config  
(...change localization timezone here)  
$ date   
( Fri 04 Jun 2021 12:22:50 PM HDT is changed to this )    
Sat 05 Jun 2021 05:27:00 AM CST  
需要重启mariadb数据库服务  
$ sudo service mysql restart  
https://linux.cn/article-7970-1.html?pr  
```
pi@raspberrypi:~ $ timedatectl  
               Local time: Sat 2021-06-05 05:36:28 CST  
           Universal time: Fri 2021-06-04 21:36:28 UTC  
                 RTC time: n/a  
                Time zone: Asia/Shanghai (CST, +0800)  
System clock synchronized: yes  
              NTP service: active  
          RTC in local TZ: no  
```
$ cat /etc/timezone  
Asia/Shanghai  

## phpmyadmin 5.1.0  
$ sudo apt-get install php-xml php-mbstring  
$ sudo service apache2 restart  

## tomcat-users  
```
<tomcat-users xmlns="http://tomcat.apache.org/xml"
              xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
              xsi:schemaLocation="http://tomcat.apache.org/xml tomcat-users.xsd"
              version="1.0">
<!--
  NOTE:  By default, no user is included in the "manager-gui" role required
  to operate the "/manager/html" web application.  If you wish to use this app,
  you must define such a user - the username and password are arbitrary. It is
  strongly recommended that you do NOT use one of the users in the commented out
  section below since they are intended for use with the examples web
  application.
-->
<!--
  NOTE:  The sample user and role entries below are intended for use with the
  examples web application. They are wrapped in a comment and thus are ignored
  when reading this file. If you wish to configure these users for use with the
  examples web application, do not forget to remove the <!.. ..> that surrounds
  them. You will also need to set the passwords to something appropriate.
-->
<!--
  <role rolename="tomcat"/>
  <role rolename="role1"/>
  <user username="tomcat" password="<must-be-changed>" roles="tomcat"/>
  <user username="both" password="<must-be-changed>" roles="tomcat,role1"/>
  <user username="role1" password="<must-be-changed>" roles="role1"/>
-->
  <role rolename="admin-gui"/>
  <user username="tomcat" password="mypass" roles="admin-gui,manager-gui,manager-jmx,
manager-script,manager-status"/>
</tomcat-users>
```

## nodejs pm2  
$ tar xzf node-v14.16.1-linux-armv7l.tar.gz  
$ nano .profile  
PATH="$HOME/jdk1.8.0_291/bin:$HOME/node-v14.16.1-linux-armv7l/bin:$PATH"  
$ source .profile  
$ npm install -g pm2  
pi@raspberrypi:~/vue/server $ npm run production  
> server@0.0.0 production /home/pi/vue/server  
> pm2 start ./bin/www  

## redis  
$ sudo apt-get install redis-server  
$ redis-cli  
127.0.0.1:6379>  
$ sudo service redis restart   
pi@raspberrypi:~ $ sudo service --status-all  

## mongodb  
$ sudo apt-get install mongodb-server  
pi@raspberrypi:~ $ mongo  
pi@raspberrypi:~ $ service --status-all  

## picore, tinycorelinux, not good ???    
http://distro.ibiblio.org/tinycorelinux/13.x/armv6/releases/RPi/  
http://distro.ibiblio.org/tinycorelinux/ports.html  

## krkrsdl2 for rpi4    
search work_krkrsdl2, krkrsdl2_github_20220221_full.tar.gz, data_web.zip, data.zip  
$ tar xzf krkrsdl2_github_20220221_full.tar.gz  
$ unzip data_web.zip  
$ unzip data.zip  
$ sudo apt install ninja-build meson libsdl2-dev  
$ cd krkrsdl2  
$ meson –prefix=/usr/local _build  
$ ninja -C _build  
$ cd work_krkrsdl2/data_web  
$ /home/pi/work_krkrsdl2/krkrsdl2/_build/krkrsdl2  

## nestopia not good, use fceux instead  
$ sudo apt install nestopia fceux  

## RPI3 FreeBSD  
* https://wiki.freebsd.org/arm/Raspberry%20Pi  
* https://download.freebsd.org/ftp/releases/arm64/aarch64/ISO-IMAGES/12.4/  
* https://download.freebsd.org/ftp/releases/arm64/aarch64/ISO-IMAGES/12.4/FreeBSD-12.4-RELEASE-arm64-aarch64-RPI3.img.xz  
* user, password:  
1. freebsd, freebsd  
2. root, root  
* 我发现树莓派3b的一个新用途——用来跑FreeBSD 12 aarch6版。和Linux的区别是，引导程序是u-boot，进入登录命令行之后居然可以看到鼠标，可以用鼠标选择文本；编译器cc是指向clang。除此之外就不太会用了

## PWM Audio  
* https://facelesstech.wordpress.com/2022/02/11/gbc-retropie-aio-rev-c/  
* https://github.com/facelesstech/gbc_retropie_aio_revC  
* dtoverlay=pwm-2chan,pin=18,func=2,pin2=13,func2=4
* https://learn.adafruit.com/retro-gaming-with-raspberry-pi/adding-controls-software  

## RPI3 OpenWrt23, boot very fast, openwrt 23.05.0      
* https://openwrt.org/toh/raspberry_pi_foundation/raspberry_pi  
* boot very fast, about 10 seconds  
* https://downloads.openwrt.org/releases/23.05.0/targets/bcm27xx/bcm2710/openwrt-23.05.0-bcm27xx-bcm2710-rpi-3-ext4-factory.img.gz  
* (TODO) How to build  
* (TODO) How to cross compile application  
* It seems to run on rpi0  
* https://downloads.openwrt.org/releases/23.05.0/targets/bcm27xx/bcm2708/openwrt-23.05.0-bcm27xx-bcm2708-rpi-ext4-factory.img.gz  

## 树莓派HomeAssistant学习笔记  
* https://ha.jiluxinqing.com/#/  
* https://ha.jiluxinqing.com/#/raspberrypi?id=homeassistant  
* https://github.com/shaonianzhentan/ha-docs  

## 树莓派4b编译安装PPSSPP 1.18.1成功（32位）  
```
树莓派4b编译安装PPSSPP 1.18.1成功（32位），
我试过可以在x11和纯CLI命令行环境下都能运行
（命令行下SDL2鼠标可以显示但不能点击）。
编译方法：
（1）刷2023-05-03-raspios
（2）sudo apt install cmake libsdl2-dev
（3）复制ffmpeg的linux armv7目录到aarch6（原aarch可以改名）
（4）./b.sh --rpi但注意这种方法会全部重新编译，所以必要时需要cd build; make
（5）大部分效果类似于PC版，包括部分闪退游戏也可能需要用Debug类型编译才能不闪退
```
