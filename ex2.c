#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int value = 5;

int main(){

	pid_t pid, pid1;
	pid = fork();
	
	if (pid == 0) {
		value += 15;
		printf("value no filho = %d\n", value);
		return 0;
	} else if (pid > 0){
		wait(NULL);
		printf("PARENT: value = %d\n", value);
		return 0;
	}
	return 0;
}
