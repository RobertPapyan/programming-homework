#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits.h>
using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* parent;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val, TreeNode* p = nullptr, TreeNode* l = nullptr, TreeNode* r = nullptr)
        : value(val), parent(p), left(l), right(r) {}
};

class BTree {
private:
    TreeNode* root;
    vector<vector<int>> matrix;

    int findDepth(TreeNode* currentNode, int depth = 0) {
        if (!currentNode) {
            return depth - 1;
        }
        if (!currentNode->left && !currentNode->right) {
            return depth;
        }
        return max(findDepth(currentNode->left, depth + 1), findDepth(currentNode->right, depth + 1));
    }

    void renderTreeMatrix(TreeNode* currentNode, int currentIndex = 0, int currentDepth = 0) {
        if (currentNode == root) {
            matrix = vector<vector<int>>(findDepth(root) + 1);
        }
        matrix[currentDepth].push_back(currentNode ? currentNode->value : 0);
        if (!(currentNode->right || currentNode->left)) {
            return;
        }
        if (currentNode->left) {
            renderTreeMatrix(currentNode->left, 2 * currentIndex, currentDepth + 1);
        }
        if (currentNode->right) {
            renderTreeMatrix(currentNode->right, 2 * currentIndex + 1, currentDepth + 1);
        }
    }

    string padStart(string str, int targetLength, char padChar = ' ') {
        if (str.length() >= targetLength) {
            return str;
        }
        int padding = targetLength - str.length();
        return string(padding, padChar) + str;
    }

public:
    BTree(int rootValue = 0) : root(nullptr) {
        if (rootValue != 0) {
            root = new TreeNode(rootValue);
        }
    }

    void insertNode(int newValue) {
        if (!root) {
            root = new TreeNode(newValue);
            return;
        }
        TreeNode* currentNode = root;
        while (true) {
            if (currentNode->value < newValue) {
                if (!currentNode->right) {
                    currentNode->right = new TreeNode(newValue, currentNode);
                    return;
                }
                currentNode = currentNode->right;
            } else if (currentNode->value > newValue) {
                if (!currentNode->left) {
                    currentNode->left = new TreeNode(newValue, currentNode);
                    return;
                }
                currentNode = currentNode->left;
            } else {
                cout << "Value exists" << endl;
                return;
            }
        }
    }

    void deleteNode(int nodeValue) {
        if (!root) {
            cout << "Tree is empty!" << endl;
            return;
        }
        TreeNode* currentNode = root;
        while (true) {
            if (currentNode->value == nodeValue) {
                while (currentNode->right || currentNode->left) {
                    if (currentNode->right) {
                        int temp = currentNode->right->value;
                        currentNode->right->value = currentNode->value;
                        currentNode->value = temp;
                        currentNode = currentNode->right;
                    } else if (currentNode->left) {
                        int temp = currentNode->left->value;
                        currentNode->left->value = currentNode->value;
                        currentNode->value = temp;
                        currentNode = currentNode->left;
                    }
                }
                if (currentNode->parent && currentNode->parent->right == currentNode) {
                    currentNode->parent->right = nullptr;
                } else if (currentNode->parent && currentNode->parent->left == currentNode) {
                    currentNode->parent->left = nullptr;
                }
                delete currentNode;
                return;
            }
            if (nodeValue > currentNode->value) {
                if (currentNode->right) {
                    currentNode = currentNode->right;
                } else {
                    cout << "Value not found" << endl;
                    return;
                }
            } else {
                if (currentNode->left) {
                    currentNode = currentNode->left;
                } else {
                    cout << "Value not found" << endl;
                    return;
                }
            }
        }
    }

    void printTree() {
    renderTreeMatrix(root);
    int depth = findDepth(root) + 1;
    vector<string> strMatrix;  // To hold the strings for each row

    // Iterate over each row in the matrix
    for (int i = 0; i < matrix.size(); ++i) {
        // Calculate the required number of spaces
        int padding = depth * 2 - i + 1;

        // Create the string for the current row
        string rowString = string(padding, ' '); // Leading spaces
        for (int j = 0; j < matrix[i].size(); ++j) {
            rowString += to_string(matrix[i][j]); // Add the element to the row string
            if (j != matrix[i].size() - 1) {
                rowString += " "; // Add space between elements
            }
        }

        // Add the row string to the strMatrix
        strMatrix.push_back(rowString);
    }

    // Print each row in strMatrix
    for (const string& row : strMatrix) {
        cout << row << endl;
    }
}

    int findMin(TreeNode* currentNode = nullptr) {
        if (!currentNode) {
            currentNode = root;
        }
        if (!currentNode) {
            cout << "Tree is empty" << endl;
            return INT_MIN;
        }
        while (currentNode->left) {
            currentNode = currentNode->left;
        }
        return currentNode->value;
    }

    int findMax(TreeNode* currentNode = nullptr) {
        if (!currentNode) {
            currentNode = root;
        }
        if (!currentNode) {
            cout << "Tree is empty" << endl;
            return INT_MAX;
        }
        while (currentNode->right) {
            currentNode = currentNode->right;
        }
        return currentNode->value;
    }
};

int main() {
    BTree btree;
    int choice, value;

    while (true) {
        cout << "\nChoose an option:" << endl;
        cout << "1) Insert Node" << endl;
        cout << "2) Delete Node" << endl;
        cout << "3) Find Minimum" << endl;
        cout << "4) Find Maximum" << endl;
        cout << "5) Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                btree.insertNode(value);
                cout << "Updated Tree:" << endl;
                btree.printTree();
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                btree.deleteNode(value);
                cout << "Updated Tree:" << endl;
                btree.printTree();
                break;
            case 3:
                cout << "Minimum Value: " << btree.findMin() << endl;
                break;
            case 4:
                cout << "Maximum Value: " << btree.findMax() << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}
