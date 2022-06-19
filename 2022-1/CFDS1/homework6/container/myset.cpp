#include "myset.h"
#include <stack>
using namespace std;

void MySet::Insert(int data) {
  // TODO: insert 'data' into set
  if (!MySet::Find(data)) {
    BST::Insert(data);
    // RBT::Insert(data);
    size++;
  }
}

void MySet::Erase(int data) {
  // TODO: erase 'data' from set
  if (MySet::Find(data)) {
    Node * target = Search(GetRoot(), data);
    Delete(target);
    size--;
  }
}

bool MySet::Find(int data) {
  // TODO: return true if 'data' exists in the set
  // under BST
  if (Search(GetRoot(), data) != NULL) {
    return true;
  }
  return false;

  // // under RBT  
  // if (Search(GetRoot(), data)->key == data) {
  //   return true;
  // }
  // return false;
}

size_t MySet::Size() {
  // TODO: return number of elements in the set
  return size;
}
