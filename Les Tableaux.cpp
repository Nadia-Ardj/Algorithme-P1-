
#include<iostream>
#include<string>
using namespace std ;

int main(){
// créer un tableau de 5 entiers, saisir toutes les valeurs , puis afficher la somme du tableau :
int tab[5];
// saisie :
for (int i = 0; i < 5; i++)
{
    cin>>tab[i];
}
// affichage 
for (int i = 0; i < 5; i++)
{
    cout<<"tab["<<i<<"] = "<<tab[i]<<endl;
}
// afficher la somme :
int somme =0 ;
for (int i = 0; i < 5; i++)
{
    somme +=tab[i];
}
cout<<"la somme est : "<<somme<<endl;

// Créer un tableau de 6 reéls et afficher le plus grand élément 
int tab[6] ;
for (int i = 0; i < 6; i++)
{
    cout<<"tab["<<i<<"] = ";
    cin>>tab[i];
}
int max=tab[0];
for (int i = 0; i < 6; i++)
{
    if (tab[i]>max)
    {
        max=tab[i];
    }
}
 cout<<"le plus grand est : "<<max;  
/*  Créer un tableau de 8 entiers, le remplir ,puis afficher : 
 combien de valeurs sont positives 
 combien sont négatives 
 combien sont égale à 0 */

int tab[8];
for(int i=0 ; i<8 ; i++){
    cout<<"["<<i<<"] = ";
    cin>>tab[i]; 
}
int compteur=0 , compteur1=0  , compteur2=0;
for(int i=0 ; i<8 ; i++){
    if(tab[i]<0){
    compteur++;
    }
    else if(tab[i]==0){
        compteur1++;
    }
    else{
        compteur2++; 
    }
}
cout<<"y en a "<< compteur<<"valeur negatives "<<endl;
cout<<"y en a "<< compteur2<<"valeur positives "<<endl;
cout<<"y en a "<< compteur1<<"valeur nuls "<<endl; 
// Créer un tableau de 10 entiers puis afficher les éléments dans le sens inverse :
int tab[10];
for (int i = 0; i < 10 ; i++)
{
    cout<<"tab["<<i<<"] = ";
    cin>>tab[i];
}
cout<<"le tableau devient : " <<endl;
for (int i = 9 ; i >= 0; i--){
    cout<<tab[i]<<endl;
}
// Créer un tableau de 10 caractères puis compter de combien de lettres sont des voyelles :
char tab[10]; 
for(int i=0 ; i<10 ; i++){
cin>>tab[i];
}
int compteur=0 ;
for (int i = 0; i < 10; i++)
{
    if(tab[i]=='a' || tab[i]=='A' || tab[i]=='i' || tab[i]=='I' || tab[i]=='u' || tab[i]=='U' || tab[i]=='o' || tab[i]=='O' || tab[i]=='e' || tab[i]=='E' || tab[i]=='y' || tab[i]=='Y')
{ 
     compteur++ ; 
}
}
cout<<"le tableau contient "<<compteur<<"voyelles ";
// Créer deux tableaux de 5 entiers chacun, puis créer un troisième tableau où chaque élément est : t3[i]=t1[i]+t2[i] :
int t1[5], t2[5] ,t3[5];
for (int i = 0; i < 5; i++)
{
    cout<<"t1["<<i<<"] = ";
    cin>>t1[i];
}
 cout<<"\n";
for (int i = 0; i < 5; i++)
{
    cout<<"t2["<<i<<"] = ";
    cin>>t2[i];
}
 cout<<"\n";
for (int i = 0; i < 5; i++)
{
    t3[i]=t1[i]+t2[i];
    cout<<"t3["<<i<<"] = ";
    cout<<t3[i]<<endl;
}
// Créer un tableau de 10 entiers et dire si le tableau est trié en ordre croissant ou pas :

int tab[10];
bool trie=true;
for (int i = 0; i < 10; i++)
{
   cout<<"tab["<<i<<"] = ";
   cin>>tab[i]; 
}
for (int i = 0; i < 9; i++)
{
   if (tab[i]>tab[i+1])
{
 trie=false ;
}}
if(trie){
    cout<<"\nle tableau est trie en ordre croissant ";
}
else{
    cout<<" \nle tableau n est pas trie  ";
}




return 0;
}

