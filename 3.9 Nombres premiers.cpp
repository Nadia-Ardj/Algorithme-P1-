#include<iostream>
#include<cmath>

using namespace std ;

int main(){

    //     1. Écrire un programme qui affiche tous les diviseurs d’un nombre entier strictement positif saisi par l’utilisateur. On affichera également le nombre de diviseurs du nombre.


    int n , cpt=0 ;

    cout<<"entrer un nombre entier positif ";
    cin>>n ;

    cout<<"les diviseurs de "<< n << " sont : "<<endl;
    for(int i=1 ; i<=n ; i++){
        if(n%i==0){
            cout<<i<<endl;
            cpt++;
        }

    }
     cout<<"le nombre total des diviseurs  est "<<cpt<<endl;

     //      2. En déduire un programme déterminant si un nombre est premier ou non. Proposer des modifications permettant de rendre l’algorithme plus efficace.

     if(cpt==2){
       cout<<" le nombre est premier "<<endl;
    }else{
        cout<<"le nombre n est pas premier "<<endl;
    }

//      Plus efficace :
bool premier =true ;

if(n < 2){
    premier = false;
}
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            premier = false;
            if(premier){
                cout<<" le nombre est premier "<<endl;
            }else{
                cout<<" le nombre n est pas prmier  "<<endl;
            }}}
  //   3. On souhaite maintenant demander à l’utilisateur de saisir successivement plusieurs nombres premiers. Modifier le programme en conséquence, de manière à ce qu’il demande des nombres à l’utilisateur et qu’il s’arrête dès qu’un nombre non premier est saisi.

  while(true) {
      cout << "Entrez un nombre premier : ";
      cin >> n;

      int compteur = 0;

      // Compter les diviseurs
      for(int i = 1; i <= n; i++) {
          if(n % i == 0) {
              compteur++;
          }
      }

      // Vérifier si le nombre est premier
      if(compteur != 2) {

          cout << "Ce nombre n'est pas premier. " << endl;
          break;   // on arrête la boucle
      }
  }


    return 0;
}
