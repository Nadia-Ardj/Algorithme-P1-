
#include<iostream>
#include<cmath> 
#include<cstdlib>
#include<ctime>
using namespace std ;

int main(){
    char sexe='M' , carac;
int code=0 ; 

cout<<"entrer une lettre M/F ";
cin>>sexe;
if(sexe=='M'){
    cout<<"vous etes de sexe masculin\n ";
}
else if (sexe=='F'){
    cout<<"vous etes de sexe feminin\n";
}
else{
    cout<<"incorrecte\n";
}
if (sexe=='M' || sexe=='F')
{
    code=sexe ;
    cout<<" d apres la table ASCII le code de "<<sexe<<" est :"<<code <<endl;
}

else
{
    cout<<"entrer un autre caractere \n";
    cin>> carac ;
    code=carac ;
    cout<<"d apres la table ASCII le codage de  "<<carac<<" est :"<<code<<endl;
}



system("pause");
return 0; 
 

}