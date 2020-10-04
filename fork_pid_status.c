#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    if ((pid = fork()) > 0)
    {
        sleep(30);
    }
    else
    {
        sleep(30);
    }
    return EXIT_SUCCESS;
}
