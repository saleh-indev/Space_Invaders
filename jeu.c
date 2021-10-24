#include <stdio.h>
#include <stdlib.h>
#include "jeu.h"

int choisirMode(){
    int choix=0;
    do{
        printf("\t\t\t\tLES MODES DISPONIBLES : \n\n\t\t\t\t\t1 -- Facile\n\t\t\t\t\t2 -- Difficile\n\t\t\t\t\t3 -- Progressif\n");
        printf("\n\n\t\t\t\tVEUILLEZ CHOISIR UN MODE :  ");
        scanf("%d",&choix);
    }while(choix!=1 && choix!=2 && choix!=3);
    return choix;
}
void afficherJeu(int mode, int* score, int* vies ){
    //Affichage au debut
    system("cls");
    printf("Mode : ");
    afficherMode(mode);
    printf("\t\t\t\t\t\tSCORE : %d ",*score);
    printf("\t\t\t\t\tNOMBRE VIES : %d \n", *vies);
    printf("\n        .        .                .                                 .                   .\n");
    printf(".                        .                                               .\n");
    printf("\n    .             .                          .                   .                   .\n");
    printf(".                        .                                               .\n");
    printf("\n      .       .                .                                 .                   .\n");
    printf("               .                            .\n");
    printf("\n   .        .                .                                 .                   .\n");
    printf(".                                                           .\n");



    printf("\n     .                       .            .                     .                   .\n");
    printf(".                        .                    .                  .                             .\n");
    printf("\n        .        .                .                                 .                   .\n");
    printf("                                            .\n");
    printf("\n   .        .                .                                 .                   .\n");
    printf(".                                      .                     .\n");

    printf("                    .\n");
    printf(".                        .                                               .\n");
    printf("\n            .        .                .                  .     A           .                   .\n");
    printf(".                        .                          AAA                   .\n");
    printf("                 .                                 AAAAA                .     .\n");
    printf(".                                                AAAAAAAAA                        .\n");
    //A ameliorer
}
void afficherMode(int mode){
    if(mode == 1) printf("FACILE");
    if(mode == 2) printf("DIFFICILE");
    if(mode == 3) printf("PROGRESSIF");
}
char key_pressed(){
    // A completer
}
