#include <stdio.h>
#include <stdio.h>
#include <conio.h>

float imp(float n1, float n2,float n3,float r){
	r=0;
	r=(n1+n2+n3)/3;
	printf("\n%.2f\n",r);
}
	
	
	int main(int argc, char *argv[]) {
		
		float n1,n2,n3,r;
		printf("ingrese un numero\n");
		scanf("%f",&n1);
		printf("ingrese otro numero\n");
		scanf("%f",&n2);
		printf("ingrese un tercer numero\n");
		scanf("%f",&n3);
		imp(n1,n2,n3,r);
		
		return 0;
	}
	
	
	
