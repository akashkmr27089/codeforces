// Created by AAKASH KUMAR
// akashkmr27089@gmail.com

#include <bits/stdc++.h>

#define loop(i,n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;

int data[1000] = {0};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    //number of ways of finding sum of number with elements 1, 3, 4
    ::data[0] = 1;
    ::data[1] = 1;
    ::data[2] = 1, ::data[3] = 2;
    for(int i=4; i<=t; i++){
        ::data[i] = ::data[i-1] + ::data[i-3] + ::data[i-4];
    }
    cout << ::data[t] << endl;
    return 0;
}