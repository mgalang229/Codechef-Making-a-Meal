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
		multiset<char> set;
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			for (char a : s) {
				if (a == 'c') {
					set.insert('c');
				} else if (a == 'o') {
					set.insert('o');
				} else if (a == 'd') {
					set.insert('d');
				} else if (a == 'e') {
					set.insert('e');
				} else if (a == 'h') {
					set.insert('h');
				} else if (a == 'f') {
					set.insert('f');
				}
			}
		}
		int n1 = set.count('c');
		int n2 = set.count('o');
		int n3 = set.count('d');
		int n4 = set.count('e');
		int n5 = set.count('h');
		int n6 = set.count('f');
		if (n1 >= 2 && n2 >= 1 && n3 >= 1 && n4 >= 2 && n5 >= 1 && n6 >= 1) {
			cout << min({n1 / 2, n2, n3, n4 / 2, n5, n6});
		} else {
			cout << 0;
		}
		cout << '\n';
	}
	return 0;
}
