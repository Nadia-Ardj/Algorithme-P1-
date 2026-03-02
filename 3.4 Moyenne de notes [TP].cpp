#include<iostream>
#include<cmath>

using namespace std ;

int main(){
    float note , somme  ;
    int cpt , max=0 , min=20 ;
    cout<<"entrer une note ";
    cin>>note ;

    while(note != -1){
        if( note >=0 && note <= 20){
            if(cpt == 0 ){
                note = max = min ;
                }
                else{
                    if(note>max){
                    max=note;

                    }
                    if(note<min ){
                        min=note ;

                    }}

            somme +=note ;
            cpt++;
   }

        else{
            cout<<" la note est invalide  il faut qu elle soit entre 0 et 20"<<endl;
        }
            cout<<"entrer une note ou -1 pour terminer  ";
            cin>>note ;
        }
       if(cpt>0){
          cout<<"la moyenne est : "<<somme/cpt<<endl;
          cout<<"la plus grande note saisie est : "<<max<<endl;
          cout<<"la petite note saisie est : "<<min<<endl;

    }




    return 0;
}
