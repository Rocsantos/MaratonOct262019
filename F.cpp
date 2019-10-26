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
#define M 1000
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    char mineiro[n][M], portugues[n][M], frase[M], *aux;
    for (int i = 0; i < n; i++){
        cout << "a";
        fgets(mineiro[i], M, stdin);
        cout << "b";
        fgets(portugues[i], M, stdin);
    }
    for (int i = 0; i < m; i++){
        cout << "c";
        fgets(frase, M, stdin);
        for (int i = 0; i < strlen(frase); i++){
            for (int i = 0; i < n; i++){
                aux = strstr(frase, mineiro[i]);
                strncpy (aux, portugues[i], strlen(portugues[i]));
            }
            cout << frase;
        }
    }
    
    return 0;
}