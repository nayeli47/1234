#include <stdio.h>
#include <stdlib.h>


float imp(float n1,float n2,int cont, float f,int acu,int i,char sn);
int main(int argc, char *argv[]) {
	
	
	float n1,n2,f=0;
	int acu=0,cont=0,i=0;
	char sn;
	
		printf("ingrese un  numero\n");
		scanf("%f",&n1);
		fflush(stdin);
		printf("ingrese otro numero, (si fuese una division este seria el divisor)\n");
		scanf("%f",&n2);
		fflush(stdin);
		
		printf("quiere que se multipliquen? (s o n)\n");
		scanf("%c",&sn); 
		
		
		
	
	

	
	imp(n1,n2,cont,f,acu,i,sn);
	
	return 0;
}


float imp(float n1,float n2,int cont, float f,int acu,int i,char sn){
	switch(sn){
	case 's':	
	case 'S':for(i=1;i<=n1;i++){
	acu=acu+n2;
	} printf("la multiplicacion es:%d\n",acu);}
	switch(sn){
	case 'N':	
	case 'n':do{
		
		n1=n1-n2;
		cont=cont+1;
	}while(n1>=n2);

	printf("\nla divivion es:%d mi resto es:%.2f\n",cont,n1);
	
	}

}


