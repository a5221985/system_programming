#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    pid_t pid;
    if ((pid = fork()) > 0)
    {
        printf("This is from the parent context which forked a child with id: %d\n", pid);
    }
    else
    {
        printf("This is form the child context which was forked from a parent and my id that I see is: %d\n", pid);
    }
    return EXIT_SUCCESS;
}
