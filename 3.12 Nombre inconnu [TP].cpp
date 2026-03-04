#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std ;

int main(){
//     QUESTION 01:
 int nombre , nombre_mystere , essaies=0 ;
    srand(time(0));  //initialiser le hasard
    nombre_mystere = rand() % 100 + 1 ;



      cout<<"Deviner le nombre entre 1 et 100 "<<endl;

  do{
      cin>> nombre ;
      essaies++;
        if(nombre<nombre_mystere){
            cout<<"trop petit "<<endl;
        }else if(nombre>nombre_mystere){
            cout<<"trop grand "<<endl;
        }
  }while(nombre_mystere != nombre );
  cout<<" Bravo ! nombre trouvé en  "<<essaies<<" essaies "<<endl;

//   QUESTION 02:
  int min=1 , max=100 ;
  int proposition;
  char reponse ;

  cout<<" Penser à un nombre "<<endl;
  do{
      proposition = (min + max )/2 ;
      cout<<"je propose : "<<proposition<<endl;
      cout<<"P(plus) M(moins) où T(trouvé) ? "<<endl;
      cin>>reponse ;
      if(reponse == 'M' ){
          max = proposition - 1 ;
    }else if( reponse == 'P'){
        min = proposition + 1 ;
    }
}while(reponse != 'T');
cout<<"Super ! je l'ai trouvé "<<endl;
    return 0 ;
}
