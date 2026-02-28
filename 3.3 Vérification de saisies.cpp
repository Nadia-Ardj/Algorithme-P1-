#include<iostream>
#include<cmath>

using namespace std ;

int main(){
//  QUESTION 1 :
    int x ;

    cout<<"donner un reel positif : ";
    cin>> x ;
   while(x<0){
        cout<<"valeur incorrecte , donner un reel positif :";
        cin>>x;
    }


    cout<<"Merci"<<endl;
//     QUESTION 2 :
    int x ;
    do{
        cout<<"donner un reel positif : ";
        cin>>x ;

    }while(x<0);
    cout<<"Merci "<<endl;

    return 0;
}
