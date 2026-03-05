#include<iostream>
#include<string>
#include<array>

using namespace std ;
const int Maxligne = 100  ;
const int Maxcolonne = 100 ;
using ligne = array<int,Maxcolonne>;
using matrice = array<ligne,Maxligne>;

int main(){
   matrice M ;
   int N;
   int compteur = 1;

//    Demender la taille de la matrice :
cout<<"Entrer la taille de la matrice (lignes et colonnes): ";
cin>> N ;


// Numéroter les cases de la matrice :
for(int i= 0 ; i< N; i++){
    for(int j=0 ; j< N ; j++){
        M[i][j] = compteur;
        compteur++;
    }
}
cout<<"Matrice initiale : "<<endl;
// Affichage de la matrice :
for(int i=0 ; i < N ; i++){
    for(int j=0 ; j< N ; j++){
        cout<<M[i][j]<<" ";
    }cout<<endl;
}

// Modifier la matrice en la remplaçant par sa tronsposée :
for(int i=0 ; i< N ; i++){
    for(int j= i + 1 ; j< N ; j++){
       int temp = M[i][j];
       M[i][j]=M[j][i];
       M[j][i]= temp ;
    }
}cout<<endl<<"Matrice tronsposée : "<<endl;
// Affichage de la matrice transposée :
for(int i=0 ; i< N ; i++){
    for(int j=0 ; j< N ; j++){
        cout<<M[i][j]<<" ";
    }cout<<endl;
}

    return 0;
}
