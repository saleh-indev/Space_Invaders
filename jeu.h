/*
    Fichier d'entete contenant les informations
    concernant le deroulement du jeu

    By : salehindev
    19/10/2021 15:35:12

    NB: A raffiner dans les parties qui restent


*/

#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
#define TAILLE_MAX 30
typedef enum Direction Direction;
typedef enum Niveau Niveau;
typedef enum Mode Mode;
typedef struct VaisseauJoueur VaisseauJoueur;
typedef struct VaisseauEnnemi VaisseauEnnemi;
typedef struct Missile Missile;

enum Direction {
    EST,
    OUEST,
    SUD,
    NORD
};
enum Niveau{
    FAIBLE ,
    MOYEN,
    FORT
};
enum Mode{
    FACILE = 1,
    DIFFICILE = 2,
    PROGRESSIF = 3
};

struct VaisseauJoueur{
    int PosX;       // *Position courante coin gauche X du vaisseau* /
    int PosY;       // *Position courante coin gauche Y du vaisseau * /
    int Touches ;
    //A completer par la suite
};

struct Missile {
    char Direction; // => Nord, S => sud, E => EST, O OUEST* /
    int PosX; // *Position courante coin gauche X du vaisseau* /
    int PosY; // *Position courante coin gauche Y du vaisseau * /
};

struct VaisseauEnnemi{
    char Direction;             // => Nord, S => sud, E => EST, O OUEST* /
    int PosX;                       // *Position courante coin gauche X du vaisseau* /
    int PosY;                   // *Position courante coin gauche Y du vaisseau * /
    int Blindage ;              /*Niveau de blindage en cours du vaisseau
                                (O=>rien, l=>blind�, 2=>u1tra�bIind�, etc. ) */
    int Touches ;                // *Nombre de fois que le vaisseau est touch� par un missile* /
    char Carros_ennemi[3][16] ;     /*Carrosserie du vaisseau ennemi, servira pour
                                    I' affichage du vaisseau ennemi � tout moment*/
    char Carrosserie [6][40];
                                /*Carrosserie du vaisseau du joueur, servira pour
                                1' affichage du vaisseau du joueur � tout moment*/
    char Type ;                  /* 'M' :  mon vaisseau, 'E' : vaisseau ennemi*/
    char Couleur[30] ;          // *Couleur du vaisseau * /
    int Etat ;                  //*�tat du vaisseau 1=> actif, 2=> en destruction, 3 => inactif* /
    int Mise_a_jour;
                                /*utile pour la suppression du vaisseau en tenant compte d'un certain
                                d�lai*/
    VaisseauEnnemi * NXT;
                                /*Pointeur vers un prochain vaisseau, servira pour la liste cha�n�e*/
};



//Les fonctions utiles
char key_pressed();
void afficherJeu(int mode, int* score, int* vies );
void afficherMode(int mode);


#endif // JEU_H_INCLUDED
