#include <iostream>
using namespace std;

int binarysearch(int tar){
    int start = 0;
    int end = 6;
    int arr[] = { -1 , 0 , 3 , 4 , 5 , 9 , 12};  
    
    while(start<=end){
        int mid = (start + end)/2;
        
        if(tar == arr[mid]){
            return mid;
        }
        if(tar < arr[mid]){
            end = mid - 1 ;
        }
        if(tar > arr[mid]){
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int tar = 12;
     int result = binarysearch(tar);

    if (result != -1)
        cout << "Target found at index:"<<result <<endl ;
    else
        cout<<"Target not found.";
    
    return 0;
}
