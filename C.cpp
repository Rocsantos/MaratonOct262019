/*
# Maraton Oct 26 2019
### Authors:
        Marcos Paulo Amorim Ribeiro
        Rodrigo Ckmalho dos Santos

### Institution:
    UnB Faculdade do Gama

### Thanks for reading
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, aux, result = 0, ant = 0;
    set<int> km;
    cin >> k >> n;
    while(k--){
        cin >> aux;
        km.insert(aux); // Adicionando a informação do km com arvore, em um set, para que nao tenha valores repetidos
    }
    for(auto i : km){
        if(i - ant != 1){ // Verifica se a diferença de numeros é diferente de um para entao somar mais um trecho
            result++;
        }
        ant = i;
    }
    if(ant != n){ // Em caso do ultimo valor ser diferente do km total, então há mais um trecho sem arvores.
        result++;
    }
    cout << result << endl;
    return 0;
}
