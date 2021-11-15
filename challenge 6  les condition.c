#include<stdlib.h>
#include<stdio.h>
#include<math.h>
 int main(){
 	int a;
 	int b;
 	int c;
 	int D;
 	int x1;
 	int x2;
 	//D=solution delta
 	printf("le syntaxe de équation  en 2ème degré est ax2+bx+c :\n ");
 	printf("donner la valeur de a= ");
 	scanf("%d",&a);
	printf("donner la valeur de b= ");
 	scanf("%d",&b);
 	printf("donner la valeur de c=");
 	scanf("%d",&c);
 	 D=pow(b,2)-4*a*c;
 	 printf(" le solution de cette équation est %d",D);
 	 
 	 if(D==0){
 	
 	 	printf ("l solution est %d ",x1=-b/2*a);
 	 	
 	 	
	  }else if (D>0){
	  		printf ("l solution est %d \n %d",x1=(-b+sqrt(D))/2*a,x1=(-b-sqrt(D))/2*a);
	  	
	  	
	  }
 	return 0;
 }
