#include<iostream>
#include<cmath>

using namespace std ;

int main(){

    int a , b , c , delta=0;
    float x1 , x2 ;

    cout<<"entrer la valeur des coefficients  :  ";
    cin>>a>>b>>c;
    if(a==0){
        cout<<"ce n est pas une equation du second degre"<<endl;
    }
    delta = (b*b) - 4*(a*c);

    if(delta==0){
        x1= b/(2*a);
        cout<<x1<<endl;
    }
    else if(delta>0){
        x1=( -b-sqrt(delta))/2*a;
          x2=( -b+sqrt(delta))/2*a;
          cout<<x1<<x2<<endl;
    }
    else{
        cout<<"pas de solution "<<endl;
    }

  return 0;
}

