
// Ecrire un programme qui :
// 1.posssède une fonction saisirNote()qui demande une note /20 
// 2.possède une fonction afficherResultat(float) qui :
//   affiche "reussi " si note>=10
//   affiche " echoue" si note<10 
// 3. dans le main , appeler les deux fonctions  




#include<iostream>
#include<string>

using namespace std ;

float saisirNote(){
    float note ;
    cout<<"entrer une note /20 ";
    cin>>note;
    return note ;
}
void afficherResult(float note ){
    if(note<10){
        cout<<"echoue ! ";
    }
    else if(note>=10){
        cout<<"reussi ";
    }
}


int main(){
float n=saisirNote();
cout<<"la note saisie est  :"<<n;
afficherResult(n);


    return 0;
}