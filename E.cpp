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

const int N = 10004;

int a[N];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[n -i -1];
    }
    for(int i = 0;; i++){
        bool swapped = false;
        for(int j = 0; j < (n -1 -i); j++){
            if(a[j] > a[j +1]){
                swap(a[j], a[j +1]);
                swapped = true;
            }
        }
        if(!swapped){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
