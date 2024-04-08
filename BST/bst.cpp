#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};
//*****************************************************************
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {

            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }

    return;
}
//*****************************************************************
Node *insertInBST(Node *root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertInBST(root->right, d);
    }
    else
    {
        root->left = insertInBST(root->left, d);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertInBST(root, data);
        cin >> data;
    }
}
//*****************************************************************
Node *inorderSuccesor(Node *root, int val)
{
    Node *succesor = NULL;
    while (root != NULL)
    {
        if (root->data > val)
        {
            succesor = root;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return succesor;
}
//*****************************************************************
Node *inorderpredecessor(Node *root, int val)
{
    Node *predecessor = NULL;
    while (root != NULL)
    {
        if (root->data < val)
        {
            predecessor = root;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return predecessor;
}
//*****************************************************************
void inorderprint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout << root->data << " ";
    inorderprint(root->right);
}
//*****************************************************************
void MorrisTraversal(Node *root)
{
    Node *curr = root;
    Node *pre;
    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            cout << curr->data << " ";
            curr = curr->right;
        }
        else
        {
            pre = curr->left;
            while (pre->right != NULL && pre->right != curr)
            {
                pre = pre->right;
            }
            if (pre->right == NULL)
            {
                pre->right = curr;
                curr = curr->left;
            }
            else
            {
                pre->right = NULL;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}
//****************************************************************************
//S.C->O(H)
//T.C->O(nodes)
void lessSpace(Node *root)
{
    stack<Node *> q;
    while (root != NULL)
    {
        q.push(root);
        root = root->left;
    }
    while (!q.empty())
    {
        Node *front = q.top();
        q.pop();
        cout << front->data << " ";
        if (front->right != NULL)
        {
            Node *temp = front->right;
            while (temp != NULL)
            {
                q.push(temp);
                temp = temp->left;
            }
        }
    }
}
//**************************************************
int main()
{
    Node *root;
    root = NULL;
    cout << "Inset data to enter in BST" << endl;
    takeInput(root);
    cout << "Printing the BST" << endl;
    // levelOrderTraversal(root);
    // Node* ans=inorderSuccesor(root,4);
    // cout<<ans->data<<endl;
    // Node* fax=inorderpredecessor(root,4);
    // cout<<fax->data<<endl;
    // inorderprint(root);
    // cout<<endl;
    // MorrisTraversal(root);
    lessSpace(root);
    return 0;
}