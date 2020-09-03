#include <bits/stdc++.h>

using namespace std;

void test_case() {
	bool p[30];
	for(int i = 0; i < 30; ++i) {
		cin >> p[i];
	}
	int cnt = 1, ans = 0;
	for(int i = 0; i < 30; ++i) {
		if(p[i] && p[i+1]) {
			cnt++;
		} else cnt = 1;
		ans = max(ans, cnt);
	}
	if(ans > 5) cout << "#coderlifematters";
	else cout << "#allcodersarefun";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for (int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
