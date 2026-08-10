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

    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    auto stop = high_resolution_clock::now();

    cout<<"\nSorted Array:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    auto duration = duration_cast<microseconds>(stop-start);

    cout<<"\n\nTime Complexity:";
    cout<<"\nBest Case : O(n)";
    cout<<"\nAverage Case : O(n^2)";
    cout<<"\nWorst Case : O(n^2)";
    cout<<"\nExecution Time: "<<duration.count()<<" microseconds";

    return 0;
}