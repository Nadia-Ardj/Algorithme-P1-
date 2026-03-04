#include<iostream>
#include<cmath>

using namespace std ;

int main(){
//     Écrire un programme permettant d’afficher les n premières valeurs des suites numériques suivantes :

//     1. 0 -2 4 -6 8 -10 12 -14 …

    int n  , valeur ;
    cout<<"Entrer une valeur ";
    cin>>n ;
    for(int i=0 ; i<= n  ; i++){
     valeur = 2*i ;
     if(valeur % 2 ==0 ){
        cout<<valeur<<" ";
    }else{
        valeur = -valeur ;
        cout<<valeur ;
    }

    }cout<<endl;

// 2. 0 1 3 6 10 15 21 28 …
//     On ajoute 1, puis 2, puis 3, puis 4…
//     chaque terme = ancien terme + i

    int n1 , somme1=0 ;
    cout<<"Entrer une valeur : ";
    cin>>n1;

    for(int i=0 ; i< n1 ; i++){
        somme1+=i ;
        cout<<somme1<<" ";
    }cout<<endl;

// 3. 1 2 4 8 16 32 64 128 …
//      on multiplie à chaque fois *2 ;
    int n2 , valeurr=1 ;
    cout<<"Entrer une valeur : ";
    cin>>n2 ;

    for(int i=1 ; i< n2 ; i++){
     cout<<valeurr<<" ";
     valeurr *= 2 ;

    }cout<<endl;

// 4. 1 2 3 4 5 1 2 3 4 5 1 2 …
//     c'est un cycle : 1 → 2 → 3 → 4 → 5 → puis on recommence à 1
//Première solution proposé :
//     int i=1 ;
//    do{
//        for(int i=1 ; i<= 5 ; i++){
//            cout<<i<<" ";
//        }
// }while(i<6);

//  Deuxièmme solution plus concret :
int n3;
cout << "Entrez n : ";
cin >> n3;

for(int i = 0; i < n3; i++) {
    cout << (i % 5) + 1 << " ";
}cout<<endl;
// 5. 1 1 2 1 2 3 1 2 3 4 1 2 3 4 5 1 2 …
// il faut 2 boucles :
// une pour le niveau (1, 2, 3, 4…)
// une pour afficher de 1 jusqu’au niveau

int n4;
cout << "Entrez n : ";
cin >> n4;

int compteur = 0;

for(int i = 1; compteur < n4; i++) {
    for(int j = 1; j <= i && compteur < n4; j++) {
        cout << j << " ";
        compteur++;
    }
}cout<<endl;

     return 0 ;
}
