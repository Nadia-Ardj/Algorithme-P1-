
#include<iostream>
#include<cmath> 

using namespace std ;
int main(){
    int tab[5]={}, i=0 ,j=0 , permu; 

 cout<<"entrer vos indices : ";
for(int i=0 ; i<5 ; i++){
    cin>>tab[i];
}
do
{
 j=0 ;
for(int i=0 ; i<4 ; i++){

       if(tab[i]>tab[i+1])
    {
         permu=tab[j];
        tab[j]=tab[j+1];
        tab[j+1]=permu ;
        j++ ;
    } 
} 
} while (j!=0); 

cout<<"le tableau trier est : \t";    
  for(int i=0 ; i<5 ; i++){
        cout<<tab[i]<<"\t";
  } 
 


system("pause");
return 0; 

}