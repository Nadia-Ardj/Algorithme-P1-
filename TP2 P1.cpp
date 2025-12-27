
#include<iostream>

using namespace std ;

int main(){
    
int v1 , v2 , v3 , v4=0 ;

cout<<"entrer la premiere valeur : " ;
cin>> v1 ;
cout<<" enter la deuxiemme valeur : ";
cin>> v2 ;
cout<<"entrer la troisiemme valeur : ";
cin>> v3 ;

v4=v1 ;
v1=v2 ; 
v2=v3 ;
v3=v4 ;

 cout<<"v1 devient  :"<<v1;
 cout<<"\nv2 devient : "<<v2 ;
 cout<<"\nv3 devient : "<<v3 ;

// Permuter avec quartres valeurs :
int v1 , v2 , v3 , v4 , vPer ;

cout<<"entrer 4 valeurs : " ;
cin>> v1 >> v2 >> v3 >> v4 ; 

vPer=v1 ;
v1=v2 ; 
v2=v3 ;
v3=v4 ;
v4=vPer;

 cout<<"v1 ="<<v1<<"\nv2 = "<<v2 <<"\nv3 ="<<v3 <<"\nv4 ="<<v4<<endl;

return 0;

}