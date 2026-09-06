#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    auto start = high_resolution_clock::now();

    int position = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            position = i;
            break;
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
    cout << "\nAverage Case : O(n)";
    cout << "\nWorst Case : O(n)";
    cout << "\nExecution Time: " << duration.count() << " microseconds";

    return 0;
}