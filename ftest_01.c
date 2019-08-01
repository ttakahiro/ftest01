#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sub1(void);
void sub2(char *);

char file_name[20];
int main(int argc, char *argv[]){
	
	if(argc< 3){
		printf("Two file names needed\n");
		exit(0);
	}
	
	strcpy(file_name,argv[1]);
	
	sub1();
	
	sub2(argv[2]);
	
	fopen("File_OPen", "r");
	
	return 0;
}

