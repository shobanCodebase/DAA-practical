#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Heapify a subtree
void maxHeapify(int arr[], int n, int i) {

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Check left child
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Check right child
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify affected subtree
        maxHeapify(arr, n, largest);
    }
}

// Build Max Heap
void buildMaxHeap(int arr[], int n) {

    // Start from last non-leaf node
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Start execution time
    auto start = high_resolution_clock::now();

    // Build Max Heap
    buildMaxHeap(arr, n);

    // Stop execution time
    auto stop = high_resolution_clock::now();

    cout << "\nMax Heap:\n";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\n\nTime Complexity:";
    cout << "\nBest Case : O(n)";
    cout << "\nAverage Case : O(n)";
    cout << "\nWorst Case : O(n)";

    cout << "\nExecution Time: "
         << duration.count()
         << " microseconds";

    return 0;
}