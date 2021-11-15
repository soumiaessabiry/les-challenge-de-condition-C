#include<stdlib.h>
#include<stdio.h>
int main(){
	long annee;
	int choix;
	printf("Entrez une annee:\n");
	scanf("%d",&annee);
	printf("veulliez choisi :\n");
	printf(" 1.Mois\n");
	printf(" 2.Jours\n");
	printf(" 3.Heures\n");
	printf(" 3.Minute\n");
	printf(" 4.Secondes\n");
	scanf("%d",&choix);
	
	if( annee%4==0){
		switch(choix){
			case 1: annee=12;
			printf("%ld mois",annee);
			break;
			case 2: annee=12*30+6;
			printf("%ld jour",annee);
			break;
			case 3: annee=24*(12*30+6);
			printf("%ld heures",annee);
			break;
			case 4: annee=24*(12*30+6)*60;
			printf("%ld minute",annee);
			break;
			case 5: annee=24*(12*30+6)*60*60;
			printf("%ld seconde",annee);
			break;
			
		
		}
		
		
	}else
	
	
		switch(choix)
		{
		
			case 1: annee=12;
			printf("%ld mois",annee);
			break;
			case 2: annee=12*30+5;
			printf("%ld jour",annee);
			break;
			case 3: annee=24*(12*30+5);
			printf("%ld heures",annee);
			break;
			case 4: annee=24*(12*30+5)*60;
			printf("%ld minute",annee);
			break;
			case 5: annee=24*(12*30+5)*60*60;
			printf("%ld seconde",annee);
			break;
		}
	
return 0;	
	
}
