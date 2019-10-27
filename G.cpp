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
    long long n;
    cin >> n;
    set<long long> numeros;
    for(long long i = 0; i < n; i++){
        numeros.insert(i);
    }
    set<long long> contado;
    while(n--){
        long long a;
        cin >> a;
        contado.insert(a);
    }
    for(auto &item: numeros){
        if(contado.count(item) == 0){
            cout << item << endl;
            return 0;
        }
    }
    return 0;
}
