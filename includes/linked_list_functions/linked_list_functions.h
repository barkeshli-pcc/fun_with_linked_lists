#ifndef BARKESHLI__LINKED_LIST_FUNCTIONS_H__
#define BARKESHLI__LINKED_LIST_FUNCTIONS_H__

#include <iostream>
#include <iomanip>
#include "../node/node.h"
using namespace std;
template <typename T>
node<T> *insert_head(node<T> *&head_ptr, const T &item);
template<typename T>
void print_list(node<T> *head_ptr);


template <typename T>
node<T> *insert_head(node<T> *&head_ptr, const T &item){
  //1. create a new crate
  node<T> *temp = new node<T>(item);
  // 2. point him to where headptr is pointing to.
  temp->_next = head_ptr;
  // 3. point headptr to this new guy
  head_ptr = temp;
  return head_ptr;
}
template<typename T>
void print_list(node<T> *head_ptr){
  node<T> *walker = head_ptr;
  while (walker!=nullptr){
    //if you are here, walker is not nullptr:
    cout << *walker;
    walker = walker->_next;
  }
  cout << "|||" << endl;
}

#endif // BARKESHLI__LINKED_LIST_FUNCTIONS_H__
