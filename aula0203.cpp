//
//
//#include<Stdio.h>
//
//int main(){
//	int x[100];
//	int i;
//	for (i=0; i<100;++i)
//		x[i]=i;
//		
//	for (i=0;i<100;++i)
//		printf("%d ,",x[i]);
//	printf("\n\n");
//	
//	
//	return 0;
//}

//
//#include<stdio.h>
//
//
//int main(){
//	char nome[25];
//	int i;
//	
//	printf("Digite um nome:\n");
//	gets(nome);
//	printf("O nome que voce digitou e: ");
//	puts(nome);
//	
//	
//	
//	return 0;
//}


//
//#include<stdio.h>
//
//int main(){
//	int matriz[3][3];
//	
//	for(int coluna=0;coluna<3;coluna++){
//		for(int linha=0;linha<3;linha++){
//			printf("Insira um valor:\n");
//			scanf("%d",&matriz[coluna][linha]);
//		}
//	}
//	
//	
//	
//	
//	return 0;
//}


#include<stdio.h>
#include<string.h>
int main(){
	char nome1[20], nome2[20];
	printf("Insira o primeiro nome:\n");
	gets(nome1);
	printf("Insira o segundo nome:\n");
	gets(nome2);
	
	if(strcmp(nome1,nome2)==0){
		printf("Sao iguais!");
	}else
		printf("Sao diferentes!");
	return 0;
}
