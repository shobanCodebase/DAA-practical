#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void merge(int arr[], int l, int m, int r){
    int n1=m-l+1;
    int n2=r-m;

    int L[n1],R[n2];

    for(int i=0;i<n1;i++)
        L[i]=arr[l+i];

    for(int i=0;i<n2;i++)
        R[i]=arr[m+1+i];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2){
        if(L[i]<=R[j])
            arr[k++]=L[i++];
        else
            arr[k++]=R[j++];
    }

    while(i<n1)
        arr[k++]=L[i++];

    while(j<n2)
        arr[k++]=R[j++];
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
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

    mergeSort(arr,0,n-1);

    auto stop=high_resolution_clock::now();

    cout<<"\nSorted Array:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    auto duration=duration_cast<microseconds>(stop-start);

    cout<<"\n\nTime Complexity:";
    cout<<"\nBest Case : O(n log n)";
    cout<<"\nAverage Case : O(n log n)";
    cout<<"\nWorst Case : O(n log n)";
    cout<<"\nExecution Time: "<<duration.count()<<" microseconds";

    return 0;
}