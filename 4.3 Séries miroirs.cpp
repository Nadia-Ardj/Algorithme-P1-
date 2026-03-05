#include<iostream>
#include<cmath>
#include<array>

using namespace std ;

int main(){
    int n  ;

    cout<<" longeur des séries de nombres : ";
    cin>>n ;
    int serie1[n] , serie2[n] ;

    // saisir la première serie :
    cout<<"Première série : "<<endl;
    for(int i=0 ; i< n ; i++){
        cin>>serie1[i] ;
    }cout<<endl;

// saisir la deuxiemme serie :

    cout<<"Seconde série : "<<endl;
    for(int i = 0 ; i< n ; i++){
        cin>>serie2[i];
    }
    cout<<endl;

//     vérifier si les deux series sont miroirs :
    bool miroir = true ;
    for(int i=0 ; i < n ; i++){
        if(serie1[i]!=serie2[i]){
            miroir = false ;
        }else{
            miroir=true ;
        }
    }if(miroir==true){
        cout<<"Il s'agit de séries miroirs . "<<endl;
    }else{
        cout<<" Ce ne sont pas des séries miroirs ."<<endl;
    }
    return 0;
}
