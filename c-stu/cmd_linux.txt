

linux 文件系统结构
    /：根目录，是所有其他目录和文件的起始点。
    /bin：存放基本的二进制文件，也就是系统命令。
    /sbin：存放系统二进制文件，通常是系统管理员使用的命令。
    /etc：存放系统配置文件。
    /dev：包含设备文件，这些文件代表硬件设备。
    /proc：虚拟文件系统，提供系统和进程信息。
    /var：存放经常变化的文件，如日志文件。
    /tmp：存放临时文件。
    /usr：用户相关的应用程序和文件。
        /usr/bin：用户级的二进制文件。
        /usr/sbin：用户级的系统二进制文件。
        /usr/share：共享数据。
        /usr/local：存放本地安装的软件。
    /lib：存放系统库文件。
    /opt：存放可选的应用程序包。
    /boot：存放启动加载程序和内核文件。
    /home：用户的主目录，每个用户有自己的子目录。
    /root：系统管理员（root用户）的主目录。
    /mnt：临时挂载文件系统。

lis -R
	递归列出文件

cat -b -s hello.txt

nl hello.txt

head -n hello.txt

tail -n hello.txt


cp 用于复制

cp -r 用于复制文件夹
   -i 在复制时会有提示

mv 移动文件和重命名文件

touch 创建文件或修改时间戳

rm 删除文件或者文件夹
	-i 交互式
	-r 删除文件夹

mkdir 创建文件夹
	-p 创建多个多层文件夹


vi / vim  command 
文件操作
vi test.txt

:q!
:wq
:x
:w
:q
:w test01.txt            文件另存，不退出
:r test02.txt            读入文件test02.txt内容


i/I
a/A
o/O

 
:!command 在文件不关闭的情况执行一个命令,命令结果执行结束后按Enter回来

[N]x
[N]yy
[N]dd
p或P
u
y0
y$
d0
d$
:12,23y
:12,23d
:23,$d       删除23行到结尾行



:s/str1/str2                         当前行替换第一个
:s/str1/str2/g                       当前行全部替换

:.,$ s/str1/str2/g                   当前行到结尾全部替换
 
:1,$ s/str1/str2/g                   全文替换
:%s/str1/str2/g		             全文替换


:12,45s/str1/str2/g                  12-45行全部替换





gcc

gcc -o hello hello.c
	-o      输出可执行文件
	-c	只要求编译器输出目标代码（.o文件 不必输出可执行文件）
	-g	用于调试
	-E	输出预编译代码(.i文件结尾,可以查看编译前的代码)
	-Wall	
	./hello       运行编译好的文件输出结果



















