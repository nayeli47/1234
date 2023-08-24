#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hhh(int l,char num[4]){
	if(l==1){
		if(num[0]=='0'){
			printf("Cero");
		}
		if(num[0]=='1'){
			printf("Uno");
		}
		if(num[0]=='2'){
			printf("Dos");
		}
		if(num[0]=='3'){
			printf("Tres");
		}
		if(num[0]=='4'){
			printf("Cuatro");
		}
		if(num[0]=='5'){
			printf("Cinco");
		}
		if(num[0]=='6'){
			printf("Seis");
		}
		if(num[0]=='7'){
			printf("Siete");
		}
		if(num[0]=='8'){
			printf("Ocho");
		}
		if(num[0]=='9'){
			printf("Nueve");
		}
	}
	if(l==2){
		if(num[0]=='1' ||num[0]=='2'){
			if(num[0]=='1'){
				if(num[1]=='0'){
					printf("Diez");
				}
				if(num[1]=='1'){
					printf("Once");
				}
				if(num[1]=='2'){
					printf("Doce");
				}
				if(num[1]=='3'){
					printf("Trece");
				}
				if(num[1]=='4'){
					printf("Catorce");
				}
				if(num[1]=='5'){
					printf("Quince");
				}
				if(num[1]=='6'){
					printf("Dieciseis");
				}
				if(num[1]=='7'){
					printf("Diecisiete");
				}
				if(num[1]=='8'){
					printf("Dieciocho");
				}
				if(num[1]=='9'){
					printf("Diecinueve");
				}
			}
			if(num[0]=='2'){
				if(num[1]=='0'){
					printf("Veinte");
				}
				if(num[1]=='1'){
					printf("Veintiuno");
				}
				if(num[1]=='2'){
					printf("Veintidos");
				}
				if(num[1]=='3'){
					printf("Veintitres");
				}
				if(num[1]=='4'){
					printf("Veinticuatro");
				}
				if(num[1]=='5'){
					printf("Veinticinco");
				}
				if(num[1]=='6'){
					printf("Veintiseis");
				}
				if(num[1]=='7'){
					printf("Veintisiete");
				}
				if(num[1]=='8'){
					printf("Veintiocho");
				}
				if(num[1]=='9'){
					printf("Veintinueve");
				}
			}
		}
		else{
			if(num[0]=='3'){
				printf("Treinta");
			}
			if(num[0]=='4'){
				printf("Cuarenta");
			}
			if(num[0]=='5'){
				printf("Cincuenta");
			}
			if(num[0]=='6'){
				printf("Sesenta");
			}
			if(num[0]=='7'){
				printf("Setenta");
			}
			if(num[0]=='8'){
				printf("Ochenta");
			}
			if(num[0]=='9'){
				printf("Noventa");
			}
			if(num[1]!='0'){
				if(num[1]=='1'){
					printf(" y uno");
				}
				if(num[1]=='2'){
					printf(" y dos");
				}
				if(num[1]=='3'){
					printf(" y tres");
				}
				if(num[1]=='4'){
					printf(" y cuatro");
				}
				if(num[1]=='5'){
					printf(" y cinco");
				}
				if(num[1]=='6'){
					printf(" y seis");
				}
				if(num[1]=='7'){
					printf(" y siete");
				}
				if(num[1]=='8'){
					printf(" y ocho");
				}
				if(num[1]=='9'){
					printf(" y nueve");
				}
			}
		}
	}
	if(l==3){
		if(num[0]=='1'){
			if(num[1]=='0' && num[2]=='0'){
				printf("Cien");
			}
			else{
				printf("Ciento ");
			}
		}
		if(num[0]=='2'){
			if(num[1]=='0' && num[2]=='0'){
				printf("Doscientos");
			}
			else{
				printf("Doscientos ");
			}
		}
		if(num[0]=='3'){
			if(num[1]=='0' && num[2]=='0'){
				printf("Trescientos");
			}
			else{
				printf("Trescientos ");
			}
		}
		if(num[0]=='4'){
			if(num[1]=='0' && num[2]=='0'){
				printf("Cuatrocientos");
			}
			else{
				printf("Cuatrocientos ");
			}
		}
		if(num[0]=='5'){
			if(num[1]=='0' && num[2]=='0'){
				printf("Quinientos");
			}
			else{
				printf("Quinientos ");
			}
		}
		if(num[0]=='6'){
			if(num[1]=='0' && num[2]=='0'){
				printf("Seiscientos");
			}
			else{
				printf("Seiscientos ");
			}
		}
		if(num[0]=='7'){
			if(num[1]=='0' && num[2]=='0'){
				printf("Setecientos");
			}
			else{
				printf("Setecientos ");
			}
		}
		if(num[0]=='8'){
			if(num[1]=='0' && num[2]=='0'){
				printf("Ochocientos");
			}
			else{
				printf("Ochocientos ");
			}
		}
		if(num[0]=='9'){
			if(num[1]=='0' && num[2]=='0'){
				printf("Novecientos");
			}
			else{
				printf("Novecientos ");
			}
		}
		if(num[1]=='1' || num[1]=='2'){
			if(num[1]=='1'){
				if(num[2]=='0'){
					printf("diez");
				}
				if(num[2]=='1'){
					printf("once");
				}
				if(num[2]=='2'){
					printf("doce");
				}
				if(num[2]=='3'){
					printf("trece");
				}
				if(num[2]=='4'){
					printf("catorce");
				}
				if(num[2]=='5'){
					printf("quince");
				}
				if(num[2]=='6'){
					printf("dieciseis");
				}
				if(num[2]=='7'){
					printf("diecisiete");
				}
				if(num[2]=='8'){
					printf("dieciocho");
				}
				if(num[2]=='9'){
					printf("diecinueve");
				}
			}
			if(num[1]=='2'){
				if(num[2]=='0'){
					printf("veinte");
				}
				if(num[2]=='1'){
					printf("veintiuno");
				}
				if(num[2]=='2'){
					printf("veintidos");
				}
				if(num[2]=='3'){
					printf("veintitres");
				}
				if(num[2]=='4'){
					printf("veinticuatro");
				}
				if(num[2]=='5'){
					printf("veinticinco");
				}
				if(num[2]=='6'){
					printf("veintiseis");
				}
				if(num[2]=='7'){
					printf("veintisiete");
				}
				if(num[2]=='8'){
					printf("veintiocho");
				}
				if(num[2]=='9'){
					printf("veintinueve");
				}
			}
		}
		else{
			if(num[1]=='3'){
				printf("creinta");
			}
			if(num[1]=='4'){
				printf("cuarenta");
			}
			if(num[1]=='5'){
				printf("cincuenta");
			}
			if(num[1]=='6'){
				printf("sesenta");
			}
			if(num[1]=='7'){
				printf("setenta");
			}
			if(num[1]=='8'){
				printf("ochenta");
			}
			if(num[1]=='9'){
				printf("noventa");
			}
			if(num[2]!='0'){
				if(num[1]!='0'){
					if(num[2]=='1'){
						printf(" y uno");
					}
					if(num[2]=='2'){
						printf(" y dos");
					}
					if(num[2]=='3'){
						printf(" y tres");
					}
					if(num[2]=='4'){
						printf(" y cuatro");
					}
					if(num[2]=='5'){
						printf(" y cinco");
					}
					if(num[2]=='6'){
						printf(" y seis");
					}
					if(num[2]=='7'){
						printf(" y siete");
					}
					if(num[2]=='8'){
						printf(" y ocho");
					}
					if(num[2]=='9'){
						printf(" y nueve");
					}
				}
				else{
					if(num[2]=='1'){
						printf("uno");
					}
					if(num[2]=='2'){
						printf("dos");
					}
					if(num[2]=='3'){
						printf("tres");
					}
					if(num[2]=='4'){
						printf("cuatro");
					}
					if(num[2]=='5'){
						printf("cinco");
					}
					if(num[2]=='6'){
						printf("seis");
					}
					if(num[2]=='7'){
						printf("siete");
					}
					if(num[2]=='8'){
						printf("ocho");
					}
					if(num[2]=='9'){
						printf("nueve");
					}
				}
			}
		}
	}
	if(l==4){
		if(num[0]=='1'){
			if(num[1]=='0' && num[2]=='0' && num[3]=='0'){
				printf("Mil");
			}
			else{
				printf("Mil ");
			}
		}
	
		if(num[1]=='1'){
			if(num[2]=='0' && num[3]=='0'){
				printf("cien");
			}
			else{
				printf("ciento ");
			}
		}
		if(num[1]=='2'){
			if(num[2]=='0' && num[3]=='0'){
				printf("doscientos");
			}
			else{
				printf("doscientos ");
			}
		}
		if(num[1]=='3'){
			if(num[2]=='0' && num[3]=='0'){
				printf("trescientos");
			}
			else{
				printf("trescientos ");
			}
		}
		if(num[1]=='4'){
			if(num[2]=='0' && num[3]=='0'){
				printf("cuatrocientos");
			}
			else{
				printf("cuatrocientos ");
			}
		}
		if(num[1]=='5'){
			if(num[2]=='0' && num[3]=='0'){
				printf("quinientos");
			}
			else{
				printf("quinientos ");
			}
		}
		if(num[1]=='6'){
			if(num[2]=='0' && num[3]=='0'){
				printf("seiscientos");
			}
			else{
				printf("seiscientos ");
			}
		}
		if(num[1]=='7'){
			if(num[2]=='0' && num[3]=='0'){
				printf("setecientos");
			}
			else{
				printf("setecientos ");
			}
		}
		if(num[1]=='8'){
			if(num[2]=='0' && num[3]=='0'){
				printf("ochocientos");
			}
			else{
				printf("ochocientos ");
			}
		}
		if(num[1]=='9'){
			if(num[2]=='0' && num[3]=='0'){
				printf("novecientos");
			}
			else{
				printf("novecientos ");
			}
		}
		if(num[2]=='1' || num[2]=='2'){
			if(num[2]=='1'){
				if(num[3]=='0'){
					printf("diez");
				}
				if(num[3]=='1'){
					printf("once");
				}
				if(num[3]=='2'){
					printf("doce");
				}
				if(num[3]=='3'){
					printf("trece");
				}
				if(num[3]=='4'){
					printf("catorce");
				}
				if(num[3]=='5'){
					printf("quince");
				}
				if(num[3]=='6'){
					printf("dieciseis");
				}
				if(num[3]=='7'){
					printf("diecisiete");
				}
				if(num[3]=='8'){
					printf("dieciocho");
				}
				if(num[3]=='9'){
					printf("diecinueve");
				}
			}
			if(num[2]=='2'){
				if(num[3]=='0'){
					printf("veinte");
				}
				if(num[3]=='1'){
					printf("veintiuno");
				}
				if(num[3]=='2'){
					printf("veintidos");
				}
				if(num[3]=='3'){
					printf("veintitres");
				}
				if(num[3]=='4'){
					printf("veinticuatro");
				}
				if(num[3]=='5'){
					printf("veinticinco");
				}
				if(num[3]=='6'){
					printf("veintiseis");
				}
				if(num[3]=='7'){
					printf("veintisiete");
				}
				if(num[3]=='8'){
					printf("veintiocho");
				}
				if(num[3]=='9'){
					printf("veintinueve");
				}
			}
		}
		else{
			if(num[2]=='3'){
				printf("treinta");
			}
			if(num[2]=='4'){
				printf("cuarenta");
			}
			if(num[2]=='5'){
				printf("cincuenta");
			}
			if(num[2]=='6'){
				printf("sesenta");
			}
			if(num[2]=='7'){
				printf("setenta");
			}
			if(num[2]=='8'){
				printf("ochenta");
			}
			if(num[2]=='9'){
				printf("noventa");
			}
			if(num[3]!='0'){
				if(num[2]!='0'){
					if(num[3]=='1'){
						printf(" y uno");
					}
					if(num[3]=='2'){
						printf(" y dos");
					}
					if(num[3]=='3'){
						printf(" y tres");
					}
					if(num[3]=='4'){
						printf(" y cuatro");
					}
					if(num[3]=='5'){
						printf(" y cinco");
					}
					if(num[3]=='6'){
						printf(" y seis");
					}
					if(num[3]=='7'){
						printf(" y siete");
					}
					if(num[3]=='8'){
						printf(" y ocho");
					}
					if(num[3]=='9'){
						printf(" y nueve");
					}
				}
				else{
					if(num[3]=='1'){
						printf("uno");
					}
					if(num[3]=='2'){
						printf("dos");
					}
					if(num[3]=='3'){
						printf("tres");
					}
					if(num[3]=='4'){
						printf("cuatro");
					}
					if(num[3]=='5'){
						printf("cinco");
					}
					if(num[3]=='6'){
						printf("seis");
					}
					if(num[3]=='7'){
						printf("siete");
					}
					if(num[3]=='8'){
						printf("ocho");
					}
					if(num[3]=='9'){
						printf("nueve");
					}
				}
			}
		}
	}
}
	
	int main(){
		char num[3],n1,n2,n3;
		int r;
		printf("Inserte un numero\n");
		gets(num);
		r=strlen(num);
		
		hhh(r,num);
		
		return 0;
	}
