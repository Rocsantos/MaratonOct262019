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

struct autor{ // Aqui aparece uma propriedade da struct que eu não sei como implementar
    string nome;
    int p;
    autor(){ nome = ""; p = 0;}
    autor(string _nome, vector<int> vs){
        nome = _nome;
        sort(vs.begin(), vs.end());
        reverse(vs.begin(), vs.end());
        p = 0;
        for(int i = 0; i < vs.size(); i++){
            if(vs[i]>=(i+1)){
                p = i+1;
            }
            else{
                break;
            }
        }
    }
    bool operator <(autor other) const{
        return p == other.p?nome<other.nome:p>other.p;
    }
};

int main(){
    int n;
    cin >> n;
    vector<autor> vs(n);
    for(int i = 0; i < n; i++){
        string nome_;
        int p_;
        cin >> nome_ >> p_;
        vector<int> vx(p_);
        for (int j = 0; j < p_; j++){
            cin >> vx[j];
        }
        vs[i] = autor(nome_, vx);
    }
    sort(vs.begin(), vs.end());
    for (auto i: vs){
        cout << i.nome << " " << i.p << endl;
    }
    return 0;
}