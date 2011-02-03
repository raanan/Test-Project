/*
	Raanan Korinow
	CS 350, Lab 2
*/

#include <stdio.h>

#define SIGINT 2	// define signal mapped to ctrl-c
#define SIGSTP 20	// define signal mapped to ctrl-z

void sigint_handler(void);
void sigstp_handler(void);

int main() { 
	/*
		Tell OS to run signal handler for SIGINT (ctrl-c)
	*/
	signal(SIGINT, sigint_handler);

	/*
		Tell OS to run signal handler for SIGSTP (ctrl-z)
	*/
	signal(SIGSTP, sigstp_handler);

	while(1);  // loop forever!
}
/*
	SIGINT handler
*/
void sigint_handler() {
	signal(SIGINT, sigint_handler);
	printf("\nyou have pressed ctrl-c \n");
}

/*
	SIGSTP handler
*/
void sigstp_handler() {
	signal(SIGSTP, sigstp_handler);
	printf("\nyou have pressed ctrl-z\n");
}
