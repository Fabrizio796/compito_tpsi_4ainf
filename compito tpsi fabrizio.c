#include<stdio.h>
#include<math.h>
int main(){
	int menu(void);
	int somma;
	int differenza;
	int moltiplicazione;
	int divisione;
	int potenza;
	int logger;
	int esci;
	printf("\n");
	printf(" \n + somma ");
	scanf("%s",&somma);
	printf("\n * moltiplicazione");
	scanf("%s",& moltiplicazione);
	printf("\n  differenza");
	scanf("%s",&differenza);
	printf("\n divisione");
	scanf("%s",& divisione);
	printf("\n ^ potenza");
	scanf("%s",& potenza);
	printf("\n # logger");
	scanf("%s",& logger);
	printf("\n ! esci");
	scanf("%s",& esci); 
	int somma(int n1 ,int n2) ;
	int differenza (int n1 ,int n2);
	int moltiplicazione (int n1 ,int n2);
	float divisione (float n1, float n2);
	
}



int somma(int n1 ,int n2) {
	int somma=0;
	printf(" inserisci un numero:\n");
	scanf("%d",&n1);
	printf(" inserisci un numero:\n");
	scanf("%d",&n2);
	somma=n1+n2;
	printf("%d+%d= %d ",n1,n2,somma);
	return n1,n2;
}
int differenza (int n1 ,int n2) {
    int	diff=0;
   	printf(" inserisci un numero:\n");
	scanf("%d",&n1);	
	printf(" inserisci un numero:\n");
	scanf("%d",&n2);
	diff=n1-n2;
	printf("%d+%d= %d ",n1,n2,diff);
	return n1,n2;
	
}
int moltiplicazione (int n1 ,int n2){
	int molt=0;
	printf(" inserisci un numero:\n");
	scanf("%d",&n1);	
	printf(" inserisci un numero:\n");
	scanf("%d",&n2);
	molt=n1-n2;
	printf("%d+%d= %d ",n1,n2,molt);
	return n1,n2;
}
float divisione (float n1, float n2){

	int div=0;
	printf(" inserisci un numero:\n");
	scanf("%d",&n1);	
	printf(" inserisci un numero:\n");
	scanf("%d",&n2);
	div=n1-n2;
	printf("%d+%d= %d ",n1,n2,div);
	return n1,n2;
}



