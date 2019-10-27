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
    int n, k, x, y, z, w;
    cin >> n;
    char mapa[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; i < n; i++){
            cin >> mapa[i];
        }
    }
    cin >> k;

    for(int a = 0; a < k; a++){
        int ctd = 0;
        cin >> x >> y >> z >> w;
        x--; y--; z--; w--;
        for(int i = x; i <= z; i++){
            for(int j = y; j <= w; j++){
                if(mapa[i][j]== 'F'){
                    ctd++;
                }
            }
        }
        cout << ctd << endl;
    }
    return 0;
}
