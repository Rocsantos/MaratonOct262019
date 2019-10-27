/*
# Maraton Oct 26 2019
### Authors:
        Marcos Paulo Amorim Ribeiro
        Rodrigo Carvalho dos Santos

### Institution:
    UnB Faculdade do Gama

### Thanks for reading
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string mineiro, portugues, frase;
    map<string, string> mi2pt; // Mineiro para portugues
    int n_traducoes, n_frases;
    cin >> n_traducoes >> n_frases;
    cin.ignore();
    for(int i = 0; i < n_traducoes; i++){
        getline(cin, mineiro); // Como e a expressao em mineiro
        getline(cin, portugues); // Como fica a expressao em portugues
        mi2pt.insert({mineiro, portugues}); // Associa o que esta em mineiro a uma expressao em portugues
    }
    for(int i = 0; i < n_frases; i++){
        getline(cin, frase); // A frase a ser traduzida
        frase+=' '; // Acrescenta um espaço a frase
        string auxstr = ""; // String auxiliar com valor zerado
        int auxint = 0; // Int auxiliar com valor zerado
        for (int j = 0; j < (int)frase.size(); j++){ // Percorre caracteres da frase
            if(frase[j] != ' '){ // Verifica se o caracter é diferente de um espaçamento
                auxstr += frase[j]; // Caso seja Auxiliar recebe o espaçamento
            } else{ // Caso não seja
                if(auxint != 0){ // Verifica se o inteiro auxiliar é igual a 0
                    cout << " "; // Caso seja, recebe espaçamento
                }
                auxint++; // Incrementa inteiro auxiliar
                if(mi2pt.find(auxstr) != mi2pt.end()){ // Verifica se há expressao a ser traduzida na frase
                    cout << mi2pt[auxstr]; // Caso haja imprime a expressao traduzida
                }else{
                    cout << auxstr; // Caso nao haja imprime apenas a expressao
                }
                auxstr = ""; // Zera a String Auxiliar
            }
        }
        cout << endl;
    }
    return 0;
}