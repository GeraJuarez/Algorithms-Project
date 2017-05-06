#ifndef __RBTREE_H_INCLUDED__
#define __RBTREE_H_INCLUDED__

#include <iostream>
using namespace std;

const bool RED = 0;
const bool BLACK = 1;
//char RED = 'r';
//char BLACK = 'b';

template <class T>
struct rbnode{
  int key;
  T *value;
  rbnode<T> *p;
  rbnode<T> *left;
  rbnode<T> *right;
  bool color; //1 is black, 0 is red
  //char color; //b is black, r is red
  rbnode(int k) {
    key = k;
    value = NULL;
    left = right = p = NULL;
    color = RED;
  }
  rbnode(int k, T *value) {
    key = k;
    value = value;
    left = right = p = NULL;
    color = RED;
  }
  rbnode() {
    left = right = p = NULL;
    value = NULL;
    color = BLACK;
  }
};

template <class T>
class RedBlackTree{
private:
  int size;
  rbnode<T> *root;
  rbnode<T> *nil;
public:
  RedBlackTree(){
    this->size = 0;
    this->nil = new rbnode<T>();
    this->nil->color = BLACK;
    this->root = this->nil;
    this->nil->p = this->nil;
  }
  int get_size(){
    return this->size;
  }
  void print_inorder_inverse(){
    print_inorder_inverse(this->root, 1);
  }
  void print_inorder_inverse(rbnode<T> *node, int mult){
    if(node->right != NULL){
      print_inorder_inverse(node->right, mult+1);
    }
    for(int i = 1; i < mult; i++){
      cout << "\t";
    }
    cout << "[" << node->key << ", ";
    if(node->color){
      cout << "B";
    }
    else cout << "R";
    cout << "]" << endl;
    if(node->left != NULL){
      print_inorder_inverse(node->left, mult+1);
    }
  }

  rbnode<T> *get(int key){
    rbnode<T> *temp = this->root;
    while(temp->key != key && temp != this->nil){
      if(temp->key > key){
        temp = temp->left;
      }
      else{
        temp = temp->right;
      }
    }
    return temp;
  }

  T *get_value(int key){
    rbnode<T> *temp = this->root;
    while(temp->key != key && temp != this->nil){
      if(temp->key > key){
        temp = temp->left;
      }
      else{
        temp = temp->right;
      }
    }
    return temp->value;
  }

  void insert(int key){
    rbnode<T> *z = new rbnode<T>(key);
    rbnode<T> *y = this->nil;
    rbnode<T> *x = this->root;

    while(x != this->nil){
      y = x;
      if(z->key < x->key)
        x = x->left;
      else
        x = x->right;
    }
    z->p = y;
    if(y == this->nil){
      this->root = z;
    }
    else if(z->key < y->key)
      y->left = z;
    else
      y->right = z;
    z->left = this->nil;
    z->right = this->nil;
    z->color = RED;

    this->size++;

    rb_insert_fixup(z);
  }

  void left_rotate(rbnode<T> *x){
    rbnode<T> *y = x->right;
    x->right = y->left;
    if(y->left != this->nil){
      y->left->p = x;
    }
    y->p = x->p;
    if(x->p == this->nil){
      this->root = y;
    }
    else if(x == x->p->left){
      x->p->left = y;
    }
    else{
      x->p->right = y;
    }
    y->left = x;
    x->p = y;
  }

  void right_rotate(rbnode<T> *x){
    rbnode<T> *y = x->left;
    x->left = y->right;
    if(y->right != this->nil){
      y->right->p = x;
    }
    y->p = x->p;
    if(x->p == this->nil){
      this->root = y;
    }
    else if(x == x->p->right){
      x->p->right = y;
    }
    else{
      x->p->left = y;
    }
    y->right = x;
    x->p = y;
  }

  void rb_insert_fixup(rbnode<T> *z){
    rbnode<T> *y;
    while(z->p->color == RED){
      if(z->p == z->p->p->left) {
        y = z->p->p->right;
        if(y->color == RED) {
          z->p->color = BLACK;
          y->color = BLACK;
          z->p->p->color = RED;
          z = z->p->p;
        }
        else {
          if(z == z->p->right) {
            z = z->p;
            left_rotate(z);
          }
          z->p->color = BLACK;
          z->p->p->color = RED;
          right_rotate(z->p->p);
        }
      }
      else {
        y = z->p->p->left;
        if(y->color == RED) {
          z->p->color = BLACK;
          y->color = BLACK;
          z->p->p->color = RED;
          z = z->p->p;
        }
        else {
          if(z == z->p->left) {
            z = z->p;
            right_rotate(z);
          }
          z->p->color = BLACK;
          z->p->p->color = RED;
          left_rotate(z->p->p);
        }
      }
    }
    this->root->color = BLACK;
  }

  void rb_transplant(rbnode<T> *u, rbnode<T> *v){
    if(u->p == this->nil){
      this->root = v;
    }
    else if(u == u->p->left){
      u->p->left = v;
    }
    else{
      u->p->right = v;
    }
    v->p = u->p;
  }

  rbnode<T> * tree_minimum(rbnode<T> *node){
    rbnode<T> *min = node;
    while(min->left != this->nil){
      min = min->left;
    }
    return min;
  }

  void rb_delete_fixup(rbnode<T> *x){
    rbnode<T> *w;
    while(x != this->root && x->color == BLACK){
      if(x == x->p->left){
        w = x->p->right;
        if(w->color == RED){
          w->color = BLACK;
          x->p->color = RED;
          left_rotate(x->p);
          w = x->p->right;
        }
        if(w->left->color == BLACK && w->right->color == BLACK){
          w->color = RED;
          x = x->p;
        }
        else{
          if(w->right->color == BLACK){
            w->left->color = BLACK;
            w->color = RED;
            right_rotate(w);
            w = x->p->right;
          }
          w->color = x->p->color;
          x->p->color = BLACK;
          w->right->color = BLACK;
          left_rotate(x->p);
          x = this->root;
        }
      }
      else{
        if(x == x->p->right){
          w = x->p->left;
          if(w->color == RED){
            w->color = BLACK;
            x->p->color = RED;
            right_rotate(x->p);
            w = x->p->left;
          }
          if(w->right->color == BLACK && w->left->color == BLACK){
            w->color = RED;
            x = x->p;
          }
          else{
            if(w->left->color == BLACK){
              w->right->color = BLACK;
              w->color = RED;
              left_rotate(w);
              w = x->p->left;
            }
            w->color = x->p->color;
            x->p->color = BLACK;
            w->left->color = BLACK;
            right_rotate(x->p);
            x = this->root;
          }
        }
      }
    }
    x->color = BLACK;
  }

  void rb_delete(rbnode<T> *z){
    rbnode<T> *x;
    rbnode<T> *y = z;
    bool y_original_color = y->color;
    if(z->left == this->nil){
      x = z->right;
      rb_transplant(z, z->right);
    }
    else if(z->right == this->nil){
      x = z->left;
      rb_transplant(z, z->left);
    }
    else{
      y = tree_minimum(z->right);
      y_original_color = y->color;
      x = y->right;
      if(y->p == z){
        x->p = y;
      }
      else{
        rb_transplant(y, y->right);
        y->right = z->right;
        y->right->p = y;
      }
      rb_transplant(z, y);
      y->left = z->left;
      y->left->p = y;
      y->color = z->color;
    }
    if(y_original_color == BLACK){
      rb_delete_fixup(x);
    }
  }

  rbnode<T> * get_it(rbnode<T> **nil){
    *nil = this->nil;
    return this->root;
  }
};

#endif
