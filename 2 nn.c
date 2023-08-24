#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


int yyy(int *c){
	int  n; 
	printf("\nsi quiere mostrar la contraseña aprete 1 \n");
	scanf("%d",&n);
	
	
	if(n>=1){
		printf("%c%c%c%c%c%c\n",c[1],c[2],c[3],c[4],c[5],c[6]);
		
	}
	
	fflush(stdin);
}


int main(int argc, char *argv[]) {
	
	int i=0,c[6];
	char l;
	
	printf("inserte contraseña\n");
	fflush(stdin); 
for(i=1;i<=6;i++){
	
		l=getch();
		printf("*");
		c [i]=l;
}
	
	fflush(stdin);

	yyy(c);
	
	
	
	
	return 0;
}
