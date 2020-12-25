#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>        /* to write time */
#include <sys/types.h>   /* standard data types for systems programming */
#include <sys/file.h>    /* open() system call */
#include <unistd.h>      /* header file for the POSIX API */
#include <sys/wait.h>    /* for wait() system call */

#define BUFSZ 100


void zeroOUtBuf(char *str) {
    int i;
    for(i=0; i<BUFSZ; i++)
        str[i] =0;
}


int main(int argc, char *argv[])
{
    int status = 0;
    pid_t mypid,parent,cpid;
    int i;
    char buf[100];
    int n;
   // int nsecs = 0;
    int logf;
    int logfd;

    if(argc > 1) 
        n= atoi(argv[1]);
    else
    {
         printf("Usage: ./lab02 <number>\n");
         fflush(stdout);
        exit(1);
    } 
    cpid = fork();

    logfd = open("log", O_WRONLY|O_CREAT|O_TRUNC, 0644);

    if(cpid < 0)
    {
        perror("fork: ");
        exit(0);
    }
        

    if(cpid > 0)
    {
        wait(&status);
        
        if(WIFEXITED(status))
            sprintf(buf,"my child exited with code: %d\n", WEXITSTATUS(status));
            write(1,buf,strlen(buf));

            exit(0);
     }

    time_t timer;
    struct tm *tm_info;
    time(&timer);
    tm_info = localtime(&timer);
    strftime(buf, 26, "%Y:%m:%d %H:%M:%S\n", tm_info);
    write(logfd,buf,strlen(buf));

int fib(int n) {
    if (n < 2) return n;
    else return fib(n-1) + fib(n-2);
     
     printf(buf, 26, "%Y:%m:%d %H:%M:%S\n", tm_info);
}

   sprintf(buf, "fib %d = %d\n", n,fib(n));
   write(logfd,buf,strlen(buf));

    close(logf);

    exit(n);
}
