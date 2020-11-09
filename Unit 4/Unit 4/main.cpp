//
//  main.cpp
//  Unit 4
//
//  Created by Xavier Greer on 8/20/20.
//  Copyright © 2020 Xavier Greer. All rights reserved.
//

#include <iostream>
using namespace std;

//---Submission 1---

//struct node {
//    int data;
//    struct node* left, *right;
//};
//
//struct node* newNode(int idata) {
//    struct node* node = new struct node;
//    node->data = idata;
//    node->left = NULL;
//    node->right = NULL;
//    return node;
//};
//
//int main(int argc, const char * argv[]) {
//    struct node *root = newNode(3);
//    root->left = newNode(2);
//    root->right = newNode(4);
//    root->right->right = newNode(6);
//    root->right->right->right = newNode(10);
//    root->right->right->left = newNode(5);
//    cout<<root->data<<"-"<<root->right->data<<"-"<<root->right->right->data<<"-"<<root->right->right->right->data<<"\n";
//
//    return 0;
//}

//---Submission 2---

struct node {
    int data;
    struct node* left, *right;
};

struct node* newNode(int idata) {
    struct node* node = new struct node;
    node->data = idata;
    node->left = NULL;
    node->right = NULL;
    return node;
    
};

void printInOrder(struct node* node) {
    if(node == NULL)
        return;
    
    printInOrder(node->left);
    cout << node->data << " ";
    printInOrder(node->right);
    
};

void printPreOrder(struct node* node) {
    if(node == NULL)
        return;
    
    cout << node->data << " ";
    printPreOrder(node->left);
    printPreOrder(node->right);
    
};

void printPostOrder(struct node* node) {
    if(node == NULL)
        return;
    
    printPostOrder(node->left);
    printPostOrder(node->right);
    cout << node->data << " ";
   
};

int main(int argc, const char * argv[]) {
    struct node *root = newNode(100);
    root->left = newNode(60);
    root->right = newNode(110);
    root->left->left = newNode(50);
    root->left->right = newNode(67);
    root->right->right = newNode(111);
    root->right->left = newNode(109);
    
    cout << "The InOrder printed is: \t";
    printInOrder(root);
    cout << "\n";
    
    cout << "The PreOrder printed is: \t";
    printPreOrder(root);
    cout << "\n";
    
    cout << "The PostOrder printed is: \t";
    printPostOrder(root);
    cout << "\n";
    return 0;
}
