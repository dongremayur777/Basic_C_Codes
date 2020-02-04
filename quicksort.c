#include <stdio.h>

int partition(int A[], int l, int h){
	int pivot = A[l];
	int i = l+1;
	int j = h;
	while(1){
		while(i < h){
			if(A[i] > pivot)
				break;
			i++;
		}
		while(j > l){
			if(A[j] < pivot)
				break;
			j--;
		}
		if(i < j){

			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
		else
			break;
	}

	int temp = A[j];
	A[j] = A[l];
	A[l] = temp;


	return j;
}

void quicksort(int A[], int l, int h){
	if(l < h){
		int q = partition(A, l, h);

		printf("Paritioned around %d\n", A[q]);
		printf("Calling Quicksort with Left Side Partition\n");
		printf("No. of elements less than %d = %d\n", A[q], q-l);
		printf("Calling Quicksort with Right Side Partition\n");
		printf("No. of elements greater than %d = %d\n", A[q], h-q);
		
		printf("**************************************\n");

		quicksort(A, l, q-1);
		quicksort(A, q+1, h);
	}
}

int main(){
	int A[100];
	int size;
	printf("Enter number of elements in array: ");
	scanf("%d", &size);
	for(int i = 0; i < size; i++)
		scanf("%d", &A[i]);
	quicksort(A, 0, size-1);
	printf("Sorted array is: \n");
	for(int i = 0; i < size; i++)
	
		printf("%d ", A[i]);
	printf("\n");
}
