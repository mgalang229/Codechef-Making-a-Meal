#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		for (int i = 0; i < n; i++) {
			string tmp;
			cin >> tmp;
			s += tmp;
		}
		int n1 = count(s.begin(), s.end(), 'c');
		int n2 = count(s.begin(), s.end(), 'o');
		int n3 = count(s.begin(), s.end(), 'd');
		int n4 = count(s.begin(), s.end(), 'e');
		int n5 = count(s.begin(), s.end(), 'h');
		int n6 = count(s.begin(), s.end(), 'f');
		cout << min({n1 / 2, n2, n3, n4 / 2, n5, n6}) << '\n';
	}
	return 0;
}
