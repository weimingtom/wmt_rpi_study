$ git clone https://github.com/google/angle  
$ cd angle  
$ git checkout -f chromium/2600  
$ sudo apt-get install gyp  
$ rm -rf out  
$ sudo apt-get install libpci-dev  
$ build/gyp_angle  
$ ls samples  
$ make simple_vertex_shader  
$ out/Debug/simple_vertex_shader  
