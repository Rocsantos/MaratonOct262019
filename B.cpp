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
    vector<int> periodo;
    int anos = 0, aux, n, t, c;
    cin >> n >> t >> c;
    for(int i = 0; i < n; i++){
        cin >> aux;
        periodo.push_back(aux); // Coloca as informacoes do periodo no vetor
    }
    sort(periodo.begin(), periodo.end()); // Ordena as informacoes
    t -= n * c; // Nesta primeira etapa todos os N navios estao retirando sua capacidade maxima de toneladas de ouro
    while(t > 0){
        anos++, t++; // Um ano se passa, e a terra recupera uma tonelada de ouro 
        for(int i = 0; i < periodo.size(); i++){    // Para cada informacao de periodo
            if(anos%periodo[i] == 0){               // Sera verificado se um navio foi retirar mais ouro
                t -= c;
            }
        }
}                                                   // Até que chegue a zero toneladas no local
    anos++; //Fator de correcao dos anos
    cout << anos << endl;
    return 0;
}
