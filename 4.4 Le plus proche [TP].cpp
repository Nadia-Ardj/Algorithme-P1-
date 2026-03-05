#include<iostream>
#include<cmath>
#include<array>

using namespace std ;
int main(){
 const int N = 5 ;
 float tab[N];

//  saisie du tableau :
cout<<" saisie "<<N << " nombres reéls ";
for(int i=0 ; i < N ; i++){
    cin>>tab[i];
}

// saisie le nombre de reference :
float reference ;
cout<<"le nombre de référence saisie : ";
cin>>reference;

// affiche le nombre le plus proche :
float plus_proche=tab[0];
float distance_min = fabs(tab[0]- reference );
for(int i=0 ; i < N ; i++){
    float distance = fabs(tab[i]- reference );
    if(distance < distance_min){
       distance_min = distance ;
       plus_proche = tab[i];
    }
}cout<<"le nombre le  plus proche de "<<reference<<" est : "<<plus_proche<<endl;


return 0;
}
