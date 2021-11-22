#include<stdio.h>
#include<stdlib.h>
struct info {

	float montant;
	char   CIN  ;
	char   nom ;
	char prenom ;

};
void introduire(){
	     
	     int N ,i;
	     printf("veuiller entrer le nomber de cette veux cree :");
	     scanf("%d",&N);
        for( i=1 ; i<=N ; i++){
        	printf("\n cente:%d",i);
	}
}

  	void menu()
{
       int choix;
       do
       {
              printf("        menu de cette application        ");

			  printf("\n1:Introduire un compte bancaire");
              printf("\n2:Introduire plusieurs comptes bancaires");
              printf("\n3:Opération sur un compte client");
              printf("\n4:Affichage");
              printf("\n5:Fidélisation");
              printf("\n6:Quitter");
              printf("\nvotre choix: ");
              scanf("%d",&choix);
              switch(choix)
               {
               	      case 1:introduire();
                      /*case 2:
                      case 3:
                      case 4:
                      case 5:*/
			   }

       }
       while (choix != 6 );
}

int main(){
	 

	menu();
    
	
}
