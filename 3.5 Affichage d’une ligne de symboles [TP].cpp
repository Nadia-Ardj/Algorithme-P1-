#include<iostream>
#include<cmath>

using namespace std ;

int main (){
    int n ;

    cout<<" entrer un nombre entier : ";
    cin>> n ;

    for(int i=1 ; i<=n ; i++){
    if(i%2 == 0){
        cout<<"!";
    }else{
         cout<<"*";
    }
}
    cout<<endl;
 return 0;
}
