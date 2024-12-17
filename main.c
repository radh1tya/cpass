#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help(void) {
	printf("a - add new password\n");
	printf("l - list saved password\n");
	printf("h - help\n");
	printf("q - quit\n");
}
void clearScreen(void) {
#if defined(__linux__) || defined(__unix__)
    printf("\e[1;1H\e[2J");
    #endif
#if defined(_WIN32)
    system("cls");
    #endif
}

char xor_en(char *pass, char *key) {
	char *output = malloc(sizeof(output) + 1);
    for(int i = 0;i<strlen(pass);++i) {
	    output[i] = pass[i] ^ key[i % strlen(key)];
    }
    return (*output);
}
void shell() {
    char * inputShell = malloc(2);
    size_t len;
    while(1) {
	printf("cpass> ");
	getline(&inputShell,&len,stdin);
	if(*inputShell == 'q') {
	    printf("goodbye sir :(\n");
	    break;
	}
	else if(*inputShell == 'h') {
		help();
	    }
	else if(*inputShell == 'v') {
		printf("cpass - simple pass manager\n");
	}
    }
}

int main() {
    clearScreen();
    printf("cpass - simple pass management\nradhitya.org\n");
    shell();
    return 0;
}
