#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<list>
using namespace std;

list<int> L;

void insert(int v) {
  L.push_front(v);
}

void deleteValue(int v) {
  for (auto itr = L.begin(); itr != L.end();itr++) {
    if (*itr == v) {
      L.erase(itr);
      break;
    }
  }
}

void deleteFirst() {
  L.pop_front();
}

void deleteLast() {
  L.pop_back();
}

int main() {
  int n;

  scanf("%d", &n);
  for (int i = 0; i < n;i++) {
    char command[30];
    int value;
    scanf("%s", command);

    if (command[0] == 'i') {
      scanf("%d", &value);
      insert(value);
    }
    else if (command[6] == 'F')
    {
      deleteFirst();
    }
    else if (command[6] == 'L')
    {
      deleteLast();
    }
    else if (command[0] == 'd')
    {
      scanf("%d", &value);
      deleteValue(value);
    }
  }

  int ifs = 0;
  for (auto itr = L.begin(); itr != L.end(); itr++)
  {
    if (ifs > 0) {
      printf(" ");
    }
    ifs++;
    printf("%d", *itr);
  }
  printf("\n");
}