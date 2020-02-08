#include<bits/stdc++.h>
using namespace std;

int n;
int h1(int key) {
	return key%n;
}

int h2(int key) {
	return 1 + (key%(n-1));
}

int h(int key, int i) {
	return (h1(key) + i*h2(key)) % n;
}

int getChar(char c) { 
	if (c == 'A') return 1;
	else if (c == 'C') return 2;
	else if (c == 'G') return 3;
	else if (c == 'T') return 4;
	else return 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	vector<string> arr(n, "");
	string command;
	string value;
	for (int i=0;i<n;i++){
		cin >> command >> value;
		if (command == "insert"){
			cout << "bp1" << endl;
			int key;
			for (int j=0;j<value.size();j++){ 
				key += getChar(value[j]);
			}
			cout << "bp2" << endl;
			for (int j=0;;j++){
				int hash = h(key, j);
				cout << "hash: " << hash << endl;
				if (arr[hash] == value){
					arr[hash] = value;
				}
			}
			cout << "bp3" << endl;
		} else if (command == "find") {
			int key;
			for (int j=0;j<value.size();j++){ 
				key += getChar(value[j]);
			}
			cout << "bp4" << endl;
			int j;
			for (j=0; j<n;j++){
				int hash = h(key, j);
				if (arr[hash] == value){
					cout << "yes" << endl;
				}
			}
			cout << "bp5" << endl;
			if (j >= n)
				cout << "no" << endl;
		}
	}	
}
