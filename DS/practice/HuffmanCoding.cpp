#include<iostream>
#include<cmath>

struct node {
    node *left;
    int index;
    int weight;
    std::string symbol;
    std::string bit;
    node *right;
};

void traverse(node *root, std::string bit, std::string *output) {
    if (root != nullptr) {
        root->bit = root->bit + bit;
        traverse(root->left, root->bit, output);
        traverse(root->right, root->bit, output);
        if ((root->left == nullptr) && (root->right == nullptr)) {
            output[root->index] = root->bit;
        }
    }
}

int main() {
    int i, j, k, flag, size;
    double totalWeight = 0.0, withoutEncoding = 0.0, withHuffcode = 0.0, savedSpace = 0.0;
    size = 6;
    std::string symbols[] = {"E", "A", "C", "D", "B", "F"};
    int weights[] = {1, 2, 3, 4, 5, 5};
    // int weights[] = {5, 5, 3, 4, 1, 4};
    // size = 11;
    // std::string symbols[] = {"S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "S10", "S11"};
    // int weights[] = {16, 12, 8, 8, 4, 4, 4, 4, 2, 1, 1};
    std::string *encoded = new std::string[size];
    node *arr[size], *tempNode;
    // finding total weight
    for (i = 0; i < size; i++) {
        totalWeight += double(weights[i]);
    }
    // inserting symbols and weights in the array
    for (i = 0; i < size; i++) {
        arr[i] = new node;
        arr[i]->left = nullptr;
        arr[i]->index = i;
        arr[i]->weight = weights[i];
        arr[i]->symbol = symbols[i];
        arr[i]->bit = "0";
        arr[i]->right = nullptr;
    }
    // forming the tree
    for (i = 0; i < (size - 1); i++) {
        // sorting the weights in ascending order (bubble sort)
        for (j = 0; j < (size - 1 - i); j++) {
            flag = 0;
            for(k = 0; k < ((size - 1 - i) - j); k++) {
                if(arr[k]->weight > arr[k + 1]->weight) {
                    tempNode = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = tempNode;
                    flag++;
                }
            }
            if(flag == 0) break;
        }
        // adding the two consecutive weights
        tempNode = new node;
        tempNode->left = arr[0];
        tempNode->weight = arr[0]->weight + arr[1]->weight;
        tempNode->right = arr[1];
        tempNode->left->bit = "0";
        tempNode->right->bit = "1";
        arr[0] = tempNode;
        for (j = 1; j < (size - 1 - i); j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1 - i] = nullptr;
    }
    // traverse
    traverse(arr[0], "", encoded);
    // displaying encoded bits
    for (i = 0; i < size; i++) {
        std::cout << symbols[i] << "\t";
    }
    std::cout << std::endl;
    for (i = 0; i < size; i++) {
        std::cout << encoded[i] << "\t";
    }
    std::cout << std::endl;
    // space measurements
    i = -1;
    while (1) {
        if (pow(2, ++i) > size) break;
    }
    withoutEncoding = totalWeight * i;
    std::cout << "Space without encoding = " << withoutEncoding << std::endl;
    for (i = 0; i < size; i++) {
        withHuffcode += (weights[i] * encoded[i].length());
    }
    std::cout << "Space using Huffman Coding = " << withHuffcode << std::endl;
    savedSpace = withoutEncoding - withHuffcode;
    std::cout << "Space saved = " << savedSpace << std::endl;
    std::cout << "Space saved (percentage) = " << (savedSpace / withoutEncoding) * 100 << "%" << std::endl;
    return 0;
}