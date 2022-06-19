#pragma once

#include "bst.h"
#include "rbt.h"

// myset based on BST
class MySet : public BST {
  size_t size;
public:
  MySet () { size = 0; }
  void Insert(int data);
  void Erase(int data);
  
  bool Find(int data);
  size_t Size();
};

// myset based on RBT
// class MySet : public RBT {
//  size_t size;
// public:
//   MySet () { size = 0; }
//   void Insert(int data);
//   void Erase(int data);
  
//   bool Find(int data);
//   size_t Size();
// };
