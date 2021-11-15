#include<stdlib.h>
#include<stdio.h>
int main(){
	int nbr;
	printf("saisie un nombre:\n");
	scanf("%d",&nbr);
	if(nbr>0){
		printf(" le nombre est positif.");
	}else if(nbr<0){
	printf(" le nombre est négatif.");
	
	}else 
		printf(" le nombre est nule.");
	
	return 0;
}
