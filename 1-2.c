#include "apue.h"

#define BUFFERSIZE 4096

int main(void)
{
	int n;
	char buf[BUFFERSIZE];
	
	while((n = read(STDIN_FILENO,buf,BUFFERSIZE)) >0 )
	{
		if(write(STDOUT_FILENO,buf,n) != n )
		{
			err_sys("write_error");
		}
	}
	
	if(n < 0)
	{
		err_sys("read_error");
	}


exit(0);

}
