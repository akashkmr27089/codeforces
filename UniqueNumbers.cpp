#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;


//Final Anser

//int main()
//{
//	int temp, t;
//	cin >> t;
//	while (t--) {
//		vector<int> vec = {};
//		cin >> temp;
//		for (int i = 9; i > 0; i--)
//		{
//			if (temp >= i) {
//				vec.push_back(i);
//				temp -= i;
//			}
//		}
//		if (temp != 0) cout << -1;
//		else {
//			sort(vec.begin(), vec.end());
//			for (int test : vec) cout << test;
//		}
//		cout << endl;
//	}
//}
//







//
//vector<int> returnRem(map<int, int> doc) {
//	vector<int> vec = {};
//	for (int i = 1; i <= 9; i++) {
//		if (doc[i] == 0)
//			vec.push_back(i);
//	}
//	return vec;
//}
//
//int returnSum(vector<int> temp) {
//	int doc = 0;
//	for (int test : temp)
//		doc += test;
//	return doc;
//}
//
////bool subset(vector<int> data, int index, int val) {
////	if (index < 0) return false;
////	if (data[index] > val) return false;
////	else if (data[index] == val) return true;
////	return subset(data, index - 1, val - data[index]) || subset(data, index - 1, val);
////}
//
//string testString = "";
////bool log2;
//
//bool subset(vector<int> data, int index, int val) {
//	if (index < 0) return false;
//	/*if (data[index] > val) return false;*/
//	else if (data[index] == val) return true;
//	if (data[index] > val) return false;
//	bool temp, temp2;
//	temp = subset(data, index - 1, val - data[index]);
//	temp2 = subset(data, index - 1, val);
//	if (temp) testString += to_string(data[index]);
//	return temp || temp2;
//}
//
//map<int,int> returnFinal(map<int, int> data, vector<int> possibleValue, int test) {
//	bool log = subset(possibleValue, possibleValue.size() - 1, test);
//	cout << log << endl;
//	if (log == true) {
//		for (char temp3 : testString)
//			data[temp3 - '1' + 1] = 1;
//	}
//	return data;
//}
//
//int main()
//{
//	map<int, int> doc;
//	int t, temp, curr_val = 9;
//	string final = "";
//	cin >> t;
//	while (t--) {
//		cin >> temp;
//		if (temp < 10) cout << temp << endl;
//		else if (temp > 45) cout << -1 << endl;
//		else if (temp == 45) cout << 987654321 << endl;
//		else if (temp >= 10) {
//			int temp2 = temp;
//			while (temp2 >= 10) {
//				final += curr_val;
//				doc[curr_val] = 1;
//				temp2 -= curr_val;
//				curr_val -= 1;
//			}
//			// Check if finding value is possible 
//			vector<int> possibleValue = returnRem(doc);
//			if (possibleValue.size() == 0) cout << -1 << endl;
//			else if (returnSum(possibleValue) < temp2) cout << -1 << endl;
//			else {
//				// When returnSum(possibleValue) > temp2
//				sort(possibleValue.begin(), possibleValue.end(), greater<int>());
//				bool log = subset(possibleValue, possibleValue.size() - 1, temp2);
//				string finalDoc = "";
//				if (log) {
//					for (char temp3 : testString) {
//						doc[temp3 - '1' + 1] = 1;
//					}
//					for(int i =9; i>=0; i--){
//						if(doc[i] == 1)
//							finalDoc += to_string(i);
//					}
//				cout << finalDoc << endl;
//				}
//				else {
//					cout << -1;
//				}
//			}
//		}
//	}
//}





