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
    map<string, float> extrato;
    extrato["alimentacao"] = 0.00;
    extrato["despesas"] = 0.00;
    extrato["geral"] = 0.00;
    extrato["transporte"] = 0.00;
    int n;
    float x, total= 0;
    string c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> c;
        extrato[c] += x;
        total += x;
    }
    printf("alimentacao %.2f %.2f\n", extrato["alimentacao"], (100.00*extrato["alimentacao"])/total);
    printf("despesas %.2f %.2f\n", extrato["despesas"], (100.00*extrato["despesas"])/total);
    printf("geral %.2f %.2f\n", extrato["geral"], (100.00*extrato["geral"])/total);
    printf("transporte %.2f %.2f\n", extrato["transporte"], (100.00*extrato["transporte"])/total);
    return 0;
}
