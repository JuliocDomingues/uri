#include<stdio.h>

int main(void){
	double M[12][12], soma = 0, media = 0;
	int lin, col, cont = 0, i = 0;
	char O;

	scanf("%c", &O);

	for(lin = 0; lin < 12; lin++){
		for(col = 0; col < 12; col++){
			scanf("%lf", &M[lin][col]);
		}
	}

	for(lin = 11; lin > 6; lin--){
		for(col = 1 + i; col < 11 - i; col++){
			soma += M[lin][col];
			cont++;
		}
		i++;
	}
	media = soma/cont;

	if(O == 'S')
		printf("%.1lf\n", soma);
	else if(O == 'M')
		printf("%.1lf\n", media);

	return 0;
}