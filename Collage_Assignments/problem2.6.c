//6. Huffman Cong
//Ans:

#include <stdio.h>
#include <stdlib.h>

#define MAX_TREE_HT 50

// Structure for a Huffman tree node
struct MinHNode {
    char item;                // Character
    unsigned freq;            // Frequency of character
    struct MinHNode *left;    // Left child
    struct MinHNode *right;   // Right child
};

// Structure for Min Heap
struct MinHeap {
    unsigned size;            // Current size
    unsigned capacity;        // Maximum capacity
    struct MinHNode **array;  // Array of node pointers
};

// Function to create a new node
struct MinHNode* newNode(char item, unsigned freq) {
    struct MinHNode* temp = (struct MinHNode*)malloc(sizeof(struct MinHNode));
    temp->item = item;
    temp->freq = freq;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to create a min heap of given capacity
struct MinHeap* createMinH(unsigned capacity) {
    struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = (struct MinHNode**)malloc(capacity * sizeof(struct MinHNode*));
    return minHeap;
}

// Swap two min heap nodes
void swapMinHNode(struct MinHNode** a, struct MinHNode** b) {
    struct MinHNode* t = *a;
    *a = *b;
    *b = t;
}

// Heapify at given index
void minHeapify(struct MinHeap* minHeap, int idx) {
    int smallest = idx;
    int left = 2*idx + 1;
    int right = 2*idx + 2;

    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
        smallest = left;
    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
        smallest = right;

    if (smallest != idx) {
        swapMinHNode(&minHeap->array[smallest], &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}

// Check if heap has only one node
int checkSizeOne(struct MinHeap* minHeap) {
    return (minHeap->size == 1);
}

// Extract minimum frequency node
struct MinHNode* extractMin(struct MinHeap* minHeap) {
    struct MinHNode* temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    --minHeap->size;
    minHeapify(minHeap, 0);
    return temp;
}

// Insert a node into min heap
void insertMinHeap(struct MinHeap* minHeap, struct MinHNode* minHeapNode) {
    ++minHeap->size;
    int i = minHeap->size - 1;

    while (i && minHeapNode->freq < minHeap->array[(i-1)/2]->freq) {
        minHeap->array[i] = minHeap->array[(i-1)/2];
        i = (i-1)/2;
    }
    minHeap->array[i] = minHeapNode;
}

// Build min heap from existing array
void buildMinHeap(struct MinHeap* minHeap) {
    int n = minHeap->size - 1;
    for (int i = (n-1)/2; i >= 0; --i)
        minHeapify(minHeap, i);
}

// Check if node is leaf
int isLeaf(struct MinHNode* root) {
    return !(root->left) && !(root->right);
}

// Create and build min heap for given characters and frequencies
struct MinHeap* createAndBuildMinHeap(char item[], int freq[], int size) {
    struct MinHeap* minHeap = createMinH(size);
    for (int i = 0; i < size; ++i)
        minHeap->array[i] = newNode(item[i], freq[i]);
    minHeap->size = size;
    buildMinHeap(minHeap);
    return minHeap;
}

// Build Huffman Tree
struct MinHNode* buildHuffmanTree(char item[], int freq[], int size) {
    struct MinHNode *left, *right, *top;
    struct MinHeap* minHeap = createAndBuildMinHeap(item, freq, size);

    while (!checkSizeOne(minHeap)) {
        left = extractMin(minHeap);
        right = extractMin(minHeap);

        top = newNode('$', left->freq + right->freq); // Internal node
        top->left = left;
        top->right = right;

        insertMinHeap(minHeap, top);
    }

    struct MinHNode* root = extractMin(minHeap);
    free(minHeap->array); // Free heap array
    free(minHeap);        // Free heap
    return root;
}

// Print Huffman codes recursively
void printHCodes(struct MinHNode* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printHCodes(root->left, arr, top+1);
    }
    if (root->right) {
        arr[top] = 1;
        printHCodes(root->right, arr, top+1);
    }
    if (isLeaf(root)) {
        printf(" %c | ", root->item);
        for (int i = 0; i < top; i++)
            printf("%d", arr[i]);
        printf("\n");
    }
}

// Wrapper to generate Huffman codes
void HuffmanCodes(char item[], int freq[], int size) {
    struct MinHNode* root = buildHuffmanTree(item, freq, size);
    int arr[MAX_TREE_HT], top = 0;
    printHCodes(root, arr, top);
}

// Main function: user input
int main() {
    int n;
    printf("Enter number of unique characters: ");
    scanf("%d", &n);

    char *arr = (char*)malloc(n * sizeof(char));
    int *freq = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Enter character %d: ", i+1);
        scanf(" %c", &arr[i]); // space before %c to skip newline
        printf("Enter frequency of '%c': ", arr[i]);
        scanf("%d", &freq[i]);
    }

    printf("\nCharacter | Huffman Code\n");
    printf("------------------------\n");
    HuffmanCodes(arr, freq, n);

    free(arr);
    free(freq);
    return 0;
}