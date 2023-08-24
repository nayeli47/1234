#include <stdio.h>
#include <stdio.h>
#include <conio.h>

float imp(float n1,int g,char sn){
	switch(sn){
	case 's':	
	case 'S':g=n1*24;
			 printf("\nlos dias en horas son:%f horas\n",g); break;
	case 'N':	
	case 'n':g=n1/24;
			 printf("\nlas horas en dias son:%f dias\n",g);break;
	}
	
}
	int main(int argc, char *argv[]) {
		
		int g;
		float n1;
		char sn;
		printf("ingrese un numero\n");
		scanf("%f",&n1);
		
		printf("quieres transformarlo en horas?(s o n)\n");
		scanf("%c",&sn);
		
		
		
		imp(n1,g,sn);
		
		return 0;
	}
	
	
	
	
