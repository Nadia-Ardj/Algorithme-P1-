
#include<iostream>
using namespace std ;

int main(){
    
int a=12 ; 

 a++ ;  // a+=a , a=a+1 ;   l'incrémentation ( on ajoute 1 à chaque fois ) / (il affiche d'abord a aprés il ajoute 1); 
//  a-- ; // a-=a , a=a-1 ;   la décrementation ( on soustrait 1 à chaque fois)
 // ++a -> c'est la post-incrémentation  ( i ajoute d'abrd 1 aprés il affiche la valeur a )
// --a -> c'est la post-décrémination ( il soustrait avant l'affichage );

cout<<a++ ; 
cout<<"la valeur de a devient :"<<a ; 


return 0; 


}