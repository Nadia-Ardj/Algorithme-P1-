
#include<iostream>
#include<cmath> 

using namespace std ;

int main(){

    bool programmerun=true ;

cout<<programmerun; 

// ce qu'on peut faire :
if(programmerun=true){
    // traitement si vrai 
}

if(true){
    // traitement si vrai 
}

if(programmerun=1){
    // traitement si vrai 
}

if(!programmerun){
    // traitement si faux 
}

//  y'en a 2 methode pour gérer l'affichage booléénne :
bool a=1 ;
cout<<boolalpha<<a ;    // pour afficher les caractéres (il vas afficher "true")
cout<<noboolalpha<<a ;   // pour afficher les chiffres , il annule les caractéres ( il vas afficher 1 ) 


bool key=true ;
bool keyUp=true ;
bool keyDown =false ;

if(key){
    if(keyUp){
        cout<<"player move up";
    }
    if(keyDown){
        cout<<"player move down ";
    }
}
return 0; 


}