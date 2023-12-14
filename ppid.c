#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t mere_pid;

    mere_pid = getppid();
    printf("%u\n", mere_pid);
    return (0);
}
