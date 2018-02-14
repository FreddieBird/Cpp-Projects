#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node* next;
};

Node* head;

void Insert(int data) {
  Node* temp1 = new Node();
  temp1->data = data;
  temp1->next = NULL;

  if (head == NULL) {
    head = temp1;
    return;
  }

  Node* temp2 = head;
  while (temp2->next != NULL) {
    temp2 = temp2->next;
  }
  temp2->next = temp1;
  return;
}

void Print() {
  Node* temp = head;
  cout << "List is: ";

  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void reversePrint(Node* head) {
  Node* temp = head;

  if (temp == NULL) {
    return;
  }

  reversePrint(temp->next);
  cout << temp->data << " ";

}

void reverseIteratively() {
  Node* temp1 = head;
  Node* temp2;
  Node* prev = NULL;

  while (temp1 != NULL) {
    temp2 = temp1->next;
    temp1->next = prev;
    prev = temp1;
    temp1 = temp2;
  }

  head = prev;

}

void reverseRecursively(Node* temp1) {
  if (temp1->next == NULL) {
    head = temp1;
    return;
  }

  reverseRecursively(temp1->next);
  Node* temp2 = temp1->next;
  temp2->next = temp1;
  temp1->next = NULL;

}


void Delete(int n) {
  Node* temp1 = head;

  if (n == 1) {
    head = temp1->next;
    delete temp1;
  }

  for (int i = 0; i < n-2; i++) {
    temp1 = temp1->next;
  }
  Node* temp2 = temp1->next;
  temp1->next = temp2->next;
  delete temp2;
}


int main() {
  head = NULL;
  Insert(2);
  Insert(4);
  Insert(6);
  Insert(5);
  Print();
//  reverseIteratively();
  reverseRecursively(head);
  Print();
  // cout << "List printed in reverse order: ";
  // reversePrint(head);
  // cout << endl;
  // int n;
  // cout << "Enter a position: \n";
  // cin >> n;
  // Delete(n);
  // Print();
  // reversePrint(head);
  return 0;
}
