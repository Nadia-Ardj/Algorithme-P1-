#include <iostream>
#include <string>
using namespace std;

int main() {

    string motMystere;
    string motCache;
    char lettre;
    int essais = 0;

    // Premier utilisateur saisit le mot mystère
    cout << "Entrez votre mot mystere : ";
    cin >> motMystere;

    // convertir en majuscules pour uniformiser
    for(int i = 0; i < motMystere.length(); i++){
        if(motMystere[i] >= 'a' && motMystere[i] <= 'z'){
            motMystere[i] -= 32;
        }
    }

    // Initialiser le mot "caché" avec des _
    motCache = "";
    for(int i = 0; i < motMystere.length(); i++){
        motCache += "_";
    }

    // Boucle jusqu'à ce que le mot soit entièrement découvert
    while(motCache != motMystere){

        cout << "Mot mystere: ";
        for(int i = 0; i < motCache.length(); i++){
            cout << motCache[i] << " ";
        }
        cout << endl;

        cout << "Entrez une lettre: ";
        cin >> lettre;

        // convertir la lettre en majuscule
        if(lettre >= 'a' && lettre <= 'z'){
            lettre -= 32;
        }

        essais++;

        // révéler toutes les occurrences de la lettre
        for(int i = 0; i < motMystere.length(); i++){
            if(motMystere[i] == lettre){
                motCache[i] = lettre;
            }
        }

        cout << "Après " << essais << " essai";
        if(essais > 1) cout << "s";
        cout << ", voici le mot mystere: ";
        for(int i = 0; i < motCache.length(); i++){
            cout << motCache[i] << " ";
        }
        cout << endl << endl;
    }

    cout << "Bravo ! Vous avez decouvert le mot mystere '"
    << motMystere << "' en " << essais << " essai";
    if(essais > 1) cout << "s";
    cout << " !" << endl;

    return 0;
}
