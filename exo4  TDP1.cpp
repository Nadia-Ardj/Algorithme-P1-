
#include<iostream>
#include<cmath>

using namespace std ;

int main(){
int x ;
cout<<"saisir un nombre  :";
cin>>x ; 

x=abs(x);
cout<<"sa valeur absolue est : "<< x <<endl;

if(x % 2 ==0){
    cout<<"le nombre saisie est pair ";
}
else{
    cout<<"le nombre saisie est impair ";
}

return 0;

}