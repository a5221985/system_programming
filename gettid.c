#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t tid;
    asm("movl $186, %eax");
    asm("int $0x80");
    printf("TID: %d\n", tid);
    return 0;
}
