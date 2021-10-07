#include<math.h>
#include<stdio.h>
#include<time.h> 
#include<stdlib.h>
int binarySearch(int arr[], int num, int lb, int ub)
{
if (ub <= lb)
return (num > arr[lb])?  (lb + 1): lb;
int mid = (lb + ub)/2;
if(num == arr[mid])
return mid+1;
if(num > arr[mid])
return binarySearch(arr, num, mid+1, ub);
return binarySearch(arr, num, lb, mid-1);
}
void insertionSort(int arr[],int n)
{
int i, pos = 0, j, k, num;
for (i = 1; i < n; i++)
{
j = i - 1;
num = arr[i]; 
pos = binarySearch(arr, num, 0, j);
while (j >= pos)
{
arr[j+1] = arr[j];
j--;
}
arr[j+1] = num;
}
}
int main()
{
printf("Enter the number of random numbers to be generated\n");
int n;
scanf("%d",&n);
int arr[n];
clock_t start=clock();
for(int i=0;i<n;i++)
{
arr[i]=(float)rand()/(float)(RAND_MAX/3);
}
printf("\nBefore\n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
insertionSort(arr,n);
printf("\nNumbers after sorting\n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
clock_t end=clock();
clock_t timereq;
timereq =(double)(end-start);
printf("\nProcessor time taken :%f\n",(double)timereq);
return 0;
}
