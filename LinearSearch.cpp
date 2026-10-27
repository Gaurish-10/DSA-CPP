#include <iostream>
using namespace std;

int main(){
    int n, key , count = 0;

    cout<<"Enter the size of the array:";
    cin>>n;

    int A[n];

    cout<<"Enter the array elements:";
    for(int i = 0 ; i < n ; i++){
        cin>>A[i];
    }

    cout<<"Enter the search key:";
    cin>>key;

    for(int i = 0 ; i<n ; i++){
        count++;

    if (A[i] == key){
        cout<<"Elements found at position:"<<i+1<<endl;
        cout<<"comparisons = "<<count<<endl;
        return 0;
        }
    }
    cout<<"Elements Not Found"<<endl;
    cout<<"Comparisons = "<<count<<endl;

    return 0;
}
