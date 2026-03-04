#include<iostream>
#include<cmath>

using namespace std ;

int main(){
    //     1. Écrire un programme qui détermine si un nombre donné est parfait.

    int n , somme=0 ;

    cout<<" saisie un nombre : ";
    cin>>n;

    for(int i=1 ; i<= n ; i++){
        if(n%i==0){
           somme+=i;
        }
        }if(n==(somme/2)){
            cout<<" le nombre est parfait "<<endl;
        }else{
        cout<<" le nombre n'est pas parfait "<<endl;
    }

//     2. Écrire un programme qui affiche tous les nombres parfaits inférieurs à une borne donnée :

int borne;

cout<<"Entrer une borne ";
cin>>borne;
cout<<" les nombres pafaits qu'il y'en a dans cette borne sont : "<<endl;

for(int n=1 ; n<= borne ; n++){
int somme = 0 ;
  for(int i=1 ; i< n ; i++){
    if(n%i==0){
        somme+=i;
    }
  }if(somme == n){
      cout<<n<<endl; }

}


    return 0;
}
