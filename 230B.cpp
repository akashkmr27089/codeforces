#include <iostream>
#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)

using namespace std;

// bool is_prime(long long int data){
//     if(data == 2) return true;
//     else{
//         for(long int i=2; i<=ceil(sqrt(data)); i++)
//             if(data%i == 0){
//                 cout << "found " << i << endl;
//                 return false;
//             }
//         return true;
//     }
// }

// int main()
// {
//     long long temp;
//     long long int temp2;
//     cin >> temp;
//     loop(j, temp){
//         cin >> temp2;
//         if(is_prime(temp2) == true){
//             cout << "NO" << endl;
//             continue;
//         }
//         if(temp2 >2){
//             bool flag = false, flag2 = false;
//             if(temp2%2 == 1){
//                 for(int i = 2; i < ceil(sqrt(temp2))+1; i++){
//                     cout << i << endl;
//                     if(temp2%i == 0 && flag == false)
//                         flag = true;
//                     else if(temp2%i == 0 && flag == true){
//                         flag2 = true;
//                         break;
//                     }
//                 }
//                 if(flag == true && flag2 == false) cout<< "YES" << endl;
//                 else if(flag2 == true) cout <<"NO" << endl;
//                 else cout <<"NO" << endl;
//             }
//             else{
//                 int temp3 = temp2/2;
//                 for(int i = 2; i < ceil(sqrt(temp2))+1; i++){
//                     if(temp2%i == 0){
//                         cout << "NO" << endl;
//                         flag = true;
//                         break;
//                     }
//                 }
//                 if(flag == false) cout << "YES" << endl;
//             }
//         }else{
//             cout << " NO" << endl;
//         }
//     }
// }

// Created by AAKASH KUMAR
// akashkmr27089@gmail.com

#include <bits/stdc++.h>

#define loop(i,n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll temp, temp2;
	cin >> temp;
	temp = temp+1;
	while(--temp){
		cin >> temp2;
		// cout <<"temp2 " << temp2 << endl;
		bool flag = false;
		ll temp3 = (ll)sqrt(temp2);
		if(temp3 * temp3 == temp2){
			for(ll i=2; i*i<=temp3; i++){
				if(temp2%i == 0){
					flag = true;
					break;
				}
			}
			if(temp2 == 1) flag = true;
			if(flag) cout << "NO" << endl;
			else cout << "YES" <<endl;
		}else{
			cout << "NO" << endl;	
		}
	}
	return 0;
}