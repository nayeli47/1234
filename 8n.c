#include <stdio.h>
#include <stdio.h>
#include <conio.h>

float imp(float n1,float g,char sn);
	int main(int argc, char *argv[]) {
		
	
		float n1,g;
		char sn;
		printf("ingrese un numero\n");
		scanf("%f",&n1);
		fflush(stdin);
		printf("quieres transformarlo en horas?(s o n)\n");
		scanf("%c",&sn);
		fflush(stdin);
		
		
		imp(n1,g,sn);
		
		return 0;
	}
	
	
	float imp(float n1,float g,char sn){
		switch(sn){
		case 's':	
		case 'S':g=n1*24;
		printf("\nlos dias en horas son:%.2f hora/s\n",g); break;
		case 'N':	
		case 'n':g=n1/24;
		printf("\nlas horas en dias son:%.2f dia/s\n",g);break;
		}
		
	}
	
