#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    int nombre ,  max ;
    cout<<" combien de nombres vous vouler saisir ? ";
    cin>>n;

    cout<<"entrer le premier nombre : ";
    cin>>max ;
     for(int i=2 ; i<=n ; i++){
         cout<<" entrer le nombre "<<i<<" : ";
         cin>>nombre;

         if( nombre>max){
             max=nombre ;
        }
    }
    cout<<"la plus grande valeur saisie est : "<<max<<endl ;

    return 0;
}
