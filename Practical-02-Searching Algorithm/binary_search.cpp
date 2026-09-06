#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    auto start = high_resolution_clock::now();

    int low = 0, high = n - 1;
    int position = -1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            position = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    auto stop = high_resolution_clock::now();

    if (position != -1)
        cout << "\nElement found at position " << position + 1;
    else
        cout << "\nElement not found.";

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\n\nTime Complexity:";
    cout << "\nBest Case : O(1)";
    cout << "\nAverage Case : O(log n)";
    cout << "\nWorst Case : O(log n)";
    cout << "\nExecution Time: " << duration.count() << " microseconds";

    return 0;
}