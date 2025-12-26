

#include<iostream>
#include<cmath> 

using namespace std ;

int main(){

int nbr=0 ;
unsigned long long facto=1 ;
int choix=0 , i=0; 
 
cout<<"bienvenue\n";

do
{
    do
    { cout<<"entrer un nombre :";
       cin>>nbr;
     } while (nbr<0);

        if(nbr==0 || nbr==1){
            facto=1 ;
            cout<<facto ;
        }
        else{
             i=1 ;
           while (i<=nbr)
           {
             facto =facto*i ;
            ++i ;
           }
        }
        
    
    cout<<"\nle factoriel du nombre est:"<<facto;
    cout<<"\nsi vous vouler reprendre taper 1 sinon taper un autre chiffre ";
    cin>>choix ;
    
} while (choix==1);


system("pause");
return 0; 
 

}