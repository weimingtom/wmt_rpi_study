https://www.xuebuyuan.com/778388.html


Debian 中安装minigui 1.3.3
2013年08月16日 ? 综合 ? 共 10479字	? 字号 小 中 大 ? 评论关闭

一. 下载文件
    libminigui-1.3.3.tar.gz
    mg-samples-1.3.0.tar.gz (示例)
    minigui-res-1.3.3.tar.gz(资源)
    qvfb-1.1.tar.gz （virtual frame buffer）

二. 编译源码

    [注]: 1. 由于安装实例程序时，将出现/usr/local/lib/libminigui.so: undefined reference to `pthread_kill_other_threads_np'
             建议先将./libminigui-1.3.3/src/kernel/init.c:435:        pthread_kill_other_threads_np (); 注释掉。

          2. libminigui-1.3.3目录下， make menuconfig，需要ncurses库支持(apt-get install libncurses5-dev)。

    2.1. 编译libminigui

           libminigui-1.3.3 # make menuconfig

          如果对配置的选项不是很清楚，可以查看文档《Linux/uClinux + MiniGUI: 嵌入式系统开发原理、工具及过程》的附录B部分。这里保持默认配置，然后退出配置界面并保存设置。

          如果出现如下错误，可以运行 ./configure后，再运行make
          Saving your MiniGUI configuration...scripts/mkconfig: 33: Syntax error: "(" unexpected
接着执行make进行编译：

        根据需要进行必要的参数选择后，保存配置参数.
        执行make，进行编译。

    编译中遇到的问题：
    2.1.1. varbitmap.c:248: error: static declaration of 'var_bitmap_font_ops' follows non-static declaration
        varbitmap.h:38: error: previous declaration of 'var_bitmap_font_ops' was here
        make[4]: *** [varbitmap.lo] 错误 1
        make[4]: Leaving directory `~/download/minigui/minigui1.3.x/soures/libminigui-1.3.3/src/font'
        make[3]: *** [all-recursive] 错误 1
        make[3]: Leaving directory `~/download/minigui/minigui1.3.x/soures/libminigui-1.3.3/src/font'
        make[2]: *** [all-recursive] 错误 1
        make[2]: Leaving directory `~/download/minigui/minigui1.3.x/soures/libminigui-1.3.3/src'
        make[1]: *** [all-recursive] 错误 1
        make[1]: Leaving directory `~/download/minigui/minigui1.3.x/soures/libminigui-1.3.3'
        make: *** [all] 错误 2

    解决办法(三种):
        1) 重新运行make menuconfig，将“Font options”中的“Var bitmap font”选项去掉即可：
          │ │ [*] Raw bitmap font         │ │
          │ │ [ ] Var bitmap font         │ │
          │ │ [*] Incore font sansserif   │ │
          │ │ [*] Incore font courier     │ │
          │ │ [*] Incore font symbol      │ │
          │ │ [*] Incore font vgas        │ │
          │ │ [*] Qt Prerendered Font     │ │
          │ │ [*] TrueType font           │ │
          │ │ [*] Adobe Type1 font        │ │

        2) 修改src/font/varbitmap.c文件，将static改为extern。
            249    extern FONTOPS var_bitmap_font_ops = {  //change static to extern

        3) 安装freetype-1.3.1

    2.1.2. In file included from defkeymap.c:15:
        keyboard.h:43: error: expected ')' before '*' token
        keyboard.h:49: error: expected specifier-qualifier-list before 'INIT_KBD_LAYOUT'
        keyboard.h:52: error: expected ')' before '*' token
        defkeymap.c:17: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'plain_map'
        defkeymap.c:36: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'shift_map'
        defkeymap.c:55: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'altgr_map'
        defkeymap.c:74: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'ctrl_map'
        defkeymap.c:93: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'shift_ctrl_map'
        defkeymap.c:112: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'alt_map'
        defkeymap.c:131: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'ctrl_alt_map'
        defkeymap.c:150: error: expected '=', ',', ';', 'asm' or '__attribute__' before '*' token
        defkeymap.c:267: error: expected ')' before '*' token

        原因及修改办法:
            原因是代码中没有定义ushort和u_short，在keyboard.h中添加定义：
                typedef unsigned short u_short;
            修改下面两个源文件，将ushort修改为u_short.
                src/gui/keyboard.h
                src/gui/defkeymap.c

    2.1.3. gcc -DHAVE_CONFIG_H -I. -I. -I../../.. -I../../../include -I../../include -I../ -g -O2 -D__MINIGUI_LIB__ -Wall -Wstrict-prototypes -pipe -MT fbvideo.lo -MD -MP -MF .deps/fbvideo.Tpo -c fbvideo.c  -fPIC -DPIC -o .libs/fbvideo.lo
        fbvideo.c:19:63: error: asm/page.h: No such file or directory
        fbvideo.c: In function 'FB_VideoInit':
        fbvideo.c:368: error: 'PAGE_SIZE' undeclared (first use in this function)
        fbvideo.c:368: error: (Each undeclared identifier is reported only once
        fbvideo.c:368: error: for each function it appears in.)
        make[4]: *** [fbvideo.lo] 错误 1
        make[4]: Leaving directory `/home/epic/arm2440/minigui/2.0.x/libminigui-2.0.3-linux/src/newgal/fbcon'
        make[3]: *** [all-recursive] 错误 1
        make[3]: Leaving directory `/home/epic/arm2440/minigui/2.0.x/libminigui-2.0.3-linux/src/newgal'
        make[2]: *** [all-recursive] 错误 1
        make[2]: Leaving directory `/home/epic/arm2440/minigui/2.0.x/libminigui-2.0.3-linux/src'
        make[1]: *** [all-recursive] 错误 1
        make[1]: Leaving directory `/home/epic/arm2440/minigui/2.0.x/libminigui-2.0.3-linux'
        make: *** [all] 错误 2

        原因及修改办法:
        版本稍高一点Linux系统中没有 <asm/page.h>
        不过好在minigui也只是用到了文件中的一个宏定义 -- PAGE_SIZE
        只需要注释掉＃include 然后＃define一个即可  如下：
            //#include <asm/page.h>        /* For definition of PAGE_SIZE */
            #define PAGE_SIZE 4096  

        2.1.4.grid.c: In function 'AddCol':
        grid.c:626: error: lvalue required as left operand of assignment
        grid.c:627: error: lvalue required as left operand of assignment
        grid.c:638: error: lvalue required as left operand of assignment
        grid.c:639: error: lvalue required as left operand of assignment
        grid.c:667: error: lvalue required as left operand of assignment
        grid.c:668: error: lvalue required as left operand of assignment
        grid.c:680: error: lvalue required as left operand of assignment
        grid.c:681: error: lvalue required as left operand of assignment
        grid.c: In function 'AddRow':
        grid.c:733: error: lvalue required as left operand of assignment
        grid.c:734: error: lvalue required as left operand of assignment
        grid.c:745: error: lvalue required as left operand of assignment
        grid.c:746: error: lvalue required as left operand of assignment
        grid.c:774: error: lvalue required as left operand of assignment
        grid.c:775: error: lvalue required as left operand of assignment
        grid.c:788: error: lvalue required as left operand of assignment
        grid.c:789: error: lvalue required as left operand of assignment
        make[3]: *** [grid.lo] 错误 1
        make[3]: Leaving directory `/home/jack/download/minigui/minigui1.3.x/soures/libminigui-1.3.3/ext/control'
        make[2]: *** [all-recursive] 错误 1
        make[2]: Leaving directory `/home/jack/download/minigui/minigui1.3.x/soures/libminigui-1.3.3/ext'
        make[1]: *** [all-recursive] 错误 1
        make[1]: Leaving directory `/home/jack/download/minigui/minigui1.3.x/soures/libminigui-1.3.3'
        make: *** [all] 错误 2

        原因及修改办法:
            error: lvalue required as left operand of assignment
            出错原因：编译器版本不同，现在的gcc明确要求指定操作顺序。
            http://oss.lzu.edu.cn/modules/lifetype/index.php?op=ViewArticle&articleId=131&blogId=6
            不过在这里为什么要做强制类型转换，PGRIDCOLHDR定义中没有pRowHdr及pColHdr的定义。相反pRowHdr及pColHdr在pCelll中有定义。
            这么做感觉没什么意义，直接将"(PGRIDCOLHDR)"删除。
            //(PGRIDCOLHDR)pCell1->pRowHdr = pRowHdr;
            pCell1->pRowHdr = pRowHdr;

            当然一定要做强制类型转换，将其修改为
            626 ((PGRIDCOLHDR)pCell1)->pHeadldCell->pRowHdr = pRowHdr;

        [说明]
        编译成功后运行make install进行libminigui库的安装，默认配置下将安装到/usr/local/目录下，可以在make menuconfig中修改“Development environment options”中的“Path prefix”来指定安装目录。如果使用其他目录，则需要注意相关的目录必须添加进环境PATH变量中，否则在编译MiniGUI应用程序时会出现找不到包含文件等错误信息。
