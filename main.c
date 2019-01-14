#include <stdio.h>
#include <stdlib.h>

/**
    i : int             :nVar
    f : float           :flVar
    d : double          :dblVar
    c : char            :cVar
    l : long int        :lnVar
    ll: long long int   :llnVar
    L : double long     :ldblVar
    h : short int       :srVar
    ui: unsigned int    :unVar
    uf: unsigned float  :unfVar
    s : *STRING*
*/

#define TAILLE 5

int Matrice[TAILLE][TAILLE];

void init(int *nCarreMagique[TAILLE][TAILLE];int *x;int *y;int *cpt){

    int y,j;

    for(nI = 0; nI < TAILLE-1; nI++){
        for(nJ = 0; nJ < TAILLE-1; nJ++){
            CarreMagique[nI][nJ] = 0;
        }
    }
    (x=[TAILLE]/2);
    (y=[TAILLE]/2+1);
    CarreMagique[i][j]=1;
    cpt=2;
}

void corriger(int *x; int *y){

    if (x<1){
        (x=TAILLE)
    }
    if (y<1){
        (y=TAILLE)
    }
}

void nordEst(int *x; int *y){

    (x++);
    (y++);
    corriger(x,y);

}

void nordOuest(int *x; int *y){

    (x--);
    (y--);
    corriger(x,y);

}

void testVide(CarreMAgique:[TAILLE][TAILLE];int *x;int *y;int *cpt){

    while(CarreMagique[x][y]!=0){
     nordOuest[x][y];
}

}

void placer(CarreMAgique:[TAILLE][TAILLE];int *x;int *y;int *cpt){

    CarreMagique[x][y]=cpt;

}

void affiche{



}

int main()
{
    printf("Programme Carre Magique");
    init(CarreMagique[x][y],cpt)
    while(cpt=[TAILLE]*[TAILLE]){
        nordEst[x],[y];
        testVide(CarreMAgique[x],[y]);
        placer(CarreMagique[x],[y],cpt);
        cpt++
    }

    afficher(CarreMagique)

    return 0;
}
