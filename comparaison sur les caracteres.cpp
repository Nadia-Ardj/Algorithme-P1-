
#include<iostream>
#include<cmath> 
#include<cstdlib>
#include<ctime>
using namespace std ;

int main(){
    char c ; 
cout<<"entrer un caractere ";
cin>>c ; 

if ( c>='A' && c<='Z'){
    cout<<"votre caractere est majuscule\n";
}
else if (c>='a' && c<='b'){
    cout<<"votre caractere est miniscule\n";
}
else if(c>='0' && c<='9'){
    cout<<"vous avez entrer un chiffre \n";
}
else{
    cout<<"vous avez entrer un autre type de caractere\n";
}

system("pause");
return 0; 
 

}