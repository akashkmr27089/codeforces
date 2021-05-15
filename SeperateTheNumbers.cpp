//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//
//
//void separateNumbers(string s) {
//	if (s.size() == 1) cout << "Yes" << " " << s << endl;
//	else {
//		int count = 1;
//		int curr_index = 0;
//		if (count * 2 <= s.size()) {
//			while(curr_index + 2*count + 1 < s.size())
//			int first = stoi(s.substr(curr_index, curr_index + count));
//			int second = stoi(s.substr(curr_index + 1, curr_index + 1 + count));
//			if (first + 1 == second) {
//				curr_index += count;
//			}
//		}
//	}
//}
//
//int main() {
//	separateNumbers("99910001001");
//	cout << stoi("99910001001") + 1 << endl;
//	return 0;
//}