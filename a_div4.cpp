
#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;

int main(){
    int temp, temp2, temp3;
    cin >> temp;
    loop(i, temp){
        cin >> temp2;
        int j = 1, count = 0;
        vector<int>data;
        while(temp2!=0){
            temp3 = (temp2%10) * j;
            if(temp3!=0)
                data.push_back(temp3);
            temp2 /= 10;
            j *= 10;
        }
        cout << data.size() << endl;
        for(auto &i:data) cout << i << " ";
        cout << endl;
        data.clear();
    }
    return 0;
}