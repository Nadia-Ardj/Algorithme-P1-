
#include<iostream>
#include<cmath> 
using namespace std ;

int main(){
    int nbr=0 ;
double racine=0.0 , puissance=0.0 ;

cout<<"entrer un nombre ";
cin>> nbr ; 

racine = sqrt(nbr);
cout<<"la racine du nombre est "<<racine ;

puissance=pow(nbr,2);
cout<<"le resultat de la puissance est : "<<puissance; 

// Racine carrée :
double r = sqrt(25);     // r=5 

//puissance :
double p = pow(2.3);    // p=8 

// Valeur absolue : 
double a= fabs(nbr);
int b = abs(nbr);

 // Arrondir :
 double x = round(3.6);     // x = 4   il arrondit au plus proche entier 
 double y = floor(3.6);     // y = 3   il arrondit vers le bas 
 double z = ceil(3.2);      // z = 4   il prend le nombre au-dessus  vers le  haut  

//  Trigonométrie :
double s = sin(3.14);
double c = cos(3.14);
double t = tan(0.5);

// Logarithmes :
double l =log(10);      // logarithme normal (ln) 
double l10 = log10(100);    // log base 10 

// expontielle :
double e = exp(1);   // e=2.71828...




return 0; 
}