#include<stdlib.h>
#include<stdio.h>

int main(){
	float  moyenne;
	printf(" saisie la moyenne  d'un éléve:\n");
	scanf("%f",&moyenne);
	if (moyenne>=10 && moyenne<12 ){
		printf("passable");
		
		
	}else if(moyenne>=12 && moyenne<14){
		
		printf("Assez bien");
	}else if( moyenne>=14 && moyenne<16){
			printf("Bien");
		
		
		
	}else 
		printf("Trés bien");
		
		
		
	
	return 0;
	
	
}
