#include<stdlib.h>
#include<stdio.h>
#include<math.h>


//Ecrivez un programme qui demande la temp�rature en Fahrenheit et la transforme en degr� Celsius et affiche la sensation ressentie (tr�s froid, froid, chaud, tr�s chaud)

 


int main(){
	float F;
	float C;
	 printf(" Donner  la temp�rature en Fahrenheit\n ");
	 scanf(" %f",&F);
	 
	C = (F-32)/1.8;
	printf(" la temp�rature en Celsius:%d ",C);
	
	printf("\n");
	if(C<=0){
		printf("  tr�s froid");
		
		
	}else if(C>0 && C<=15){
	

	printf("  froid");
      }else if(C>15 && C<=30)
	  {
	printf("  chaud");
      }else 
	
	printf("  tr�s chaud");
	
	
}
