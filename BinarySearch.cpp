#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n , key , count = 0;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int>A(n);

    cout<<"Enter the elements in ascending order: ";
    for(int i = 0 ; i<n ; i++){
        cin>>A[i];
    }

    cout<<"Enter the key to search: ";
    cin>>key;

    int low = 0 , high = n-1;

    while(low<=high){
        int mid = low + (high-low)/2;
        count++;

        if(A[mid] == key){
            cout<<"Element found at position: "<<mid+1<<endl;
            cout<<"Comparisons: "<<count<<endl;
            return 0;
        }
        else if(key < A[mid]){
            high = mid -1 ;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<"Element not found."<<endl;
    cout<<"Comparisons: "<<count<<endl;
    return 0;
}
