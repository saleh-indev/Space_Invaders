#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>
#include "message.h"
#include "jeu.h"

int main(){
    int score = 0,vies = 3;
    int debut = 0 ; // A modifier a la fin
    char nomJoueur[TAILLE_MAX];
    char nomFichier[TAILLE_MAX];



    afficherMessageOuverture();
    switch(choisirMode()){
        case 1:
            //Choix d'un modele de vaisseau
            choisirModelVaisseauJoueur();
            afficherJeu(1,&score,&vies);
            while(debut){
                //Deroulement du jeu
                //A rafiner dans la suite ....
            }
            system("PAUSE");
            viderConsole();
        break;
        case 2:
             //Choix d'un modele de vaisseau
            choisirModelVaisseauJoueur();
            afficherJeu(2,&score,&vies);
            while(debut){
                //Deroulement du jeu
                //A rafiner dans la suite ....
            }
            system("PAUSE");
            viderConsole();
        break;

        default:
        break;
    }

    if(sauvegarderPartie(nomFichier) == 1){
        FILE* fichier = fopen("parties.txt", "w");
        if(fichier){
        printf("\nDonnez votre pseudo : ");
        scanf("%s",nomJoueur);
        fprintf(fichier,"Nom : %s\n",nomJoueur);
        fprintf(fichier, "Score : %d\n",score);
        afficherMessageSauvergarde();
        fclose(fichier);
        }
    }
    afficherMessageFin();

    //A completer dans les autres parties
    return 0;
}

