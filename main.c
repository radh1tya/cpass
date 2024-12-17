#include <stdio.h>
#include <stdlib.h>

void help(void);
void about(void);
void clearScreen(void) {
#if defined(__linux__) || defined(__unix__)
    printf("\e[1;1H\e[2J");
    #endif
#if defined(_WIN32)
    system("cls");
    #endif
}
void shell() {
    char * inputShell = malloc(2);
    while(1) {
	printf("cpass> ");
	fgets(inputShell,2,stdin);
	if(*inputShell == 'q') {
	    printf("goodbye sir :(\n");
	    break;
	    if(*inputShell == 'h') {
		help();
	    }
	    if(*inputShell == 'v') {
		about();
	    }
	}
    }
}

int main() {
    clearScreen();
    printf("cpass - simple pass management\nradhitya.org\n");
    shell();
    return 0;
}
