//对于lseek，管道，FIFO，套接字lseek返回一

#include "apue.h"
int main()
{
	if(lseek(STDIN_FILENO,0,SEEK_CUR) == -1)
	{
		printf("cannot seek\n");
	}
	else printf("seek ok\n");
	exit(0);
}	
