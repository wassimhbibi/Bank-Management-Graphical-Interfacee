///================les include================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50
///===============les declaration=============
 int i,n,nb,nbc,choix;

struct client{
      int id,num_tel;
      char nom[10],prenom[10],profession[10];


    };

 struct client cl[max];
struct date
{
int jour;
int mois;
int anne;
};
struct date d_o[max];

struct compte_client
{
int num_compte;
struct date d_o;
float solde_de_base;
};
struct compte_client cc[max];

///========procedure d'ajouter client==============
 void ajou_c(){
FILE *F1;
F1=fopen("client.txt","a");
printf("\n\n");
printf("Saisir les information de votre client :  \n\n");
fprintf(F1,"%d;%s;%s;%s;%d \n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
printf("le id de client : ");
scanf("%d",&cl->id);
printf("Nom de client: ");
scanf("%s",&cl->nom);
printf("Prenom de client : ");
scanf("%s",&cl->prenom);
printf("la profession de client : ");
scanf("%s",&cl->profession);
printf("la numero de telephone de client : ");
scanf("%d",&cl->num_tel);
n=n+1;
printf("\n\n");
fprintf(F1,"%d;%s;%s;%s;%d \n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
fflush(stdin);
fclose(F1);
}

///========procedure d'ajouter une compte de client==============
 void ajou_c_c(){
 FILE *F2;
F2=fopen("compte.txt","a");
printf("\n\n");
printf("Saisir les information de votre compte de client :  \n\n");
fprintf(F2,"%d;%d;%d \n",d_o->jour,d_o->mois,d_o->anne);
fprintf(F2,"%d;%f \n",cc->num_compte,cc->solde_de_base);
printf("le numero de compte de client : ");
scanf("%d",&cc->num_compte);
printf("le jour de la date d'ouveture de sa compte de client : ");
scanf("%d",&d_o->jour);
printf("le mois de la date d'ouveture de sa compte de client : ");
scanf("%d",&d_o->mois);
printf("l'anne de la date d'ouveture de sa compte de client : ");
scanf("%d",&d_o->anne);
printf("la date d'ouverture est %d/%d/%d :",d_o->jour,d_o->mois,d_o->anne);
printf("la solde de base de  sa compte  de client : ");
scanf("%f",&cc->solde_de_base);
nb=nb+1;
printf("\n\n");
fprintf(F2,"%d;%d;%d \n",d_o->jour,d_o->mois,d_o->anne);
fprintf(F2,"%d;%f \n",cc->num_compte,cc->solde_de_base);
fflush(stdin);
fclose(F2);
}

///---------ajouter_plusieur_client---------
void ajou_p_c(){
FILE *F1;
F1=fopen("client.txt","a");
   printf("Entrer le nombre des client que vous voullias ajoute : ");
   scanf("%d",&nb);
   printf("\n\n");
fprintf(F1,"%d;%s;%s;%s;%d \n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
 for(i=1;i<=nb;i++){

     printf("Saisir les information de votre client :  \n\n");
printf("le id de client : ");
scanf("%d",&cl->id);
printf("Nom de client: ");
scanf("%s",&cl->nom);
printf("Prenom de client : ");
scanf("%s",&cl->prenom);
printf("la profession de client : ");
scanf("%s",&cl->profession);
printf("la numero de telephone de client : ");
scanf("%d",&cl->num_tel);
fprintf(F1,"%d;%s;%s;%s;%d \n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
n=n+1;
fflush(stdin);
}
fclose(F1);
  }
///---------ajouter_plusieur_compte_client---------
void ajou_p_c_c(){
FILE *F2;
F2=fopen("compte.txt","a");
   printf("Entrer le nombre de compte des client que vous voullias ajoute : ");
   scanf("%d",&nbc);
   printf("\n\n");

 for(i=1;i<=nbc;i++){

     printf("Saisir les information de votre compte de client :  \n\n");
fprintf(F2,"%d;%d;%d \n",d_o->jour,d_o->mois,d_o->anne);
fprintf(F2,"%d;%f \n",cc->num_compte,cc->solde_de_base);
printf("le numero de compte de client : ");
scanf("%d",&cc->num_compte);
printf("le jour de la date d'ouveture de sa compte de client : ");
scanf("%d",&d_o->jour);
printf("le mois de la date d'ouveture de sa compte de client : ");
scanf("%d",&d_o->mois);
printf("l'anne de la date d'ouveture de sa compte de client : ");
scanf("%d",&d_o->anne);
printf("la date d'ouverture est %d/%d/%d :",d_o->jour,d_o->mois,d_o->anne);
printf("la solde de base de  sa compte  de client : ");
scanf("%f",&cc->solde_de_base);
nb=nb+1;
printf("\n\n");
fprintf(F2,"%d;%d;%d \n",d_o->jour,d_o->mois,d_o->anne);
fprintf(F2,"%d;%f \n",cc->num_compte,cc->solde_de_base);
fflush(stdin);
fclose(F2);
}
  }
///-------afichier_le_client-----
void aff_c(){

    for(i=1;i<=n;i++){
        printf("le client id :%d Sa Nom : %s & Prenom : %s & profession : %s & num_tel : %d \n\n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
    }

}
///-------afichier_les compte_de_client-----
void aff_c_c(){

    for(i=1;i<=nb;i++){
    printf("la date douverture est :%d/%d/%d  \n\n",d_o->jour,d_o->mois,d_o->anne);
        printf("le numero compte de client  :%d  est le  solde de base : %f  \n\n",cc->num_compte,cc->solde_de_base);
        }
        }
///------recherche_une_client_par_id------
void rech_c_id(){

      int id;
      printf(" Saisir un id : ");
      scanf("%d",&id);
 FILE *F1;
 F1=fopen("client.txt","a");
fprintf(F1,"%d;%s;%s;%s;%d \n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
       for(i=1;i<=n;i++){

           if(cl->id==id){
                  printf("\nRechercher un client par sa id : \n");
                  printf("Qullque informations sur client que vous avez recherche : \n");
                  printf("----------------------------------\n");
                  printf("id de client est : %d\n",id);
                  printf("Nom de client: %s\n",cl->nom);
                  printf("Prenom de client: %s\n",cl->prenom);
                  printf("profession de cilent : %s\n",cl->profession);
                  printf("numero telephone de cilent : %d\n",cl->num_tel);
             }
fprintf(F1,"%d;%s;%s;%s;%d \n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
fflush(stdin);
fclose(F1);

         }
}
///------rechercher_une_compte_client_par_numero_compte------
void rech_c_c_num_compte(){
      int num_compte;
      printf(" Saisir un num_compte : ");
      scanf("%d",&num_compte);
FILE *F2;
F2=fopen("compte.txt","a");
fprintf(F2,"%d;%d;%d \n",d_o->jour,d_o->mois,d_o->anne);
fprintf(F2,"%d;%f \n",cc->num_compte,cc->solde_de_base);

       for(i=1;i<=nb;i++){

          if(cc->num_compte==num_compte){
                  printf("\nRechercher le compte de client par numero: \n");
                  printf("Qullque informations sur le compte de client que vous avez recherche : \n");
                  printf("----------------------------------\n");
                  printf("le numero de compte de sa client est : %d\n",num_compte);
                  printf("numero de comte de client: %d\n",cc->num_compte);
                  printf("le jour de date douverture de sa compte de client: %d\n",d_o->jour);
                  printf("le mois de date douverture de sa compte de client: %d\n",d_o->mois);
                  printf("l'anne de date douverture de sa compte de client: %d\n",d_o->anne);
                  printf("le solde de base de sa compte de client de cilent : %f\n",cc->solde_de_base);

             }
             fprintf(F2,"%d;%d;%d \n",d_o->jour,d_o->mois,d_o->anne);
fprintf(F2,"%d;%f \n",cc->num_compte,cc->solde_de_base);
fflush(stdin);
fclose(F2);
         }
}


///------modifier le client----
void modif_c(){
     int id;
     printf("Saisir le id  de client que vous voulai modifier : ");
     scanf("%d",&id);
FILE *F1;
F1=fopen("client.txt","a");
fprintf(F1,"%d;%s;%s;%s;%d \n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
     for(i=1;i<=n;i++){
           if(id==cl->id){


    printf("le id de client : ");
    scanf("%d",&cl->id);
    printf("le nom de client : ");
    scanf("%s",&cl->nom);
    printf("le prenom de client : ");
    scanf("%s",&cl->prenom);
    printf("la profession de sa client : ");
    scanf("%s",&cl->profession);
    printf("le numero de telephone de sa client : ");
    scanf("%d",&cl->num_tel);
 }
 }
 fprintf(F1,"%d;%s;%s;%s;%d \n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
fflush(stdin);
fclose(F1);
 }

///---------supprimer_un_client-----
void supp_c(){

      int j,id,k;
     printf("Saisir le id de client que vous voulai supprimier : ");
     scanf("%d",&id);
FILE *F1;
F1=fopen("client.txt","a");
fprintf(F1,"%d;%s;%s;%s;%d \n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
     for(i=1;i<=n;i++){
         if(cl->id==id){
                k=i;
                n=n-1;
                for(j=k;j<=n;j++){
                            cc[j]=cc[j+1];
                 }
     }
     }
     fprintf(F1,"%d;%s;%s;%s;%d \n",cl->id,cl->nom,cl->prenom,cl->profession,cl->num_tel);
fflush(stdin);
fclose(F1);
     }

///---------supprimer_un_compte_de_client-----
void supp_c_c(){

     int j,num_compte,k;
     printf("Saisir le numero compte de sa client  que vous voulai supprimier : ");
     scanf("%d",&num_compte);
FILE *F2;
F2=fopen("compte.txt","a");
fprintf(F2,"%d;%d;%d \n",d_o->jour,d_o->mois,d_o->anne);
fprintf(F2,"%d;%f \n",cc->num_compte,cc->solde_de_base);
     for(i=1;i<=nb;i++){
         if(cc->num_compte==num_compte){
                k=i;
                n=n-1;
                for(j=k;j<=n;j++){
                            cc[j]=cc[j+1];
                 }
     }
     }
     fprintf(F2,"%d;%d;%d \n",d_o->jour,d_o->mois,d_o->anne);
fprintf(F2,"%d;%f \n",cc->num_compte,cc->solde_de_base);
fflush(stdin);
fclose(F2);
     }



void main()
{
  system("color 1F");
do{
           printf("\n        *******      Gestion de banque    ****** \n\n");
           printf("          ============================================= \n\n");

                    printf("  Totale des client : %d\n\n",n);
                     printf("  Totale des compte de client  : %d\n\n",nb);
           printf("      <1.   d'ajouter client------------------------------ \n");
           printf("      <2.  d'ajouter une compte de client------------------------------ \n");
           printf("      <3.  ajouter_plusieur_client----------------------- \n");
           printf("      <4.  ajouter_plusieur_compte_client------------------------------ \n");
           printf("      <5.  afichier_le_client------------------ \n");
           printf("      <6.  afichier_les compte_de_client------------------ \n");
           printf("      <7.  recherche_une_client_par_id--------------- \n");
           printf("      <8.  rechercher_une_compte_client_par_numero_compte--------------- \n");
           printf("      <9.  modifier le client---------------------------- \n");
           printf("      <10. supprimer_un_client-------------------------- \n");
           printf("      <11. supprimer_un_compte_de_client-------------------------- \n");
           printf("          ============================================== \n\n");
           printf("Entre votre choix : ");
           scanf("%d",&choix);
-----           printf("\n\n");9--
           switch(choix){
case 1: system("cls");ajou_c();break;
case 2: system("cls");ajou_c_c();break;
case 3: system("cls");ajou_p_c();break;
case 4: system("cls");ajou_p_c_c();break;
case 5: system("cls");aff_c();break;
case 6: system("cls");aff_c_c();break;
case 7: system("cls");rech_c_id();break;
case 8: system("cls");rech_c_c_num_compte();break;
case 9: system("cls");modif_c();break;
case 10:system("cls");supp_c();break;
case 11:system("cls");supp_c_c();break;
default : system("cls");printf("votre choix n'est pas valide !!!\n");
        }

        }while(choix!=11);



}
