#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	list<long> l;
	cin >> n;
	for (int i = 0; i<n; i++) {
		string command;
		int value;
		cin >> command;
		if (command == "insert" || command == "delete")
			cin >> value;
		if (command == "deleteFirst") {
			l.pop_front();
		} else if (command == "deleteLast")	{
			l.pop_back();
		} else if (command == "insert") {
			l.push_front(value);
		} else if (command == "delete") {
			list<long>::iterator itr;
			bool found = false;
			for (itr = l.begin();itr != l.end(); itr++) {
				if (*itr == value) {
					found = true;
					break;
				}
			}
			if (found)
				l.erase(itr);
		}
	}

	int count = 0;
	for (auto itr = l.begin();itr != l.end();itr++) {
		if (count != 0)
			cout << " ";
		cout << *itr;
		count++;
	}
	cout << endl;
}