接着要运行ldconfig加载新生成的链接库，否则将会出现类似找不到“libminigui-1.3.so.3”的错误消息

    2.2 安装MiniGUI的资源包：
        在源码目录中直接运行: sudo make install即可
        ~/download/minigui/minigui1.3.x/soures/minigui-res-1.3.3 $ make install

    2.3 安装qvfb：
        2.3.1 configure时,提示缺少Qt头文件。
            ~/download/minigui/minigui1.3.x/soures/qvfb-1.1$ ./configure
            checking for Qt... configure: error: Qt (>= Qt 3.0.3) (headers and libraries) not found. Please check your installation!
            For more details about this problem, look at the end of config.log.

            原因是缺少Qt的头文件,需要安装Qt的开发包,如果安装后依然不能找到，在编译时直接指定路径即可。 
        　　./configure --with-qt-dir=/usr/lib/qt3 --with-qt-includes=/usr/include/qt3
        　　其中qt-3为当前qt的版本号.

            Debian下也可以使用auto-apt编译:
            安装auto-apt: $sudo apt-get install auto-apt
                          $auto-apt run ./configure

        2.3.2 make && sudo make install

    2.4 安装示例程序：
        2.4.1 ~/download/minigui/minigui1.3.x/soures/mg-samples-1.3.1$ ./configure
        2.4.2 ~/download/minigui/minigui1.3.x/soures/mg-samples-1.3.1$ make
            编译出错，提示信息如下：
            make[1]: Entering directory `/home/jack/download/minigui/minigui1.3.x/soures/mg-samples-1.3.1/src'
            source='helloworld.c' object='helloworld.o' libtool=no /
                depfile='.deps/helloworld.Po' tmpdepfile='.deps/helloworld.TPo' /
                depmode=gcc3 /bin/sh ../depcomp /
                gcc -DPACKAGE_NAME=/"/" -DPACKAGE_TARNAME=/"/" -DPACKAGE_VERSION=/"/" -DPACKAGE_STRING=/"/" -DPACKAGE_BUGREPORT=/"/" -DPACKAGE=/"mg-samples/" -DVERSION=/"1.3.1/" -DSTDC_HEADERS=1 -DHAVE_SYS_WAIT_H=1 -DTIME_WITH_SYS_TIME=1 -DHAVE_SYS_TYPES_H=1
-DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_UNISTD_H=1 -DHAVE_MINIGUI_COMMON_H=1 -DHAVE_DECL__LITE_VERSION=0 -DHAVE_DECL__STAND_ALONE=0
-DHAVE_DECL__USE_NEWGAL=1  -I. -I.     -g -O2 -Wall -Wstrict-prototypes -pipe -D_REENTRANT -c `test -f 'helloworld.c' || echo './'`helloworld.c
            gcc  -g -O2 -Wall -Wstrict-prototypes -pipe -D_REENTRANT   -o helloworld  helloworld.o  -lminigui -lm -lpthread -lc
            /usr/local/lib/libminigui.so: undefined reference to `pthread_kill_other_threads_np'
            collect2: ld returned 1 exit status
            make[1]: *** [helloworld] 错误 1
            make[1]: Leaving directory `/home/jack/download/minigui/minigui1.3.x/soures/mg-samples-1.3.1/src'
            make: *** [all-recursive] 错误 1

            原因：删除 MiniGUI 源代码中调用'pthread_kill_other_threads_np'这个函数
            的语句。应该在 src/kernel/init.c 文件中，也可以运行 grep 找一下这个函数。
            ~/download/minigui/minigui1.3.x/soures$ grep -r -n 'pthread_kill_other_threads_np' .
            ./libminigui-1.3.3/src/kernel/init.c:435:        pthread_kill_other_threads_np ();

        2.4.3 sudo make install

    2.5 安装综合例子mde-1.3.0

            ./configure && make && make install

---至此安装完成---

三 配置qvfb，运行示例程序
    3.1 编辑/usr/local/etc/MiniGUI.cfg，将GAL和IAL引擎均改为qvfb：
         25 [system]
         26 # GAL engine
         27 gal_engine=qvfb
         28
         29 # IAL engine
         30 ial_engine=qvfb
         31
         32 mdev=/dev/mouse
         33 mtype=IMPS2
         34
         35 [fbcon]
         36 defaultmode=1024x768-16bpp
         37
         38 [qvfb]
         39 defaultmode=640x480-16bpp
         40 display=0
         41

    3.2 运行"qvfb &"以后台运行方式启动虚拟帧缓冲区：
        linux:/home/work/minigui/mg-samples-1.3.1 # qvfb &
    3.3 菜单File->Configure，修改显示模式与MiniGUI.cfg保持一致，即“640x480-16bpp”。

    否则在运行综合示例俄罗斯方块时，会出现以下提示：
        ./russia 
        No available video device.
        NEWGAL: Does not find matched engine: qvfb.
        GDI: Can not get graphics engine information!
        InitGUI failure when using /usr/local/etc/MiniGUI.cfg as cfg file.

 

           qvfb config
    3.4 接着就可以运行示例程序：
        ~/download/minigui/minigui1.3.x/soures/mg-samples-1.3.1/src$ ./worldtime
        worldtime运行效果图

 

    3.5 俄罗斯方块综合示例：mde-1.3.0/russia$  ./russia

 



 

四 参考资料
http://blog.csdn.net/binghuiliang/archive/2007/09/28/1805026.aspx
https://hi.baidu.com/aokikyon/blog/item/558a4a3e7f9a173b71cf6c53.html
http://oss.lzu.edu.cn/modules/lifetype/index.php?op=ViewArticle&articleId=131&blogId=6

------------------

https://blog.csdn.net/fangcaixia498602700/article/details/6330547

> make qt3
sudo apt-get install libxt-dev

> make qt3
./init.sh
configure -no-stl -thread

> make qvfb
configure --with-qt-dir=/usr/local/qt/

> run qvfb
export LD_LIBRARY_PATH=/usr/local/qt/lib:$LD_LIBRARY_PATH
sudo ldconfig

> mg-samples
LDFLAGS=-ljpeg ./configure && make  
