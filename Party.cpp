//#include<iostream>
//#include<vector>
//#include<set>
//
//using namespace std;
//int count = 0;
//
//void returnCount(vector<int> data, int i) {
//	if (i <= -1) return;
//	if (data[i] == -1) {
//		return;
//	}
//	else {
//		::count += 1;
//		returnCount(data, data[i]-1);
//	}
//	return;
//}
//
//
//int main() {
//	int n, temp, group = 0;
//	cin >> n;
//	vector<int> data;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		data.push_back(temp);
//	}
//	set<int> groupCount;
//	for (int i = 0; i < n; i++) {
//		if (data[i] == -1) {
//			groupCount.insert(0);
//			continue;
//		}
//		returnCount(data, i);
//		temp = ::count;
//		::count = 0;
//		groupCount.insert(temp);
//	}
//	cout << groupCount.size() << endl;
//	return 0;
//}

#include<iostream>
#include<vector>
#include<set>

using namespace std;
int count = 0;
vector<int> ValVec = {};

//int returnCount(vector<int> data, int i) {
//	if (ValVec[i] != -1) return ValVec[i];
//	if (i <= -1) return ::count;
//	if (data[i] == -1) {
//		return;
//	}
//	else {
//		::count += 1;
//		returnCount(data, data[i] - 1);
//	}
//	return;
//}

int dfs(vector<int>data, int i) {
	if (ValVec[i] != -1) return ::ValVec[i];
	if (ValVec[i] == -1) {
		ValVec[i] = 0;
		return 0;
	}
	else {
		int temp = dfs(data, ValVec[i]);
		ValVec[i] = 1 + temp;
		return ValVec[i];
	}
}


int main() {
	int n, temp, group = 0;
	cin >> n;
	vector<int> data;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		data.push_back(temp);
		::ValVec.push_back(-1);
	}
	set<int> groupCount;
	for (int i = 0; i < n; i++) {
		if (data[i] == -1) {
			groupCount.insert(0);
			continue;
		}
		//returnCount(data, i);
		temp = dfs(data, i);
		groupCount.insert(temp);
	}
	cout << groupCount.size() << endl;
	return 0;
}