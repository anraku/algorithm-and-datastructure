#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> s(n);
	for (int i=0;i<s.size();i++){ 
		cin >> s[i];
	}

	int q;
	cin >> q;
	vector<int> t(q);
	for (int i=0;i<t.size();i++){ 
		cin >> t[i];
	}

	vector<int> ans;
	for (int i=0;i<t.size();i++){
		int left = 0;
		int right = n;
		while (left < right) {
			int mid = (left+right) /2;
			if (t[i] < s[mid]) { 
				right = mid;
			} else if (t[i] > s[mid]) {
				left = mid+1;
			} else { 
				ans.push_back(s[mid]);
				break;
			}
		}
	}

	cout << ans.size() << endl;
}

