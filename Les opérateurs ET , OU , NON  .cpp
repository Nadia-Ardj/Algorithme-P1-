
#include<iostream>
#include<cmath> 

using namespace std ;

int main(){
    int age=0 ;
    double m=0 ;

cout<<"entrer votre age ";
cin>> age ;
cout<<"\nentrer votre moyenne ";
cin>> m ; 

if( age>=18 && m>=14 ){    // l'opéraeur ET ; 
    cout<<"\nautoriser";
}
if(age==18 || m>=18 ){     // l'opérateur OU ; 
    cout<<"autoriser ";
}
else{
    cout<<"non autoriser "<<endl;
}
if (!(age>=18 ))   // !(age>=18) veut dire ( age<18 ); c'est l'opérateur NON ; 
{
    cout<<"vous etes mineur "<<endl;
}




return 0; 


}