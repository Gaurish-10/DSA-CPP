#include <stdio.h>

void display(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
}

void instertionsort(int arr[] , int n){
    int i , j , key;

    for(i = 1 ; i<n ;i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        printf("Pass %d:" , i);
        display(arr , n);
    }
}

int main(){
    int arr[100] , n;

    printf("Enter number of elements:");
    scanf("%d" , &n);

    printf("Enter elements:");
    for(int i = 0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nStarting insertion sort....\n");
    instertionsort(arr , n);

    printf("Final Sorted array:");
    display(arr , n);

    return 0;
}
