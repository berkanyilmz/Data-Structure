//
// Created by berkan on 11.09.2021.
//

#include "BinaryTree.h"
#include <iostream>

using namespace std;

BinaryTree::BinaryTree()
{
    BinaryTree::root = nullptr;
}

bool BinaryTree::isEmpty()
{
    return BinaryTree::root == nullptr;
}

void BinaryTree::add(Node* node)
{
    if (isEmpty())
    {
        BinaryTree::root = node;
    }
    else
    {
        Node* temp = BinaryTree::root;
        Node* previous = nullptr;

        while (temp != nullptr)
        {
            previous = temp;
            if (node->number > temp->number)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        if (node->number > previous->number)
        {
            previous->right = node;
        }
        else
        {
            previous->left = node;
        }
    }
    cout << "Node added" << endl;
}

Node* BinaryTree::maximal(Node* node)
{
    if (isEmpty())
    {
        cout << "Binary Tree is empty" << endl;
        return nullptr;
    }
    else
    {
        Node *temp = node;

        while (temp->right != nullptr)
        {
            temp = temp->right;
        }
        return temp;
    }
}

Node* BinaryTree::minimum(Node *node)
{
    if (isEmpty())
    {
        cout << "Binary Tree is empty" << endl;
        return nullptr;
    }
    else
    {
        Node* temp = node;

        while (temp->left != nullptr)
        {
            temp = temp->left;
        }
        return temp;
    }
}

Node* BinaryTree::del(Node* root, int value)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    else if (root->number == value)
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }
        else if (root->left != nullptr)
        {
            root->number = maximal(root->left)->number;
            root->left = del(root->left, maximal(root->left)->number);
            return root;
        }
        else
        {
            root->number = minimum(root->right)->number;
            root->right = del(root->right, minimum(root->right)->number);
            return root;
        }
    }
    else if (value > root->number)
    {

        root->right = del(root->right, value);
        return root;
    }
    root->left = del(root->left, value);
    return root;
    }


void BinaryTree::show(Node* temp)
{
    if (!isEmpty())
    {
        if (temp->left != nullptr)
        {
            BinaryTree::show(temp->left);
        }
        cout << temp->number << " ";
        if (temp->right != nullptr)
        {
            BinaryTree::show(temp->right);
        }
    }
    else
    {
        cout << "Binary Tree is empty" << endl;
    }
}
