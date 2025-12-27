
#include<iostream>
#include<cmath> 

using namespace std ;
int main()
{
    double note[5]={0} ,m=0.0 , somme=0.0;
    int i=0 ; 
 
for (int i = 0; i <5 ; i++)
{
    cout<<"entrer vos notes\t";
    cin>>note[i] ;

    somme +=note[i];
    cout<<somme ;
}
cout<<"les notes obtenus sont :\t ";
for (int i = 0; i < 5 ; i++)
{
    cout<<note[i]<<"\t";
}
    m=(somme )/(5) ;
    cout<<"\nvotre moyenne est : "<<m<<endl ; 
    

 

system("pause");
return 0; 
 

}