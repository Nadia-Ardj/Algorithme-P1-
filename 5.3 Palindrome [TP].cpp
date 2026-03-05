#include<iostream>
#include<string>

using namespace std ;

int main(){
    string mot ;
    bool est_palindrome = true;

    cout<<" Entrer un mot : ";
    cin>> mot ;

    int n = mot.length();
    for(int i=0 ; i< n/2 ; i++){
        if( mot[i]!= mot[n-1-i] ){
            est_palindrome = false ;
        }
    }
    if(est_palindrome){
        cout<<" le mot est un palindrome "<<endl;
    }else{
        cout<<" le mot n'est pas un palindrome "<<endl;
    }

//     tester le planidrome de phrases :
string phrase ;
string sans_espace="";
bool palindrome = true ;

cout<<" Entrer une phrase :";
getline(cin,phrase);

// supprimer les espaces :
for(int i=0 ; i< phrase.length() ; i++){
    if(phrase[i] != ' '){
        sans_espace += phrase[i];
    }
}

// tester la phrase si c'est palindrome :
int t = sans_espace.length();
for(int i=0 ; i< t/2 ; i++){
    if(sans_espace[i] != sans_espace[t-1-i]){
        palindrome = false ;
    }
}
if(palindrome){
    cout<<" la phrase est un palindrome "<<endl;
}else{
    cout<<"la phrase n'est pas un palindrome "<<endl;
}
    return 0 ;
}
