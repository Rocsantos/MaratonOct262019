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
    int m, n, p, aux;
    set<char> caracter;
    map<char, string> HelloNewWorld;
    HelloNewWorld['A'] = "Hallo neue welt!";
    HelloNewWorld['E'] = "Hola nuevo mundo!";
    HelloNewWorld['F'] = "Bonjour le nouveau monde!";
    HelloNewWorld['I'] = "Hello new world!";
    HelloNewWorld['P'] = "Ola novo mundo!";
    HelloNewWorld['T'] = "Ciao nuovo mondo!";
    cin >> m >> n >> p;
    aux = m + n + p;
    char country[aux];
    scanf("%s", country);
    cout << HelloNewWorld['T'] << endl;
    caracter.insert('T');
    int tamset = caracter.size();
    for(int i = 0; i < aux; i++){
        if(country[i] != 'T'){
            caracter.insert(country[i]);
            if(tamset != caracter.size()){
                cout << HelloNewWorld[country[i]] << endl;
                tamset = caracter.size();
            }
        }
    }
    return 0;
}
