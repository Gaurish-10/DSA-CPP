#include <stdio.h>

int n , a[100];

void read(){
    printf("Enter number of elements:");
    scanf("%d" , &n);
    for(int i = 0 ; i<n ; i++){
        scanf("%d" , &a[i]);
    }
}

void display(){
    for(int i = 0 ; i< n ; i++){
        printf("%d " , a[i]);
    }
    printf("\n");
}

void selectionsort(){
    int i , j , min , temp ;
    read();

    for (i = 0 ; i<n-1;i++){
        min = i ;
        for(j = i+1;j<n;j++){
            if(a[j] < a[min]){
                min = j ;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min]= temp;
        printf("Pass %d: " , i+1);
        display();
    }
}

int main(){
    selectionsort();
    printf("Final Sorted array: ");
    display();
    return 0;
}
