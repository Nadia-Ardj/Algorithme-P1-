#include<iostream>
#include<cmath>


using namespace std ;

int main(){

    for(int i= 100 ; i<= 999 ; i++){
        int centaine = i / 100 ;
        int dizaine = ( i / 10 ) % 10 ;
        int unite = i % 10 ;
        // verifier si les trois chiffres sont distincts :
        if( centaine!=dizaine && dizaine!=unite && centaine!=unite){
//             la condition pour la somme des trois chiffres égale à 9 :
          if( centaine + dizaine + unite == 9){
            cout<<i<<endl;
        }
        }


    }
    return 0 ;
}
