// #Written by akashkmr27089@gmail.com
// subset sum problem

#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;

bool is_prime(long long int data){
    cout << data;
    if(data == 2) return true;
    else{
        for(long int i=2; i<=ceil(sqrt(data)); i++)
            if(data%i == 0){
                cout << i << endl ;
                return false;
            }
        return true;
    }
}

int main(){
    cout << is_prime(999966000289) << endl;
    return 0;
} 