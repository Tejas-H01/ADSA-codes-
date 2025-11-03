#include <stdio.h>
#define SIZE 10

int hashtable[SIZE];

int hash(int key){
	return key%SIZE;
	}

void initialhash(){
	for (int i=0 ; i < SIZE ; i++){
	hashtable[i]=-1;	
		}
	}
	
void insert(int key ){
	int ind = hash(key);
	
	while(hashtable[ind] != -1){
		ind=(ind+1)%SIZE;
		}
	hashtable[ind]=key;
	}
	
void display(){
	for(int i=0 ; i <SIZE ; i++){
		printf("%d slot stores --> %d\n", i  , hashtable[i]);
		}
	}
	
int main(){
	
	int n;
	
	initialhash();
	 
	
	printf("Enter the number of elements(MAX.10)");
	scanf("%d",&n);
	
	int key[n];
	
	
	
	printf("Enter the numbers: ");
	for(int i=0 ; i <n ; i++){
		printf("\n%d element: ",i);
		scanf("%d",&key[i]);
		}
	for(int i=0 ; i <n ; i++){
		insert(key[i]);
		}
	
	
	display();
	}
