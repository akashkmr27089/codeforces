#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;

const int size = 11;
int visited[::size] = {0};

void display(int data[::size][::size]){
    loop(i,::size){
        loop(j, ::size)
            cout << data[i][j] << " ";
        cout << endl;
    }
}

void reset(){
    loop(i,::size) ::visited[i] = 0;
}

void conn(int data[::size][::size], int a, int b){
    data[a][b] = 1;
    data[b][a] = 1;
}

bool bfs_search(int adj[::size][::size], int starting, int searching, queue<int>buffer){
    cout << " Starting at " << starting << endl;
    ::visited[starting] = 1;
    if(starting == searching) return true; 
    for(int i=1; i<::size; i++){
        int temp = adj[starting][i];
        if(temp == 1 && visited[i]==0)
            buffer.push(i);
    }
    if(buffer.empty()) return 0;
    int temp = buffer.front();
    buffer.pop();
    bool flag = bfs_search(adj, temp, searching, buffer);
    if(flag) return true;
    else return false;
}

bool dfs_search(int adj[::size][::size], int starting, int searching, stack<int>buffer){
    cout << " Starting at " << starting << endl;   
    ::visited[starting] = 1;
    if(starting == searching) return 1;
    for(int i=1; i<::size; i++){
        int temp = adj[starting][i];
        if(temp == 1 && visited[i]==0)
            buffer.push(i);
    }
    if(buffer.empty()) return 0;
    int temp = buffer.top();
    buffer.pop();
    bool flag = dfs_search(adj, temp, searching, buffer);
    if(flag) return true;
    else return false;
}

vector<int> dfs_search_key(int adj[::size][::size], int starting, int searching, stack<int>buffer, vector<int> data){
    cout << " Starting at " << starting << endl;   
    for(auto i: data) cout << i << " ";
    cout << endl;
    ::visited[starting] = 1;
    if(starting == searching){
        data.push_back(searching);
        return data;
    }
    for(int i=1; i<::size; i++){
        int temp = adj[starting][i];
        if(temp == 1 && visited[i]==0)
            buffer.push(i);
    }
    if(buffer.empty()){
        vector<int> temp;
        return temp;
    }
    int temp = buffer.top();
    buffer.pop();
    return dfs_search_key(adj, temp, searching, buffer, data);
}



int main(){
    int adj[::size][::size] = {0};
    //connecting edge
    conn(adj, 1,6), conn(adj, 1,2), conn(adj, 2,3), conn(adj,1,3), conn(adj, 3,6), conn(adj, 3,4);
    conn(adj, 2,4), conn(adj, 3,5), conn(adj,2,9), conn(adj,9,10);
    //after defining connection

    // code for searching begin 
    display(adj);
    int starting, searching;
    cin >> starting >> searching;
    queue<int>data;
    stack<int>data2;
    // bool found = dfs_search(adj, starting, searching, data2);
    // if(found) cout << "found " <<endl;
    // else cout << " Not found " << endl;

    // code for searching end 

    reset();
    vector<int> storage;
    storage = dfs_search_key(adj, starting, searching, data2, storage);
    cout << " Size " << storage.size() << endl;
    for(auto i:storage) cout << i << " ";
    cout << endl;
    return 0;
}