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
	     scanf("%s",CIN);
	     printf("le nom:");
	     scanf("%s,nom");
	     printf("le prenom:");
	     scanf("%s",&prenom);
	     printf("montant:");
	     scanf("%s",&montant);
	     printf("%s%s%s%s",CIN,nom,prenom,montant);

	}
		comptes compte[1000];
	void introduirePLUS(){
		int N,i;
	    printf("veuiller Entrez le nombre de comptes que vous souhaitez creer: ");
	    scanf("%d",&N);


       	for(i=0;i<=N-1;i++){
	        printf("\n entrer montant:");
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
  void retrait(){
            float men;
        	int i;
        	 int X;
            char CIN[8];
            float resultat;

            printf(" entrer CIN: ");
            scanf("%s",CIN);
            for(i=0;i<50;i++){
              if (strcmp(CIN,compte[i].CIN) == 0){
              	X=i;
			  }

                  }
            printf("entrer le montant:");
            scanf("%f",&men);
            if(men>compte[X].montant)
                printf("imposible");
            else
               {    // solde retrait
                compte[X].montant=compte[X].montant-men;
                printf("-----votre solde=%.2f",compte[X].montant);
               }

}
  void depot(){
            float men;
        	int i;
        	 int X;
            char CIN[8];
            float resultat;
       printf(" entrer CIN: ");
            scanf("%s",CIN);
            for(i=0;i<50;i++){
              if (strcmp(CIN,compte[i].CIN) == 0)
                  X=i;
            }

            printf("entrer le montant:");
            scanf("%f",&men);


                   // solde retrait
                compte[X].montant=compte[X].montant+men;
                printf("votre solde=%f",compte[X].montant);

 }
 void Affichage(){
 	    int affichage;
 	    printf("    Affichage     ");
 	    printf("\n\n taper votre choix:");
 	    printf("1:Ascendant    2:Descendant");
 	    scanf("%d",&affichage);
 	    switch(affichage){
 	    	case 1: Ascendant();
 	    	break;
 	    	case 2: Descendant();
 	    	break;
 	    }
		 }
 void Ascendant(){
 	    int N , X,i,j ;
 	   	printf("\n veuiller entrer le nombre de compte:");
 	   	scanf("%d",&N);
 	   	for(i=0;i<N-1;i++)
 	   	for(j=i+1;j<N;j++){
 	   		if(compte[i].montant>compte[j].montant){
 	   		   	X=compte[i].montant;
 	   		   	compte[i].montant=compte[j].montant;
 	   		   	compte[j].montant=X;
				}
 	   		}

 	   		printf("\n\n apre le triage:");
 	   		for(i=0;i<N;i++)
 	   		printf("%.2f",compte[i].montant);
 }
void Descendant(){
        int N , X,i,j ;
 	   	printf("\n veuiller entrer le nombre de compte:");
 	   	scanf("%d",&N);
 	   	for(i=0;i<N-1;i++)
 	   	for(j=i+1;j>N;j++){
 	   		if(compte[i].montant>compte[j].montant){
 	   		   	X=compte[i].montant;
 	   		   	compte[i].montant=compte[j].montant;
 	   		   	compte[j].montant=X;
				}
 	   		}

 	   		printf("\n\n apre le triage:");
 	   		for(i=0;i<N;i++)
 	   		printf("%.2f",compte[i].montant);
}

void operations(){
	    int choix;
	    printf("veuiller Tapez le numéro de choix que vous voulez:");
	    printf("\n1:Retrait");
	    printf("\n2:Depot");
	    scanf("\n%d",&choix);
	    switch(choix){
	    	case 1:	retrait();
		    break;
		    case 2:depot();
		    break;
		}
}


void menu()
{
       int choix;
       do
       {
        printf(" >>>>>>>>>>>>>menu de cette application<<<<<<<<<<<<<<<<        ");

			    printf("\n\n1:Introduire un compte bancaire\n");
			    printf("2:Introduire plusieurs comptes bancaires\n");
			    printf("3:Operation sur un compte client\n");
			    printf("4:Affichage\n");
			    printf("5:Fidelisation\n");
			    printf("6:Quitter l'application\n");
			    printf("       \nvotre choix: ");
			    scanf("%d",&choix);
			         switch(choix)
			           {
			           	    case 1:introduire();
			                case 2:introduirePLUS();
			                case 3:operations();
			                case 4:Affichage();
			                //case 5:
					   }

			   }
			   while (choix != 6 );

}

int main(){


	    menu();
    return 0;

}
