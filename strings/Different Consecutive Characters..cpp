#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
	    int N;
	    string s;
	    cin >> N >> s;

	    int operations = 0;

	    for (int i = 1; i < N; i++) {
	        if (s[i] == s[i - 1]) {
	            operations++;
	        }
	    }

	    cout << operations << endl;
	}
	return 0;
}
