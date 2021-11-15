#include<stdlib.h>
#include<stdio.h>
#include<math.h>


//Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius et affiche la sensation ressentie (très froid, froid, chaud, très chaud)

 


int main(){
	float F;
	float C;
	 printf(" Donner  la température en Fahrenheit\n ");
	 scanf(" %f",&F);
	 
	C = (F-32)/1.8;
	printf(" la température en Celsius:%d ",C);
	
	printf("\n");
	if(C<=0){
		printf("  trés froid");
		
		
	}else if(C>0 && C<=15){
	

	printf("  froid");
      }else if(C>15 && C<=30)
	  {
	printf("  chaud");
      }else 
	
	printf("  trés chaud");
	
	
}
