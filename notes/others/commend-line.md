`cat filename`：查看该文件的内容

`vmware设置共享文件夹不显示问题。在安装vmtool并设置共享之后在/usr/bin路径下面运行一遍vmware-config-tools.pl`

`echo "****" > file`：将****写进file文件内

`cat oceans.txt > continents.txt` 将前文件的内容覆盖至后面的文件，后面文件的内容将被删除

`cat a.txt >> b.txt` 将a加到b后面，输出命令后b将包含a和b的两个内容

`uniq` 过滤掉文件里面重复的行

`sort` 将文件的行按字母顺序排列

`grep` 寻找文件中含有目标对象的行并且将其输出

`grep -i` 寻找文件中与要寻找的对象相匹配的行并且不分大小写，然后输出，而grep必须区分大小写

`grep -R +string +file path` 在某一路径下寻找与string相匹配的文本并输出文本名称以及行

`grep -Rl +string + file path`则跟上面一样但是输出时不输出行号只返回文件名

`sed 's/str1/str2/' ***.txt`在该文本中将str1替换成str2一行只能替换一次

`sed 's/str1/str2/g' ***.txt`与上面相同但是文本中全部被替换，不论一行中有几个

`nano hello.txt` 首先新建了hello.txt接着输入 "hello world" 将被写入hello.txt 然后Ctrl+o保存ctrl+x退出编辑ctrl+g打开帮助菜单

`nano ~/.bash_profile` 建立一个文件名为~/.bash_profile 默认配置

`/etc/profile`:此文件为系统的每个用户设置环境信息,当用户第一次登录时,该文件被执行.

并从`/etc/profile.d`目录的配置文件中搜集shell的设置.

`/etc/bashrc:`为每一个运行`bash shell`的用户执行此文件.当`bash shell`被打开时,该文件被读取.

`~/.bash_profile`:每个用户都可使用该文件输入专用于自己使用的shell信息,当用户登录时,该
文件仅仅执行一次!默认情况下,他设置一些环境变量,执行用户的.bashrc文件.

`~/.bashrc`:该文件包含专用于你的bash shell的bash信息,当登录时以及每次打开新的shell时,该
该文件被读取.

`~/.bash_logout`:当每次退出系统(退出bash shell)时,执行该文件.

===============================

所以

`/home/oracle/.bash_profile oracle`用户的配置

`/etc/skel/.bash_profile` 默认配置

`/root/.bash_profile root`用户的配置

`alias pd="pwd" alias`命令为建立一个快捷键pd只要输入pd既可执行pwd命令

但是alias之后必须执行`source ~/.bash_profile`才能生效

`export USER="jane"`环境变量是可变的，这条命令将变量USER设置为jane通常USER指计算机的名称echo $USER返回变量的值。 $通常用作返回变量的
值

`export PS1=">>"`这里我们将PS1编程了>>PS1通常指$即最前面的提示符

`echo $HOME` 返回环境变量HOME	

`echo $PATH PATH`是一个环境变量存储了一个分支用冒号隔开，这种粉质下面存储了很多命令行的脚本

env 就是environment的缩写，返回一个列表包含了大量的命令`env | grep PATH`则在桌面多列表元素里面找PATH然后将其返回
