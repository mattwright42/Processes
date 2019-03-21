// Write another program using `fork()`. The child process should print "hello";
// the parent process should print "goodbye". You should ensure that the child
// process always prints first.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    // Your code here
    int pid = fork();
    waitpid(pid, NULL, 0);
    if (pid == 0)
    {
        printf("%s", "Hello!\n");
    }
    else
    {
        printf("%s", "Goodbye!\n");
    }

    return 0;
}
