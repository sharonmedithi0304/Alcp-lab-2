#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int val;
    Node *left, *right;

    Node(int v) {
        val = v;
        left = right = NULL;
    }
};

Node* buildTree() {
    int x;
    cout << "Enter root: ";
    cin >> x;

    if (x == -1)
        return NULL;

    Node* root = new Node(x);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        cout << "Enter left child of " << curr->val << ": ";
        cin >> x;

        if (x != -1) {
            curr->left = new Node(x);
            q.push(curr->left);
        }

        cout << "Enter right child of " << curr->val << ": ";
        cin >> x;

        if (x != -1) {
            curr->right = new Node(x);
            q.push(curr->right);
        }
    }

    return root;
}

void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

void levelOrder(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        cout << curr->val << " ";

        if (curr->left)
            q.push(curr->left);

        if (curr->right)
            q.push(curr->right);
    }
}

int main() {
    Node* root = buildTree();

    cout << "\nPreorder: ";
    preorder(root);

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    cout << "\nLevel Order: ";
    levelOrder(root);

    return 0;
}
