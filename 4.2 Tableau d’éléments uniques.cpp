#include<iostream>
#include<cmath>
#include<array>

using namespace std ;

int main(){
   const int max=100 ;
    int tab[max];
    int n=0;
    int valeur ;
    bool deja_saisie  ;

do{
    cout<<"saisie une valeur : ";
    cin>>valeur;

        deja_saisie= false;

//         Vérifier si la valeur existe déjà
         for(int i=0 ; i< n ; i++){
           if(tab[i]==valeur){
               deja_saisie = true ;
        }
}
        if(!deja_saisie && n < max){
            tab[n]=valeur;   //on ajoute la vlaur au tableau
            n++;
        }

    }while(!deja_saisie && n < max);

    cout<<" cette valeur est déja saisie "<<endl;
    return 0 ;
}
