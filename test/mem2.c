#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc) {
    time_t start = time(NULL);
    for (int i=0; i < 1000000001 ; ++i) {
        continue;
    }
        printf("mem2 time : %lds\n", time(NULL) - start);
        printf("mem2 pid  : %u\n", getpid());
}
