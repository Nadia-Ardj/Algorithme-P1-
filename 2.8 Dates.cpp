#include<iostream>
#include<cmath>

using namespace std ;

bool  anneeBisextile( int annee){
    if((annee % 4 == 0  && annee % 100 != 0 )|| ( annee % 400 ==0) ){
     return true;
    }
    return false ;
}
int JourDansMois( int mois , int annee){
    switch(mois){
        case 1 : case 3 : case 5: case 7: case 9: case 11 :
            return 31 ;
        case 4: case 6 :  case 8: case 10 : case 12 :
            return 30 ;
        case 2 :
            if(anneeBisextile(annee)){
                return 29 ;
            }
            else{
                return 28 ;
            }
        default :
            return 0;
    }
}
bool DateVaide( int jour ,int mois , int annee){
    if( jour<0 || jour> JourDansMois( mois , annee)){
        return false ;

    }
    if( mois < 0 || mois > 12 ){
        return false ;
    }
    if (annee < 1582){
        return false ;
    }
    else{
        return true ;
    }
}

int main(){
    int annee1 , annee2 ;
    int jour1 , jour2 ;
    int mois1 , mois2 ;

    cout<<" date 1: "<<endl;
    cin>>jour1>>mois1>>annee1 ;

    cout<<"date 2 :  "<<endl;
    cin>>jour2>>mois2>>annee2;

//      verifier la validité des dates :
    if(!(DateVaide(jour1,mois1,annee1)) || !(DateVaide(jour2, mois2 , annee2))){
        cout<<"une des date est invalide "<<endl ;
    }

//      verifier la validite de la date :
    if(annee2>annee1 ||  (annee1==annee2 && jour1<jour2) || (annee1==annee2 && mois1<mois2) ){
        cout<<" la date est invalide "<<endl;
    }

//      calculer l' annee :
 int annee ;
 annee = annee1 - annee2 ;
 cout<<" Annees separant ces deux dates : "<<annee <<endl ;



    return 0 ;
}
