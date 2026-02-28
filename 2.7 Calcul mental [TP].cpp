#include<iostream>
#include<cmath>

using namespace std ;
int main(){

    int a , b , c ;
    char operation ;
    float resultat ;

    cout<<"choisi une operation  ( + * -): ";
    cin>>operation  ;


    if(operation != '+'  && operation != '*' && operation != '-'){

        cout<<"operation invalide  "<<endl;

    }

    cout<<" entrer deux nombres  :";
    cin>> a >> b ;
   switch(operation){
       case'+':
           resultat = a+b ;
           break;
       case '-' :
           resultat = a - b ;
           break ;
       case '*' :
           resultat = a*b ;
}
cout<<" que est le resultat de "<<a <<operation<< b <<"? "<<endl;
cin>>c ;
 if(c== resultat ){
     cout<<"Bravo ! "<<endl ;

}
else{
    cout<<" Erreur  , le resultat est : "<<resultat<<endl ;
}
    return 0 ;
}
