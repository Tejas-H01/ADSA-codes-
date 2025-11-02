#include <stdio.h>
#include <stdlib.h>

void swap(int arr[],int a , int b){

int temp = arr[a];
arr[a]=arr[b];
arr[b]=temp;
}

int partition(int arr[] , int lo , int hi){

int i = lo-1;
int j = lo;
int pivot = arr[hi];
for(j=lo;j<hi;j++){
	if(arr[j]<=pivot){
	i++;
	swap(arr,i,j);
	}
}
swap(arr,i+1,hi);
return i+1;
}

int randompivot(int arr[] , int lo , int hi){

int pi= lo + rand() % (hi - lo +1);

swap(arr, pi , hi);	

return partition(arr , lo , hi);
	
}

void RandomQuickSort(int arr[] , int lo , int hi){

if (lo<hi)	{
int pi = randompivot(arr,lo,hi);

RandomQuickSort(arr , lo , pi-1);
RandomQuickSort(arr , pi+1 , hi);
}
	
	
}

int main(void){

int n;

printf("Enter the number of elements: ");
scanf("%d",&n);

int arr[n];

printf("Enter the elements: ");
for(int i=0 ; i <n ;i++){
scanf("%d",&arr[i]);	
}

RandomQuickSort(arr, 0 , n-1);

printf("Sorted array: ");
for(int i=0 ; i <n ; i++){
printf("|%d",arr[i]);	
}	
printf("|");


}




