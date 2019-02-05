#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc) {
    time_t start = time(NULL);
    char * args[] = {"chrt", "-g", "-p", "0", "$$"};

    if(fork() == 0) {
        execv("/usr/bin/chrt", args);
        for (int i=0; i < 1000000001 ; ++i) {
            continue;
        }
    } else {
        wait(NULL);
        printf("mem time : %lds\n", time(NULL) - start);
        printf("mem pid  : %u\n", getpid());
    }
}
