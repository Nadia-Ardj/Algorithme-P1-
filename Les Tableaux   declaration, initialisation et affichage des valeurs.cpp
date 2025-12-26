
#include<iostream>

using namespace std ;
int main(){

 int tab[5]={0};
// int tab[]={18,0,17,16,19,20};
// tab[0]=18;
// tab[1]=17;
// remplissage du tableau :
for(int i=0 ; i<5 ; i++){
    cout<<"entrer l indice"<<i+1 <<endl;
    cin>>tab[i] ;
}
cout<<"les indices du tableau sont \t";
// affichage du contenue du tableau :
for(int i=0 ; i<5 ; i++){
    cout<<tab[i]<<"\t";
}



system("pause");
return 0; 
 

}