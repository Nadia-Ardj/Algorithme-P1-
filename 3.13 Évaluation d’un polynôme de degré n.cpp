#include<iostream>
#include<cmath>

using namespace std ;
int main(){
   float X;
   int d ;

    cout<<" X = ";
    cin>>X;
    cout<<" d = ";
    cin>> d ;

    float resultat = 0;
    float puissance=1 ;
    for(int i=0 ; i<= d ; i++){
        float a ;
        cout<<"a"<<i<<" = ";
        cin>>a ;

        resultat += a*puissance;
        puissance *= X;
    }
    cout<<"Résultat : "<<resultat<<endl;

    return 0;
}
