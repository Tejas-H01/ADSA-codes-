#include <stdio.h>

void merge(int arr[] , int lo , int m , int hi){
	
int n1 = m-lo+1;
int n2 = hi-m;

int L[n1];
int R[n2];

for (int i=0 ; i<n1 ; i++){
	L[i]=arr[lo+i];
	}	
	
for ( int i=0 ; i<n2 ; i++){
	R[i]=arr[m+1+i];
	}
	
int i = 0;
int j = 0;
int k = lo;

	while(i<n1 && j<n2){
		
		if (L[i]<=R[j]){
			arr[k]=L[i];
			i++;
		}else{
		arr[k]=R[j];
		j++;
		}
		k++;
	}
	while(i<n1){
	arr[k]=L[i];
	i++;
	k++;	
	}
	while(j<n1){
	arr[k]=R[j];
	j++;
	k++;	
	}
	
}

void MergeSort(int arr[] , int lo , int hi){
	
	if(lo<hi){
	int m = lo + (hi-lo)/2;

	MergeSort(arr , lo , m);
	MergeSort(arr , m+1 , hi );	

	merge(arr,lo,m,hi);

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

MergeSort(arr,0,n-1);

printf("The sorted array is : \n");
for(int i=0 ;i<n;i++){
printf("|%d",arr[i]);	
}
printf("|");

return 0;
	
}
