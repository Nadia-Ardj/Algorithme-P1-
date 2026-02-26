
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    char lettre='A';
    cout<<lettre<<endl ;
    string mot="Bonjour ";
    cout<<mot<<endl;
    mot[0]= 'b' ;
    cout<<mot[1]<<endl;
    cout<<mot[6]<<endl;
    cout<<mot<<endl ;
    string phrase ;
    getline(cin,phrase);
    cout<<phrase<<endl ;
    cout<<"le premier mot est compose de "<<mot.length()-1<<"  lettres"<<endl;
    cout<<"la phrase est compose de "<<phrase.length()-2<<"  lettres"<<endl;
    string coller = mot + phrase ;
    cout<<coller;
    return 0;
}
// Déclare un charactère N et affiche le :

int main(){
    char c='N';
    cout<<c;
    // Déclare une chaine "Bonjour" puis affiche sa longeur :
    string s="Bonjour" ;
    cout<<s.length();
    // Demande à l'utilisateur de taper son prenom puis affiche  Bonjour + prenom  :
    string prenom ;
    cout<<"votre prenom ";
    cin>>prenom;
    cout<<s<<prenom;
    // lire une phrase entiere avec des espaces et affiche le premier caratère :
    string phrase ;
    getligne(cin.phrase);
    cout<<phrase<<endl;
    cout<<"le premier caractere est : "<<phrase[0];
    // Ecrire un programme qui affiche le dernier caractère d'une chaine saisie :
     string chaine, dernier ;
    cout<<" la chaine saisie est : ";
    cin>> chaine ;
    cout<<"le dernier caractere de la chaine saisie est :"<<chaine[chaine.length()-1];
    // on peut aussi la faire avec une boucle for :
    for(int i=0 ; i<chaine.length() ; i++){
     dernier=chaine[i]; 
     }
     cout<<"le dernier caractere de la chaine saisie est :"<<dernier;
    //  Ecrire un programme qui: 1.demande à l'utilisateur de saisir un mot :
     string mot ;
    cout<<"saisie un mot ";
    cin>>mot; 
    // 2.Affiche chaque caractère du mot l'un après l'autre, chacun sur une ligne :
    for(int i=0 ; i<mot.length() ; i++){
        cout<<mot[i]<<endl;
    }
    // Demande à l'utilisateur un mot et compter combien de fois la lettre 'a' (ou'A') apparait dans ce mot :
    string mot ;
    int compteur=0;
    cin>>mot;
    for(int i=0 ; i<mot.length() ; i++){
        if(mot[i]=='a' || mot[i]=='A'){
            compteur++; 
        }
    }
    cout<<"la lettre a apparait "<<compteur<<" fois "; 
// Demande un mot à l'utilisateur , puis affiche-le à l'envers,caractère par caractère :
string mot ;
cout<<"entrer un mot " ;
cin>>mot ;
for(int i=mot.length()-1; i>=0; i--){
    
    cout<<mot[i]<<endl;
}
// Demande un mot et compte combien il contient de voyelles: 
string mot ;
int compteur=0 ;
getline(cin,mot) ;
cout<<mot ;
for(int i=0 ; i<mot.length() ; i++){
    if (mot[i]=='a' || mot[i]=='A' || mot[i]=='i' || mot[i]=='I' || mot[i]=='u' || mot[i]=='U' || mot[i]=='o' || mot[i]=='O' || mot[i]=='e' || mot[i]=='E' || mot[i]=='y' || mot[i]=='Y')
    {
        compteur++ ;
    }
}
cout<<"le nombre de voyelles est :" <<compteur;
// Vérifier un palindrome : 
string mot ;
int i=0 ; 
bool estPalindrome = true ;
cout<<" entrer un mot :";
cin>> mot ; 

for (int i=0; i< mot.length()/2 ; i++ ){

    if( mot[i] != mot[mot.length()-1-i]){
           estPalindrome=false ;
    }
}
if(estPalindrome){
    cout<<"c est un palindrome ";
}
else{
    cout<<"ce n'est pas un palindrome ";
}

// Demande un mot à l'utilisateur et remplace toutes les lettres a par * :
string mot ;
cout<<"entrer un mot  ";
cin>> mot ; 
for(int i=0 ; i<mot.length() ; i++){
    if(mot[i]=='a' || mot[i]=='A'){
        mot[i]= '*' ;
    }
} 
  cout<<"le mot devient : "<<mot;

// demande à l'utilisteur de saisir une phrase et compte le nombre de mots :
string phrase ;
cout<<"saisie une phrase:  ";
getline(cin,phrase);    // pour toute la ligne , sinon il vas arreter la lecture au premier espace  
int compteur=0 ;
for(int i=0 ; i<phrase.length() ; i++){
    if(phrase[i]==' '){    // pour chaque espace c'est un mot 
      compteur++;
}      
}
compteur++;
 cout<<"le nombre de mots est : "<<compteur;
// pour gerer les espaces :
stringstream ss(phrase);   // il gère les miltiples espaces 
string mot ;
while(ss >>mot){       
    compteur++ ;
}
cout<<"le nombre de mots est : "<<compteur;
// demander un mot puis affiche tout en majuscule et en minuscule :

string phrase ;
cout<<"taper une phrase  " ;
getline(cin,phrase);

string majus=phrase ;
string minus=phrase ;
// majuscules :
for(int i=0 ; i<majus.length() ; i++){
    if(majus[i]>= 'a' && majus<='z'){
        majus[i]=majus[i] - 32 ;
    }
}
// minuscules :
for(int i=0 ; i<minus.length() ; i++){
    if(minus[i]>='A' && minus[i] <='Z'){
        minus[i]=minus[i] + 32 ;
    }
}
cout<<" la conversion en majuscule est : "<<majus;
cout<<" la conversion en miniscule  est : "<<minus;
    return 0;

}
