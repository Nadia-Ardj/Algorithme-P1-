
#include<iostream>
using namespace std ;

int main(){
    float noteAnglais , noteMath , noteInfo , Moyenne=0 ; 
    
    cout<<"note en anglais (coeff.2): \t " ; 
    cin>> noteAnglais ;
    cout<<"note en mathematique (coeff.5): \t";
    cin>> noteMath ;
    cout<<"note en informatique (coeff.3): \t";
    cin>> noteInfo;
   
    Moyenne= (noteAnglais*2 + noteMath*5 + noteInfo*3 )/10 ;
    cout<<"moyenne obtenue : \t"<< Moyenne ;


    return 0;

}