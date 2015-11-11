#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc,char **argv) {
	int returnCode = 1;
	if ( argc == 2 && atoi(argv[1]) != 0 ) {
		printf("Error: %d\n%s\n",atoi(argv[1]),strerror(atoi(argv[1])));
		returnCode = 0;
	} else {
		printf("%s <errornumber>\n",argv[0]);
	}
	return(returnCode);
}

