#include<iostream>
#include<cmath>
#include<string>

using namespace std ;
int main(){
    string chaine ;
    cout<<" entrer une chaine de caractére :";
    getline(cin,chaine);

//     1-Aération :
    for(int i=0 ; i< chaine.length() ; i++){
        cout<<chaine[i]<<" ";
    }cout<<endl;

// 2-Compression : supprimer les caractére espace
    for(int i=0 ; i < chaine.length() ; i++){
        if(chaine[i] !=' '){
            cout<<chaine[i];
        }
    }cout<<endl;

//     3-Correction : supprimer les espaces doublés
    bool espace_précédent =false ;

    for(int i=0 ; i < chaine.length() ; i++){
        if(chaine[i]==' '){
            if(!espace_précédent){
                cout<<" ";
                espace_précédent = true ;
            }

        }else{
            cout<<chaine[i];
            espace_précédent = false ;
        }
    }cout<<endl;


    return 0;
}
