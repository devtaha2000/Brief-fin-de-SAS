#include<stdio.h>
#include<stdlib.h>
typedef struct {

    	float montant;
    	char   CIN[8]  ;
    	char   nom[12] ;
     	char prenom[20] ;

}comptes;


void introduire(){
	     
	     float montant;
	     char   CIN[8]  ;
	     char   nom[12] ;
	     char prenom[20] ;
	     printf("veuiller entrer les information suivant :");
	     printf("\nCIN:");
	     scanf("%s",&CIN);
	     printf("le nom:");
	     scanf("%s,&nom");
	     printf("le prenom:");
	     scanf("%s",&prenom);
	     printf("montant:");
	     scanf("%s",&montant);
	     printf("%s%s%s%s",CIN,nom,prenom,montant);
         
	}
	void introduirePLUS(){
		int N,i;
	    printf("veuiller Entrez le nombre de comptes que vous souhaitez creer: ");
	    scanf("%d",&N);
      	comptes compte[1000];
       	
       	for(i=1;i<=N;i++){
        printf("\nmontant:");
        scanf("%f",&compte[i].montant);
       	printf("\nCIN:");
       	scanf("%s",compte[i].CIN);
       	printf("\nle nom:");
       	scanf("%s",compte[i].nom);
       	printf("\nle prenom:");
       	scanf("%s",compte[i].prenom);
       	printf("les information des client est:");
        printf("\n %f,%s,%s,%s",compte[i].montant,compte[i].CIN,compte[i].nom,compte[i].prenom);		
       	
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
        printf("\n3:Operation sur un compte client");
        printf("\n4:Affichage");
        printf("\n5:Fidelisation");
        printf("\n6:Quitter l'application'");
        printf("\nvotre choix: ");
        scanf("%d",&choix);
             switch(choix)
               {
               	    case 1:introduire();
                    case 2:introduirePLUS();
                    /*case 3:
                    case 4:
                     case 5:*/
			   }

       }
       while (choix != 6 );
       return 0;
}

int main(){
	 

	    menu();
    
	
}
