#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;

// bool solve(int data[], int size, bool dp[], int value){
//     cout << " value " << value << endl;
//     if(dp[value]!=false) return true;
//     else{
//         int i=0, sum, count;
//         while(i!=size){
//             sum = 0; count = 0;
//             cout << " First element " << data[i] << " at index " << i << endl;
//             if(data[i] >= value){
//                 i++;
//                 continue;
//             }
//             while(sum < value && i!=size){
//                 sum += data[i];
//                 count++;
//                 if(count >= 2) dp[sum] = true;
//                 i++;
//             }
//             if(i!=0 && i<size-1) i--;
//             dp[sum] = true;
//             cout << " Value " << dp[value] << " with sum " << sum << endl;
//             if(dp[value] == true) return true;
//         }
//     }
//     if(dp[value] == true) return true;
//     else return false;
// }

// int main(){
//     int temp, temp2;
//     cin >> temp;
//     bool dp[15] = {false};
//     int data[temp];
//     loop(i,temp){
//         cin >> temp2;
//         data[i] = temp2;
//     }
//     loop(i,temp){
//         cout<<" flag value is "<< solve(data,temp,dp,data[i]) << " for data " << data[i] << endl; 
//     }
//     // for(auto i:dp) cout << i << " ";
//     // cout<< endl;
//     return 0;
// }


// int main(){
//     int temp, temp2;
//     cin >> temp;
//     int dp[30];
//     memset(dp, -1, sizeof(int)*30);
//     int data[temp];
//     loop(i,temp){
//         cin >> temp2;
//         data[i] = temp2;
//     }
//     loop(i,temp){
//         cout<<" flag value is "<< solve(data,temp,dp,data[i]) << " for data " << data[i] << endl; 
//     }
//     for(auto i:dp) cout << i << " ";
//     cout<< endl;
//     return 0;
// }


// bool solve(int data[], int size, int dp[], int value){
//     cout << " selected value  " << value << endl;
//     if(dp[value]!=-1) return dp[value];
//     else{
//         int i=0, sum, count;
//         while(i!=size){
//             sum = 0; count = 0;
//             cout << " First element " << data[i] << " at index " << i << endl;
//             if(data[i] >= value){
//                 i++;
//                 continue;
//             }
//             while(sum < value && i!=size){
//                 sum += data[i];
//                 count++;
//                 if(count >= 2) dp[sum] = 1;
//                 i++;
//             }
//             if(i!=0 && i<size-1) i--;
//             if(count >=2) dp[sum] = 1;
//             dp[sum] = 1;
//             cout << " Value " << dp[sum] << " with sum " << sum << endl;
//             if(dp[value] == 1) return 1;
//         }
//     }
//     if(dp[value] == 1) return 1;
//     else{
//         dp[value] = 0;
//         return 0;
//     }
// }



// bool solve2(int data[], int size, int dp[], int value){
//     // cout << " selected value  " << value << endl;
//     int temp = 0;
//     if(dp[value]!=-1) return dp[value];
//     else{
//         int i=0, sum, count;
//         while(i!=size){
//             sum = 0; count = 0;
//             if(i!=0) i = temp+1;
//             temp = i;
//             // cout << " First element " << data[i] << " at index " << i << endl;
//             if(data[i] >= value){
//                 i++;
//                 continue;
//             }
//             while(sum < value && i!=size){
//                 sum += data[i];
//                 count++;
//                 if(count >= 2) dp[sum] = 1;
//                 i++;
//             }
//             if(i!=0 && i<size-1) i--;
//             if(count >=2) dp[sum] = 1;
//             // cout << " Value " << dp[sum] << " with sum " << sum << endl;
//             if(dp[value] == 1) return 1;
//         }
//     }
//     if(dp[value] == 1) return 1;
//     else{
//         dp[value] = 0;
//         return 0;
//     }
// }

#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;

bool solve(int data[], int size, int dp[], int value){
    // cout << " selected value  " << value << endl;
    if(dp[value]!=-1) return dp[value];
    else{
        int i = -1, j = 0;
        while(i!=size-1){
            j = i+1;
            i++;
            int sum = 0, count = 0;
            // cout << " First element " << data[i] << " at index " << i << endl;
            if(data[j]>= value) continue;
            while(sum < value && j<=size-1){
                sum += data[j];
                // cout << sum << endl;
                j++; count++;
                if(count > 1) dp[sum] = 1; 
            }
            if(count>1) dp[sum] = 1;
            // cout << " Value " << dp[sum] << " with sum " << sum << endl;
            if(dp[value] == 1) return true;
        }
        if(dp[value] == 1) return true;
        else{
            dp[value] = 0;
            return false;
        }
    }
}

int main(){
    int temp, temp2, testcase, count;
    int dp[8001];
    cin >> testcase;
    loop(k, testcase){
        temp = 7999;
        memset(dp, -1, sizeof(int)*8001);
        int data[temp];
        loop(i,temp){
            data[i] = 2;
        }
        count = 0;
        loop(i,temp){
            // cout<<" flag value is "<< solve(data,temp,dp,data[i]) << " for data " << data[i] << endl; 
            count += solve(data,temp,dp,data[i]);
        }
        cout<< count << endl;
    }
    return 0;
}

// int main(){
//     int temp, temp2, testcase, count;
//     int dp[8001];
//     cin >> testcase;
//     loop(k, testcase){
//         cin >> temp;
//         memset(dp, -1, sizeof(int)*8001);
//         int data[temp];
//         loop(i,temp){
//             cin >> temp2;
//             data[i] = temp2;
//         }
//         count = 0;
//         loop(i,temp){
//             // cout<<" flag value is "<< solve(data,temp,dp,data[i]) << " for data " << data[i] << endl; 
//             count += solve(data,temp,dp,data[i]);
//         }
//         cout<< count << endl;
//     }
//     return 0;
// }