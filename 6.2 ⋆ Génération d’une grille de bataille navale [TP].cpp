#include<iostream>
#include<cmath>
#include<array>

using namespace std ;
 const int Maxligne  = 100 ;
 const int  MaxColonne = 100 ;
using ligne = array<int ,MaxColonne>;
using matrice = array<ligne, Maxligne>;


int main(){
    srand(time(0));
    matrice M ;
    int nbateaux , bateaux  ;

    cout<<"Nombre de bateaux : ";
    cin>> nbateaux ;
//     le tableau de taille des tableaux :
    for(int i=1 ; i<= nbateaux ; i++ ){
        cout<<"Longeur du bateau no."<<i<<" : ";
        cin>>bateaux ;
    }
// initialiser la grille :
    for(int i=0 ; i< 10 ; i++){
        for(int j=0 ; j< 10 ; j++){
            M[i][j]= 0 ;
        }
    }
//     affichage de la grille :
cout<<"Grille : "<<endl;
for(int i=0 ; i<10 ; i++){
    for(int j= 0 ; j<10 ; j++ ){
        cout<<M[i][j];
    }cout<<endl ;
}

    return 0;
}
