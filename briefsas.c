#include<stdio.h>
#include<stdlib.h>



typedef struct {

    	float montant;
    	char   CIN[8]  ;
    	char   nom[12] ;
     	char prenom[20] ;

}comptes;

comptes compte[1000];
		int N;
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
		
	void introduirePLUS(){
		int i;
	    printf("\n               veuiller Entrez le nombre de comptes que vous souhaitez creer: ");
	    scanf("%d",&N);

        
       	for(i=0;i<=N-1;i++){
	        printf("\n\n         entrer montant:");
	        scanf("%f",&compte[i].montant);
	       	printf("\n           CIN:");
	       	scanf("%s",compte[i].CIN);
	       	printf("\n           le nom:");
	       	scanf("%s",compte[i].nom);
	       	printf("\n           le prenom:");
	       	scanf("%s",compte[i].prenom);
	       	printf("\n           les information des client est:");
	        printf("         \nmontant: %f| ,|CIN: %s | ,|nom: %s | prenom:%s |",compte[i].montant,compte[i].CIN,compte[i].nom,compte[i].prenom);

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
        for(i=0;i<50;i++)
		{
          if (strcmp(CIN,compte[i].CIN) == 0)
              X=i;
        }

        printf("entrer le montant:");
        scanf("%f",&men);


               // solde retrait
        compte[X].montant=compte[X].montant+men;
        printf("votre solde=%f",compte[X].montant);

 }
 
 void Ascendant(){
 	    int X,i,j ;
 	    
 	   	for(i=0;i<N-1;i++)
 	   	for(j=i+1;j<N;j++){
 	   		if(compte[i].montant>compte[j].montant){
 	   		   	X=compte[i].montant;
 	   		   	compte[i].montant=compte[j].montant;
 	   		   	compte[j].montant=X;
				}
 	   		}

 	   		printf("\n\n      apre le triage\n");
 	   		for(i=0;i<N;i++)
 	   		printf(" montant:%f,CIN:%s,NOM:%s,prenom:%s\n ",compte[i].montant,compte[i].CIN,compte[i].nom,compte[i].prenom);
 }
    
void Descendant(){
        int   X,i,j , N ;
 	   	printf("\n     veuiller entrer le nombre de compte:");
 	   	scanf("%d",&N);
 	   	for(i=0;i<N-1;i++)
 	   	for(j=i+1;j<N;j++){
 	   		if(compte[i].montant<compte[j].montant){
 	   		   	X=compte[i].montant;
 	   		   	compte[i].montant=compte[j].montant;
 	   		   	compte[j].montant=X;
				}
 	   		}

 	   		printf("\n\n apre le triage:");
 	   		for(i=0;i<N;i++)
 	   		printf("\n %f,%s,%s,%s",compte[i].montant,compte[i].CIN,compte[i].nom,compte[i].prenom);
}
Ascendant_tri(){
	     Ascendant();
		 float men;
		 int i; 
	     printf("entrer montant:");
	     scanf("%f",&men);
	     for(i=0;i<N;i++){
	     	if(compte[i].montant<men){
	     		 printf("CIN:%s",compte[i].CIN);
		         printf("\n|nom:%s",compte[i].nom);
		         printf("\n|prenom:%s",compte[i].prenom);
		         printf("\n|montant:%.2f",compte[i].montant);
			 }
		     
		 }
	     	
}
Descendant_tri(){
	 float men;
		 int i; 
	     printf("entrer montant:");
	     scanf("%f",&men);
	     for(i=0;i<N;i++){
	     	if(compte[i].montant>men){
	     		 printf("%s",compte[i].CIN);
		         printf("%s",compte[i].nom);
		         printf("%s",compte[i].prenom);
		    }     printf("%f",compte[i].montant);
}
}
void operations(){
	    int choix;
	    printf("\n\n     les operation");
	    printf("\n     1:Retrait");
	    printf("\n     2:Depot");
	    printf("\n\n veuiller Tapez le numero de choix que vous voulez:");
	    scanf("%d",&choix);
	    switch(choix){
	    	case 1:	retrait();
		    break;
		    case 2:depot();
		    break;
		}
}

void Affichage(){
 	    int affichage;
 	    printf("    \n\n Affichage     ");
 	    printf("\n\n            1:Ascendant   \n\n            2:Descendant  \n\n           3:Ascendant (les comptes bancaires ayant un montant supérieur a un chiffre introduit)  \n\n           4:Descendant (les comptes bancaires ayant un montant supérieur a un chiffre introduit) \n\n           5:rechrche par CIN");
 	     printf("\n\n        taper votre choix:");
		 scanf("%d",&affichage);
 	    switch(affichage){
 	    	case 1: Ascendant();
 	    	break;
 	    	case 2: Descendant();
 	    	break;
 	    	case 3: Ascendant_tri();
 	    	break;
 	    	case 4:Descendant_tri();
 	    	break;
 	    	//case 5:rechrche_CIN();
 	    	//break;
 	    }
		 }
void menu()
{
       int choix;
       do
       {
        printf("  \n           *menu de cette application                ");

			    printf("\n\n               1:Introduire un compte bancaire");
			    printf("\n\n               2:Introduire plusieurs comptes bancaires\n");
			    printf("\n\n               3:Operation sur un compte client\n");
			    printf("\n\n               4:Affichage\n");
			    printf("\n\n               5:Fidelisation\n");
			    printf("\n\n               6:Quitter l'application\n");
			    printf(" \n\n              votre choix: ");
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

