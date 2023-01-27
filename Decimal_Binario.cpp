#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char num[10];
	char *str1;
	do{
	printf("Ingrese un numero decimal del 0 al 9 o ingresa (s) para salir: ");
	gets(num);
	
		if(strlen(num)<=1){
			
			if(num[0]=='0'){	printf("\n 0 en binario es 0000\n\nSera redirigido al menu...\n\n\n");	}
			else if(num[0] == '1'){	printf("\n1 en binario es 0001\n\nSera redirigido al menu...\n\n\n");	}
			else if(num[0] == '2'){	printf("\n2 en binario es 0010\n\nSera redirigido al menu...\n\n\n");	}
			else if(num[0] == '3'){	printf("\n3 en binario es 0011\n\nSera redirigido al menu...\n\n\n");	}
			else if(num[0] == '4'){	printf("\n4 en binario es 0100\n\nSera redirigido al menu...\n\n\n");	}
			else if(num[0] == '5'){	printf("\n5 en binario es 0101\n\nSera redirigido al menu...\n\n\n");	}
			else if(num[0] == '6'){	printf("\n6 en binario es 0110\n\nSera redirigido al menu...\n\n\n");	}
			else if(num[0] == '7'){	printf("\n7 en binario es 0111\n\nSera redirigido al menu...\n\n\n");	}
			else if(num[0] == '8'){	printf("\n8 en binario es 1000\n\nSera redirigido al menu...\n\n\n");	}
			else if(num[0] == '9'){	printf("\n9 en binario es 1001\n\nSera redirigido al menu...\n\n\n");	}	
			else if(num[0] == 's' || num[0] == 'S'){printf("\nAdio miamol <3");	break;}
			else{printf("\nCaracter invalido\n\n\n");}
		}
		
		else{
			printf("\nEste valor es mayor a 9 o menor que 0\n\n\n");
		}
		getch();
	}while(!num>=0 && !num<=9);
}
