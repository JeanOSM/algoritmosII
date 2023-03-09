//#include<stdio.h>
//
//struct pessoa{
//	char nome[30];
//	int idade;
//};
//
//
//int main(){
//	struct pessoa cliente[10];
//	for (int i = 0; i<10; i++){
//		printf("Informe um Nome: ");
//		scanf("%s", cliente[i].nome);
//		printf("Informe a idade:");
//		scanf("%d",&cliente[i].idade);
//		
//	
//	}
//	printf("\n\n----------------------\n\n");
//	for (int most = 0; most<10;most++){
//		printf("Nome: %s\n",cliente[most].nome);
//		printf("Idade: %d\n",cliente[most].idade);
//	}
//	return 0;
//}




//
//#include<stdio.h>
//
//int main() {
//	int vetor[10];
//	
//	for (int i=0; i<10;i++){
//		printf("Insira o Numero:\n");
//		scanf("%d", &vetor[i]);
//	}
//
//	for (int z=1;z<11;z++){
//		printf("O numero na posicao %d eh %d\n",z,vetor[z]);
//	}	
//	
//	
//	
//	return 0;
//}




#include<stdio.h>

int main(){
	
	float salario[5];
	float salario2[5];
	
	for (int i=0; i<5;i++){
		printf("Insira o Salario:");
		scanf("%f",&salario[i]);
	}
	
	for (int z=0; z<5;z++){
		
		float calc = salario[z];
		float resut =(calc*0.08);
		salario2[z]=resut+calc;
	}
	
	for (int x=1;x<6;x++){
		printf("O Salario na posicao %d com aumento eh %.2f\n",x,salario2[x]);
	}
	
	return 0;
}

