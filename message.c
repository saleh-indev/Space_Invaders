#include <stdio.h>
#include <stdlib.h>
#include "message.h"

void afficherMessageOuverture(){
    char bienvenu[] = "BIENVENUE AU JEU SPACE INVADERS SOUS CONSOLE";
    printf("\n\n\n\n\t\t\t\t%s\n\n",bienvenu);
}

void afficherMessageFin(){
    char fin[] = "MERCI D'AVOIR JOUER AU JEU SPACE INVADERS SOUS CONSOLE";
    printf("\n\n\n\n\t\t\t\t%s\n\n",fin);
}

void choisirModelVaisseauJoueur(){
    // a completer dans la partie 2
}

void viderConsole(){
    //Utile dans la partie 2
}
int sauvegarderPartie(){
    int choix =  0;
    do{
        printf("\n\n\t\t\tVOULEZ-VOUS SAUVEGARDER LES INFORMATIONS DE LA PARTIE ?\n");
        printf("\n\n\t\t\t\t\t1 -- OUI\n\t\t\t\t\t2 -- NON\n");
        printf("\n\n\t\t\t\tVEUILLEZ DONNER VOTRE REPONSE :  ");
        scanf("%d",&choix);
    }while(choix!=1 && choix!=2);
    return choix;
}
void  afficherMessageSauvergarde(){

}
