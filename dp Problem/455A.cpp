// Created by AAKASH KUMAR
// akashkmr27089@gmail.com

#include <bits/stdc++.h>

#define loop(i,n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;


bool verify(vector<int> data){
    for(auto i:data){
        if(i != -1) return 0;
    }
    return 1;
}

// string convert(vector<int> data){
// 	string s = "";
// 	loop(i, data.size())
// 		s += to_string(data[i]);
// 	return s;
// }

map<string,int> value;
int count = 0;


int solve(vector<int> data){
    int max_value = INT_MIN;
    int num_value = data.size();
    vector<int> data2 = data;
    if(verify(data) == 1) return 0;
    else {
        for(int i=num_value-1; i>=0; i--){
            if(data[i] == -1) continue;
            else {
                if (data[i] == -1) continue;
                int a = data[i] - 1, b = data[i] + 1;
                data[i] = -1;
                auto it = data.begin();
                while (it != data.end()) {
                    if (*it == a || *it == b) *it = -1;
                    it++;
                }
                int temp = solve(data);
                temp += (b - 1);
				::count++;
                if (temp > max_value) max_value = temp;
                data = data2;
            }
        }
        return max_value;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, temp;
    cin>>t;
    vector<int> data;
    while(t--){
        cin >> temp;
        data.push_back(temp);
    }
    cout << solve(data);
    cout << endl;
	cout << " Count value " << ::count << endl;
    return 0;
}