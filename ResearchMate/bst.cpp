//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class BST {
//    class Node {
//    public:
//        int id;
//        string title;
//        Node* left;
//        Node* right;
//
//        Node(int paperID, string paperTitle) {
//            id = paperID;
//            title = paperTitle;
//            left = NULL;
//            right = NULL;
//        }
//    };
//
//    Node* root;
//
//    Node* insertNode(Node* p, int id, string title) {
//        if (p == NULL) {
//            return new Node(id, title);
//        }
//
//        if (id < p->id) {
//            p->left = insertNode(p->left, id, title);
//        }
//        else if (id > p->id) {
//            p->right = insertNode(p->right, id, title);
//        }
//
//        return p;
//    }
//
//    Node* searchNode(Node* p, int id) {
//        if (p == NULL || p->id == id) {
//            return p;
//        }
//
//        if (id < p->id) {
//            return searchNode(p->left, id);
//        }
//
//        return searchNode(p->right, id);
//    }
//
//    Node* findMin(Node* p) {
//        while (p != NULL && p->left != NULL) {
//            p = p->left;
//        }
//
//        return p;
//    }
//
//    Node* findMax(Node* p) {
//        while (p != NULL && p->right != NULL) {
//            p = p->right;
//        }
//
//        return p;
//    }
//
//    Node* deleteNode(Node* p, int id) {
//        if (p == NULL) {
//            return NULL;
//        }
//
//        if (id < p->id) {
//            p->left = deleteNode(p->left, id);
//        }
//        else if (id > p->id) {
//            p->right = deleteNode(p->right, id);
//        }
//        else {
//            // Case 1: Node has no child
//            if (p->left == NULL && p->right == NULL) {
//                delete p;
//                return NULL;
//            }
//
//            // Case 2: Node has only one child
//            else if (p->left == NULL) {
//                Node* temp = p->right;
//                delete p;
//                return temp;
//            }
//            else if (p->right == NULL) {
//                Node* temp = p->left;
//                delete p;
//                return temp;
//            }
//
//            // Case 3: Node has two children
//            Node* temp = findMin(p->right);
//
//            p->id = temp->id;
//            p->title = temp->title;
//
//            p->right = deleteNode(p->right, temp->id);
//        }
//
//        return p;
//    }
//
//    void inorder(Node* p) {
//        if (p == NULL) {
//            return;
//        }
//
//        inorder(p->left);
//        cout << p->id << " - " << p->title << endl;
//        inorder(p->right);
//    }
//
//    void preorder(Node* p) {
//        if (p == NULL) {
//            return;
//        }
//
//        cout << p->id << " - " << p->title << endl;
//        preorder(p->left);
//        preorder(p->right);
//    }
//
//    void postorder(Node* p) {
//        if (p == NULL) {
//            return;
//        }
//
//        postorder(p->left);
//        postorder(p->right);
//        cout << p->id << " - " << p->title << endl;
//    }
//
//    void clearTree(Node* p) {
//        if (p == NULL) {
//            return;
//        }
//
//        clearTree(p->left);
//        clearTree(p->right);
//        delete p;
//    }
//
//public:
//    BST() {
//        root = NULL;
//    }
//
//    ~BST() {
//        clearTree(root);
//    }
//
//    void insert(int id, string title) {
//        if (searchNode(root, id) != NULL) {
//            cout << "Paper ID already exists!" << endl;
//            return;
//        }
//
//        root = insertNode(root, id, title);
//        cout << "Paper inserted successfully." << endl;
//    }
//
//    void search(int id) {
//        Node* result = searchNode(root, id);
//
//        if (result == NULL) {
//            cout << "Paper Not Found." << endl;
//        }
//        else {
//            cout << "Paper Found: " << result->title << endl;
//        }
//    }
//
//    void deletePaper(int id) {
//        if (searchNode(root, id) == NULL) {
//            cout << "Paper Not Found." << endl;
//            return;
//        }
//
//        root = deleteNode(root, id);
//        cout << "Paper deleted successfully." << endl;
//    }
//
//    void displayInorder() {
//        cout << "\nPapers in Sorted Order:\n";
//        inorder(root);
//    }
//
//    void displayPreorder() {
//        cout << "\nPreorder Traversal:\n";
//        preorder(root);
//    }
//
//    void displayPostorder() {
//        cout << "\nPostorder Traversal:\n";
//        postorder(root);
//    }
//
//    void displayMin() {
//        Node* p = findMin(root);
//
//        if (p == NULL) {
//            cout << "Tree is empty." << endl;
//        }
//        else {
//            cout << "Smallest Paper ID: " << p->id
//                << " - " << p->title << endl;
//        }
//    }
//
//    void displayMax() {
//        Node* p = findMax(root);
//
//        if (p == NULL) {
//            cout << "Tree is empty." << endl;
//        }
//        else {
//            cout << "Largest Paper ID: " << p->id
//                << " - " << p->title << endl;
//        }
//    }
//};
