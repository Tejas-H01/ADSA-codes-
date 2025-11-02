#include <stdio.h>

// gonna need swap(), partition() , QuickSort(),main() 

void swap(int arr[] , int a , int b ){

int temp = arr[a];
arr[a]=arr[b];
arr[b]=temp	;
	
}

int partition(int arr[] , int lo , int hi){
	
int i = lo-1;
int pivot=arr[hi];
int j = lo;

for(j= lo ; j<hi ; j++){

if(arr[j]<=pivot){
i++;
swap(arr,i,j);
}
		
}	
swap(arr,i+1,hi);

return i+1;
}

void QuickSort(int arr[], int lo , int hi){
if(lo<hi){
int pi = partition(arr,lo,hi);
QuickSort(arr,lo,pi-1);
QuickSort(arr,pi+1,hi);
}
}


int main(){
int n;
printf("Enter the number of element: ");
scanf("%d",&n);

int arr[n];

printf("Enter the elements :");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);	
}

QuickSort(arr,0,n-1);

printf("The sorted array is : \n");
for(int i=0 ;i<n;i++){
printf("|%d",arr[i]);	
}
printf("|");

return 0;
	
}
