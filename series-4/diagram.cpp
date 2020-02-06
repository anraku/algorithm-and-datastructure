#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string input;
	cin >> input;

	// 水溜まりの始点と終点を求める
	int start;
	int depth = 0;
	vector<pair<int, int>> arr;
	for (int i=0;i<input.size();i++){
		if (input[i] == '\\') {
			depth++;
		} else if (input[i] == '/') {
			depth--;
		}
		if (depth == 0) {
			arr.push_back(pair<int, int>(start, i));
			for (;i<input.size();i++){
				if (input[i] == '\\'){
					start = i;
					i--;
					break;
				}
			}
		}
	}

	for (auto itr = arr.begin();itr != arr.end();itr++){
		pair<int, int> p = *itr;
		cout << p.first << " " << p.second << endl;
	}

	// 始点と終点のペアからそれぞれの水溜りの面積を求める
}

