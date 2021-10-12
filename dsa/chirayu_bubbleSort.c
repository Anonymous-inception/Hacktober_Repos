#include<stdio.h>


void printArray(int * A , int n ){
    for(int i = 0 ; i < n ; i++){
        printf("%d ", A[i]);
    }
}

void bubbleSort(int *A, int n) {

    int swch;

    for(int i = 0 ; i < n-1 ; i ++ ) {
        for(int j = 0 ; j < n-i ; j++) {
            if(A[j] > A[j+1]){
                swch = A[j];
                A[j] = A[j+1];
                A[j+1] = swch;
            }
        }
    }
}

int main() {
    int A[] = {7,1,11,22,3,562};
    int n = 6 ;

    printArray(A, n);
    bubbleSort(A, n);
    printf("\n");
    printArray(A, n);

}