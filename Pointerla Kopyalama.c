#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void kopya(char *,char*);
int main(int argc, char *argv[]) {
	char dizi[5]="durzu";
	char dizi1[5];
	kopya(dizi,dizi1);
	
	return 0;
}
void kopya(char *x,char *y){
	for(;(*y=*x)!='\0';x++,y++){
		printf("%c",*y);
	}
}
