#include<iostream>
#include<stack>
#include<cstdlib>
using namespace std;

int main() {
  stack<int> S;
  int a, b;
  char s[30];
  while (scanf("%s", s) != EOF) {
    if (s[0] == '+') {
      a = S.top();
      S.pop();
      b = S.top();
      S.pop();
      S.push(a + b);
    } else if (s[0] == '-') {
      a = S.top();
      S.pop();
      b = S.top();
      S.pop();
      S.push(b - a);
    } else if (s[0] == '*') {
      a = S.top();
      S.pop();
      b = S.top();
      S.pop();
      S.push(a * b);
    } else {
      S.push(stoi(s));
    }
    if(getchar() == '\n') {
      cout << S.top() << endl;
      return 0;
    }
  }
}