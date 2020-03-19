#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>

#include <getopt.h>

#include "find_min_max.h"
#include "utils.h"

int main(int argc, char **argv) {

    pid_t child = fork();
    if (child>=0)
    {
        if(child==0)
        {
            printf("after");
            execv("sequential_min_max",argv);
            printf("before");
        }
    }
    wait(0);
    printf("\n");
	return 0;
}
