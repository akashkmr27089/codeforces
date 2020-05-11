#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;

// int main(){
//     long long int temp, temp2, temp3, temp4;
//     cin >> temp;
//     loop(j, temp){
//         cin >> temp2 >> temp3;
//         long long int i = 0;
//         temp4 = temp2 -1;
//         loop(i, temp4){
//             if((temp3 - (i+1))%temp4 == 0){
//                 cout <<temp2*((temp3-(i+1))/temp4) + (i+1) << endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }

int main(){
    long long int temp, a,b, temp4;
    cin >> temp;
    loop(j, temp){
        cin >> a >> b;
        if(a == 1) continue;
        if(b%(a-1) == 0) cout << a*((b/(a-1))-1) + (a-1) << endl;
        else cout << a*(b/(a-1)) + (b%(a-1)) << endl;
    }
    return 0;
}