#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    auto start = high_resolution_clock::now();

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min=j;
        }
        swap(arr[i],arr[min]);
    }

    auto stop = high_resolution_clock::now();

    cout<<"\nSorted Array:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    auto duration = duration_cast<microseconds>(stop-start);

    cout<<"\n\nTime Complexity:";
    cout<<"\nBest Case : O(n^2)";
    cout<<"\nAverage Case : O(n^2)";
    cout<<"\nWorst Case : O(n^2)";
    cout<<"\nExecution Time: "<<duration.count()<<" microseconds";

    return 0;
}