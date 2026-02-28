#include<iostream>
#include<cmath>

using namespace std ;

int main (){

    int n ;
    cout<<"entrer un entier : ";
    cin>>n ;
    int fact=1;
    if ( n==0 || n==1){
       fact= 1 ;
       cout<<fact <<endl;
    }
    for(int i=1 ; i<=n ; i++){
        fact*=i;
    }
    cout<<fact<<endl;
    return 0;
}
