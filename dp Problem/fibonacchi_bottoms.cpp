#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
//fibonacchi using dp -- backward with modulus operator saving spaces;

ll dp_bootom(ll t){  //topological DAG with more optimisation 
    ll f;
    vector<ll> data(3);
    for(ll i=1; i<= t; i++){
        if(data[i%3]!=0) f = data[i%3];
        if(i<= 2) f = 1;
        else f = data[(i-1)%3] + data[(i-2)%3];
        data[(i)%3] = f;
    }
    return data[t%3];
}

vector<ll> data(100);       // top down cannot be optimised easily in terms of memory occupied by it

ll dp_top(ll t){
    ll f;
    if(::data[t]!=0) return ::data[t];
    if(t<=2) f = 1;
    else f = dp_top(t-1) + dp_top(t-2);
    ::data[t] = f;
    return ::data[t];
}

int main(){
    ll t;
    cin >> t;
    cout << " Bottoms up approach answer " << dp_bootom(t) << endl;
    cout << " Top_down up approach answer " << dp_top(t) << endl;
    return 0;
}