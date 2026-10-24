#include <stdio.h>

int pass = 1;

void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[] , int low , int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low ; j<high ; j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i] , &arr[j]);
        }
    }
    swap(&arr[i+1] , &arr[high]);
    return i+1;
}

void quicksort(int arr[] , int low , int high , int size){
    if(low<high){
        int pi = partition(arr , low , high);

        printf("Pass %d:" , pass++);
        for(int i = 0 ; i<size ; i++){
            printf("%d " , arr[i]);
        }
        printf("\n");
        quicksort(arr , low , pi-1 , size);
        quicksort(arr , pi+1 , high , size);
    }
}

int main(){
    int arr[50] , n ;
    printf("Enter number of elements(max 50):");
    scanf("%d" , &n);

    printf("Enter elements:");
    for(int i = 0 ;i<n ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("\n");

    quicksort(arr, 0 , n-1 , n);
    printf("Sorted array:");
    for(int i = 0 ; i<n ; i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
}
