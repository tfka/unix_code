//对于一个文件，可以在中间留一个空洞，比如在前面写了一堆数据，然后跳到很后面一个位置去，中间什么都不写，那么中间为空洞，并且不占硬盘大小。
#include "apue.h"
#include <fcntl.h>
char buf1 [] = "abcdefghij";
char buf2 []= "ABCDEFGHIJ";
int main(void)
{
    int fd;
    if( (fd = creat("file.hole",FILE_MODE) )< 0)
    {
        err_sys("creat error\n");
    }
    if(write(fd, buf1 ,10) < 10)
       err_sys("buf1 write error\n");
    if(lseek(fd, 16384, SEEK_SET) == -1)
        err_sys("lseek error\n");
    if(write(fd, buf2 ,10) <10)
        err_sys("buf2 write error\n");
    exit(0);
}
