#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int partition(int arr[], int low, int high){

    int pivot=arr[high];
    int i=low-1;

    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){

    if(low<high){
        int pi=partition(arr,low,high);

        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    auto start=high_resolution_clock::now();

    quickSort(arr,0,n-1);

    auto stop=high_resolution_clock::now();

    cout<<"\nSorted Array:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    auto duration=duration_cast<microseconds>(stop-start);

    cout<<"\n\nTime Complexity:";
    cout<<"\nBest Case : O(n log n)";
    cout<<"\nAverage Case : O(n log n)";
    cout<<"\nWorst Case : O(n^2)";
    cout<<"\nExecution Time: "<<duration.count()<<" microseconds";

    return 0;
}