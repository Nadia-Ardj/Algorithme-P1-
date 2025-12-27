
/*Ecrire un programme sui :
1.Possède une fonction saisirNombre() qu'il lit deux float 
2.Possede une fonction calculerMoyenne(float a , float b ) qui calcule et retourne la moyeene des deux nombres 
3.Possède une fonction affichagerMoyenne(float m ) qui affiche la moyenne soud forme n
 */


 float saisirDeuxNobres(float &nbr1 , float &nbr2){
 cout<<"entrer le premier nombre ";
 cin>> nbr1 ;
 cout<<" entrer le deuxiemme nombre ";
 cin>>nbr2;

 }
 float calculerMoyenne(float  nbr1, float nbr2){
    return (nbr1+nbr2)/2.0;
  }
  float afficherMoyenne(float moyenne){
    moyenne=(nbr1+nbr2)/2.0;
    return moyenne;
  }

 int main(){
    float n1 , n2 , moy ;
    saisirDeuxNombres(n1 , n2);
    moy=calculerMoyenne(n1,n2);
    cout<<"la moyenne est : "<<afficherMoyenne(moy);


    return 0;
 }