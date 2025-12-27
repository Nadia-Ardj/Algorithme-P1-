
#include<iostream>
#include<cmath> 
#include<cstdlib>
#include<ctime>
using namespace std ;

int main(){
    int nbrmystere=0 , nbrentrer=0 ,MAX=100 , MIN=0 , choix=0; 

 srand(time(NULL));
 do
 {
         nbrmystere= rand()% (MAX-MIN+1)+ MIN ; 
 do
 {
          cout<<"entrer votre nombre ";
      cin>>nbrentrer;

    if(nbrentrer<nbrmystere){
        cout<<" trop petit \n";
    }
    else if (nbrentrer>nbrmystere){
        cout<<" trop grand \n";
    }
    else{
        cout<<"Bravo ! vous l avez trouver \n" ;
    }
    
 } while (nbrentrer!=nbrmystere);
  cout<<"taper 1 pour rejouer et un autre chiffre pour sortir ";
  cin>> choix;
  } while (choix==1);



system("pause");
return 0; 
 

}