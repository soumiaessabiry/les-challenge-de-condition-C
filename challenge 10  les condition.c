#include<stdlib.h>
#include<stdio.h>

int main(){
	
	float temperature;
	printf(" Entrez la température de l'eau.\n");
	scanf("%f",&temperature);
	if(temperature<=0){
		printf("Glace");	
	
	}else if(temperature>0 && temperature<=100){
		
		printf("Eau.");
	
		
	}else
	printf("Vapeur.");
	
		
	return 0;
}
