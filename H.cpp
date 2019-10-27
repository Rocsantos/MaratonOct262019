/*
# Maraton Oct 26 2019
### Authors:
        Tiagodsf
        AlbertoTDNeto

### Institution:
    UnB

### Thanks for reading
*/
#include <bits/stdc++.h>
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pii>
#define ll long long
#define pb push_back
#define f first
#define s second
using namespace std;
 
int at, aq;
 
bool comp(pii A, pii B) // f-T s-K
{
 int distA=abs(aq-A.s), distB=abs(aq-B.s);
 if(distA > distB)
  return true;
 else if(distA < distB)
  return false;
 else
 {
  if(A<B)
   return true;
  else
   return false;
 }
}
 
int main() {
  int n, m, t, q, tmp;
  int gt, gq;
  scanf("%d %d", &n, &m);
  vii todos;
  // int at, aq = 0;
  at = 0; aq = 0;
 
  for(int i = 1; i <= n; i++) {
    scanf("%d %d", &t, &q);
    if(i == 1) at = t;
    if(i == m) {
      gt = t;
      gq = q;
    }
    todos.pb({t, q});
  }
 
  vii req;
  bool cont = true;
  int l = 0;
  while(cont) {
    int i;
    for(i = l; i < n; i++) {
      if(todos[i].f <= at)
        req.pb(todos[i]);
      else
        break;
    }
    l = i;
 
    if(req.size() == 0) {
      at = todos[l].f;
      // cout << "l = " << l << endl;
      // scanf("%d", &tmp);
      continue;
    }
 
    sort(req.begin(), req.end(), comp);
    tie(t, q) = req[req.size()-1];
    // if(req.size() == 0)
    //   cout << "fudeu\n";
    req.erase(req.end()-1);
    at += abs(q-aq);
    aq = q;
    if(t == gt and q == gq)
      cont = false;
    // else
    //   cout << "at = " << at << " aq = " << aq << endl;
  }
 
  cout << at << endl;
 
  return 0;
}
