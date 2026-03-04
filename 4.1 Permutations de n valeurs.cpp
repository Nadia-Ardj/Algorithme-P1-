#include<iostream>
#include<cmath>
#include<array>

using namespace std ;
int main(){
   int n ;
   int tab[n];
    cout<<" entrer le nombre des entiers : ";
    cin>>n;

//     saisie du tableau :
    for(int i=0 ; i< n ; i++){
        cin>>tab[i];
    }

//     affichage du tableau :
cout<<" le tableau initiale est : ";
for(int i=0 ; i<n ; i++){
 cout<<tab[i]<<" ";
}cout<<endl;

// permutation à gauche :
int premier = tab[0];
    for(int i=1 ; i< n ;i++){
        tab[i-1]=tab[i]; //décaler les valeurs vers la gauche

    }
     tab[n-1]=premier ; //placer le premier à la fin

//      aprés la permutation à gauche :
cout<<" apres permutation à gauche : ";
for(int i=0 ; i< n ; i++){
  cout<<tab[i]<<" ";
}
cout<<endl;

// permutation à droite :
int dernier = tab[n-1];

for(int i = n-1 ; i > 0 ; i--){
    tab[i]=tab[i-1];  //décaler vers la droite
}
tab[0]=dernier ;  //placer le dernier au debut

//afficher aprés la permutation à droite :
cout<<"aprés permutation à droite : ";
for(int i=0 ; i< n ; i++){
    cout<<tab[i]<<" ";
}
cout<<endl;
    return 0;
}
