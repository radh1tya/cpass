#include <stdio.h>
#include <stdlib.h>

void shell() {
	char * inputShell = malloc(2);
	while(1) {
		printf("cpass> ");
		fgets(inputShell,2,stdin);
		if(*inputShell == 'q') {
			break;
		}
	}
}

int main() {
	printf("cpass - simple pass management\nradhitya.org\n");
	shell();
	return 0;
}
