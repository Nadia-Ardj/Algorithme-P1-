#include<iostream>
#include<cmath>

using namespace std ;

int main(){

    int Nb[21]= {0};

// saisie des notes :
   int note ;
   do{
    cout<<"entrer une note entre 0 et 20 :   ";
    cin>>note;
   if(note >= 0 && note <= 20){
       Nb[note]++;
}
   }while(note >= 0 && note <= 20);

//    histogramme horizontal :

for(int i=0 ; i <= 20 ; i++){
    cout<<i << " : ";
    for(int j=0 ; j< Nb[i] ; j++){
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}
