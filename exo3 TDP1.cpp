
#include<iostrem>

using namespace std ;

int main(){
int v1 , v2 , v3=0 ;

cout<<"entrer la premiere valeur : " ;
cin>> v1 ;
cout<<" entrer la deuxiemme valeur : ";
cin>> v2 ;

v3=v1 ;
v1=v2 ; 
v2=v3 ;
 cout<<"la premiere valeur devient  :"<<v1<<endl;
 cout<<"la deuxiemme valeur devient : "<<v2<<endl;

return 0;
}