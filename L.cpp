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
    long long n, t, x, y, r, result = 0;
    cin >> n;
    vector<pair<long long, long long>> vs(n);
    for(int i = 0; i < n; i++){
        cin >> vs[i].first >> vs[i].second;
        vs[i].first *= vs[i].first;
    }
    cin >> t;
    while(t--){
        cin >> x >> y;
        r = x*x + y*y;
        pair<long long, long long> valor(r, -1);
        auto it = lower_bound(vs.begin(), vs.end(), valor);
        if(it != vs.end()){
            result += it->second;
        }
    }
    cout << result << endl;
    return 0;
}
