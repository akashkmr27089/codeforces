#include<iostream>
#include<set>
#include<vector>
#include<map>

using namespace std;
bool ifAlternative(string s) {
    if (s.size() < 2) return false;
    char one, two;
    bool flag = true;
    bool result = false;
    for (int i = 0; i < s.size(); i++) {
        if (flag) {
            one = s[0];
            flag = false;
        }
        else if (i == 1) {
            if (s[i] != one) {
                two = s[i];
                result = true;
            }
            else {
                return false;
            }
        }
        else {
            if ((i % 2 == 0 && s[i] == one) || (i % 2 != 0 && s[i] == two)) {
                continue;
            }
            else {
                result = false;
                break;
            }
        }
    }
    return result;
}

vector<char>doc = {};
vector<char> curr_data = {};
vector<vector<char>> finalData = {};

void go(int offset, int k) {
    if (k == 0) {
        finalData.push_back(curr_data);
    }
    else {
        for (int i = offset; i <= doc.size() - k; i++) {
            curr_data.push_back(doc[i]);
            go(i + 1, k - 1);
            curr_data.pop_back();
        }
    }
}

void generateCombination(set<char>s, int size) {
    doc.insert(doc.begin(), begin(s), end(s));
    go(0, size);
}

string removeChar(string nop, vector<char>& vec) {
    map<char, int> tempData;
    string finalString = "";
    for (char i : vec) tempData[i] = 1;
    for (char i : nop) {
        if (tempData[i] == 1) continue;
        else finalString += i;
    }
    return finalString;
}

int alternate(string s) {
    set<char> a = {};
    int max = INT_MIN;
    for (int i = 0; i < s.size(); i++) a.insert(s[i]);
    int docTemp = a.size();
    if (docTemp - 2 > 0) {
        generateCombination(a, a.size() - 2);
        // finalData will contains all the value 
        for (vector<char> data : finalData) {
            string temp = removeChar(s, data);
            if (ifAlternative(temp)) {
                int test = temp.size();
                if (test > max) {
                    max = temp.size();
                }
            }
        }
        if (max == INT_MIN) return 0;
        return max;
    }
    else if (a.size() - 2 == 0) {
        if (ifAlternative(s)) return s.size();
    }
    else {
        return 0;
    }
    return 0;
}


//int main()
//{
//    cout << alternate("abcdererr") << endl;
//	return 0;
//}





/*
Simple Solution : 

def validate(cpy):
    for i in range(len(cpy)-1):
        if cpy[i] == cpy[i+1]:
            return False
    return True

for _ in range(int(input().strip())):
    s = input().strip()
    st = list(set(s))
    max_len = 0
    for x in range(len(st)):
        for y in range(x+1, len(st)):
            cpy = [c for c in s if c==st[x] or c==st[y]]
            if validate(cpy):
                max_len = max(max_len, len(cpy))
    print(max_len)

*/