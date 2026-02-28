#include<iostream>
#include<cmath>

using namespace std ;

int main (){
    int x ;
    cout<<"entrer un entier x : ";
    cin>>x ;

    cout<<"la table de  multiplication de x : "<<endl;

    for(int i=0 ; i<=10 ; i++){

          cout<<x<<"*"<<i<<"="<<x*i<<endl;
    }


    return 0 ;
}
