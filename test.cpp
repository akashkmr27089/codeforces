#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, x, y;
	cin >> n;
	bool flag = false;
	rep(i, n) {
		cin >> x >> y;
		if (x<y) flag = true;
	}
	if (flag) cout << "Happy Alex";
	else cout << "Poor Alex";
	cout << '\n';
	return 0;
}