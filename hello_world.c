#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	if (argc < 2){
		printf("Falta o nome a ser printado@@@\n");
		exit(1);
	}
	printf("Hello, %s!\n", argv[1]);
	printf("tenha um ótimo dia\n");

	return 0;
}
