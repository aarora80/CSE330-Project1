#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>

int main(){
	long sys_call_return_value = syscall(548);
	
	if (sys_call_return_value == 0){
		printf("System call invoked successfully!\n");
	}else{
		perror("System call failed");
	}
	return 0;
}

