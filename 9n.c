#include <stdio.h>
#include <stdlib.h>


float imp(float prom);
int main() {
	
	
	float nota,prom;
	int cont=0,acu=0;
	do{
	printf("ingrese una nota\n");
	scanf("%f",&nota);
	fflush(stdin);
	acu=nota+acu;
	cont=cont+1;
	} while(nota>0);
	
	prom=acu/(cont-1);
	
	
	imp(prom);
	
	return 0;
}


float imp(float prom){
	
	if(9<=prom && prom<=10){
		printf("\n4\n");
	}else{
	if(7<=prom && prom<=8){
		printf("\n3\n");
	}else{
	if(6<=prom && prom<=7){
		printf("\n2\n");
	}else{
	if(5<=prom && prom<=6){
		printf("\n1\n");
	}else{
	if(prom>=11){
		printf("la nota no es valida\n");
	}else{
		printf("\n0\n");
					}
				}
			}
		}
	}
	
	
	
}
	
	


