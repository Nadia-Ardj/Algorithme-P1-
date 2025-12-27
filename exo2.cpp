
#include<iostream>
#include<cmath> 

using namespace std ;

int main(){

    double distance=0 , xa=0, xb=0, ya=0 , yb=0 , dx=0 , dy=0  ; 

cout<<" entrer les coordonnees de votre point de départ a : ";
cin>> xa >> ya ;
cout<<"entrer les coordonnees de votre point d arrivee b :";
cin>> xb >> yb ; 

dx=xb-xa ;
dy=yb-ya ; 
distance=sqrt(pow(dx,2)+pow(dy,2)) ;

cout<< "la distance ab est :"<<distance ;


return 0; 


}