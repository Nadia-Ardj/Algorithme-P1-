#include<iostream>
#include<cmath>
#include<string>

using namespace std ;

int main(){
char c ;
string chaine ;

cout<<" entrer une chaine : ";
cin>>chaine;

cout<<" quel caractére voudrez-vous chercher ? ";
cin>>c ;

 int cpt=0 ;
for(int i=0 ; i<chaine.length() ; i++){

    if(chaine[i]==c ){
        cpt++ ;
    }
}cout<<" le  caractére "<<c<<" apparait "<<cpt <<" fois dans la chaine  "<<endl;

return 0 ;
}
