#include <iostream>
#include <vector>
#include <map>

using namespace std;

int returnScore(string a) {
	if (a.size() == 0) return 0;
	else if (a.size() == 1) return (int)(a[0] - 'a' + 1);
	else if (a.size() > 1) return a.size() * ((int)(a[0] - 'a' + 1));
}

vector<string> weightedUniformStrings(string s, vector<int> queries) {
	vector<string> final = {};
	map<int, int> indexing;
	for (int doc : queries) {
		indexing[doc] = 1;
	}
	string curr_str = "";
	char curr_char = '1';
	for (int i = 0; i < s.size(); i++) {
		if (curr_char == '1' || curr_char != s[i]) {
			curr_char = s[i];
			curr_str = s[i];
		}
		else {
			// if the new character is same as old character
			curr_str += s[i];
		}
		if (indexing[returnScore(curr_str)] == 1)
			indexing[returnScore(curr_str)] = 0;
	}
	for (int doc : queries) {
		if (indexing[doc] == 0)
		{
			final.push_back("Yes");
		}
		else {
			final.push_back("No");
		}
	}
	return final;
}

//int main()
//{
//	string s = "abbcccdddd";
//	//vector<int> data = { 5,9,7,8,12,5 };
//	vector<int> data = { 1,7,5,4,15 };
//
//	vector<string> ans = weightedUniformStrings(s, data);
//	for (string doc : ans)
//		cout << doc << endl;
//	return 0;
//}