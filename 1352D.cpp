#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;

int main(){
    int temp, temp2, temp3;
    cin >> temp;
    loop(i,temp){
        cin >> temp2;
        vector < int > data;
        loop(j, temp2){
            cin >> temp3;
            data.push_back(temp3);
        }
        int alice = 0 , bob = 0, max = 0, count = 0, sum;
        bool flag = true;
        while(flag){
            sum = 0;
            if(max == 0) alice += data[0], max = alice, data.erase(data.begin()), count++;
            else{
                if(alice<bob){
                    //chance of alice
                    do{
                        if(data.size()==0){
                            if(sum!=0){
                                alice += sum;
                                flag = false;
                            }
                            else flag = false;
                            break;
                        }
                        sum += data[0];
                        data.erase(data.begin());
                    }while(sum <= max);
                    if(flag == true) alice += sum;
                    count++ ; 
                    max = sum;
                }else{
                    //chance of alice 
                    do{
                        if(data.size() == 0){
                            if(sum!=0){
                                bob += sum;
                                flag = false;
                            }
                            else flag = false;
                            break;
                        }
                        sum += data[data.size()-1];
                        data.erase(data.begin() + data.size() - 1);
                    }while(sum <= max);
                    if(flag == true) bob += sum;
                    count ++ ;
                    max = sum;

                }
            }
            if(data.size() == 0) break;
        }
        cout << count << " " << alice << " " << bob << endl; 
    }
    return 0;
}