#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;

int main(){
    const int size = 8;
    int adj_mat[8][8] = {0};
    loop(i,size)
        loop(j, size){
            cout << adj_mat[i][j] << " "; 
        }
}