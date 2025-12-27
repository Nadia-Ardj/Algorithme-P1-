
#include<iostream>
#include<cmath> 

using namespace std ;

int main(){


    int a=0 , b=0 , c=0 ; 
double  x, x1=0.0, x2=0.0 , delta=0.0  ;  


cout<<"entrer une valeur a " ;
cin>> a ; 
cout<<"\nentrer une valeur b ";
cin>>b ;
cout<<"\nentrer une valeur c " ;
cin>> c ; 

delta =pow(b,2)-4*a*c ;

if(delta>0){
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    cout<< x1 << endl << x2  ;
    if(delta==0){
        x= (-b)/(2*a);
        cout<<x;
    }
}
else {
    cout<<" y a aucune solution "; 
}


return 0; 

}