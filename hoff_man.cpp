#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Huffman tree node
struct MinHeapNode
{
    char data;
    float freq;

    MinHeapNode *left, *right;

    MinHeapNode(char data, float freq)
    {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};

// For comparison of two nodes.
struct compare
{

    bool operator()(MinHeapNode *l, MinHeapNode *r)
    {
        return (l->freq > r->freq);
    }
};

// Print Huffman Codes
void printCodes(struct MinHeapNode *root, string str)
{
    // If root is Null then return.
    if (!root)
    {
        return;
    }

    if (root->data != '$')
    {
        cout << root->data << " ->" << str << endl;
    }

    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

// Build Huffman Tree
void HuffmanCodes(char data[], float freq[], int size)
{

    struct MinHeapNode *left, *right, *top;

    // create a min heap.
    priority_queue<MinHeapNode *, vector<MinHeapNode *>, compare> minheap;

    // For each character create a leaf node and insert each leaf node in the heap.
    for (int i = 0; i < size; i++)
    {
        minheap.push(new MinHeapNode(data[i], freq[i]));
    }

    // Iterate while size of min heap doesn't become 1
    while (minheap.size() != 1)
    {
        // Extract two nodes from the heap.
        left = minheap.top();
        minheap.pop();

        right = minheap.top();
        minheap.pop();

        MinHeapNode *temp;
        temp = new MinHeapNode('$', left->freq + right->freq);
        temp->left = left;
        temp->right = right;

        minheap.push(temp);
    }
    // Calling function to print the codes.
    printCodes(minheap.top(), " ");
}

int main()
{
    int size;
    cin >> size;
    char arr[size];
    float freq[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        cin >> freq[i];
    }
    cout << "Ans" << endl;
    HuffmanCodes(arr, freq, size);

    return 0;
}
