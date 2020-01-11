#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

struct Node {
  int key;
  Node *prev, *next;
};

Node *nil;

void init() {
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

void insert(int key) {
  Node *x = (Node *)malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

void deleteNode(Node *t) {
  if(t == nil)
    return;
  t->next->prev = t->prev;
  t->prev->next = t->next;
  free(t);
}

void deleteFirst() {
  deleteNode(nil->next);
}

void deleteLast() {
  deleteNode(nil->prev);
}

Node* listSearch(int key){
  Node *search = nil->next;
  while (search != nil && search->key != key) {
    search = search->next;
  }
  return search;
}

void printNode() {
  Node *iter = nil->next;
  int isf = 0;
  while (true) {
    if (iter == nil)
    {
      break;
    }
    if (isf++ > 0)
      printf(" ");
    printf("%d", iter->key);
    iter = iter->next;
  }
  printf("\n");
}

int main()
{
  init();
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n;i++) {
    char command[30];
    int value;
    scanf("%s%d", command, &value);
    if (!strcmp(command, "insert"))
    {
      insert(value);
    } else if (!strcmp(command, "delete")) {
      Node *node = listSearch(value);
      deleteNode(node);
    }
    else if (!strcmp(command, "deleteFirst")) {
      deleteFirst();
    }
    else if (!strcmp(command, "deleteLast"))
    {
      deleteLast();
    }
  }
  printNode();
}