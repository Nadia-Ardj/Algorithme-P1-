
#include<iostream>
#include<cmath> 

using namespace std ;

int main(){

    int choix = 0 ; 

cout<<"voici les choix : \n1.pour le feu vert \n2.pour le feu orange \n3.pour le feu rouge \nchoisissez un svp ";
cin>> choix ; 
switch (choix)
{
case 1 :
    cout<<"continuer de rouler ";
    break;
case 2 : 
   cout<<" ralenter vous ";
   break ;
case 3 : 
 cout<<" arreter vous "; 
 break ; 

default: 
cout<<"mauvais choix " ;
    break;
}

return 0; 


}