// #Written by akashkmr27089@gmail.com
// subset sum problem

#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;



// long long int data[101];

// int solve(long int temp){
//     ::data[0] = 0;
//     long int  a,b,c,d,e;
//     for(long int i=1; i<=temp; i++){
//         a=b=c=d=e=INT_MAX;
//         if(i-1>=0) a = ::data[(i-1)%100];
//         if(i-5>=0) b = ::data[(i-5)%100];
//         if(i-10>=0) c = ::data[(i-10)%100];
//         if(i-20>=0) d = ::data[(i-20)%100];
//         if(i-100>=0) e = ::data[(i-100)%100];
//         ::data[(i)%100] = 1 + min(a, min(b, min(c, min(d,e))));
//     }
//     return ::data[temp%100];
// }

// int main(){
//     long int temp;
//     cin >> temp;
//     cout << solve(temp) << endl;
//     return 0;
// }

// #Written by akashkmr27089@gmail.com
// subset sum problem

#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;

int solve(long int value, int doc[], int i){
    if(i<0 || value <=0) return INT_MAX;
    if(value == 0) return 0;
    while(doc[i] > value && i !=0) i--;
    if(value%doc[i] == 0) return value/doc[i];
    else{
        return min((int)value/doc[i] + solve(value%doc[i], doc, i-1), solve(value, doc, i-1));
    }
}

int main(){
    long int temp;
    cin >> temp;
    int doc[] = {1,5,10,20,100};
    cout << solve(temp, doc, 4) << endl;
    return 0;
} 
