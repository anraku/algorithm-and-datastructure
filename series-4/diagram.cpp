#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	stack<int> st1;
	stack<pair<int, int>> st2;
	string input;
	cin >> input;
	int sum = 0;
	for (int i=0; i<input.size();i++) {
		if (input[i] == '\\') {
			st1.push(i);
		} else if (st1.size() > 0 && input[i] == '/') {
			int j = st1.top(); st1.pop();
			sum += i-j;
			int a = i-j;	
			while (st2.size() > 0 && st2.top().first > j) {
				a += st2.top().second; st2.pop();
			}
			st2.push(pair<int, int>(j, a));
		}
	}

	vector<int> ans;
	while(st2.size() > 0) {
		ans.insert(ans.begin(), st2.top().second); st2.pop();
	}
	cout << sum << endl;
	cout << ans.size();
	for (int i = 0;i < ans.size(); i++){
		cout << ' ';
		cout << ans[i];
	}
	cout << endl;
}

