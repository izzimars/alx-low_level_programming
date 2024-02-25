#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	 pid_t child_pid;
	 int status;
	 int i = 0;
	 
	 while (i < 5)
	 {
		 child_pid = fork();
		     if (child_pid == -1)
		     {
			     perror("Error:");
			     return (1);
		     }
		 if (child_pid == 0)
		 {
			 char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
			 printf("My pid is %u\n", child_pid);
			 if (execve(argv[0], argv, NULL) == -1)
				 perror("Error:");
			 printf("My pid is %u\n", child_pid);
		 }
		 wait(&status);
		 printf("My pid is %u\n", child_pid);
		 printf("My pid is %u\n", getpid());
		 printf("Oh, it's all better now\n");
		 i++;
		 sleep(3);
	 }
	 return (0);
}
