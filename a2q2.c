#include<stdio.h>

int sumarray(int A[], int n ){
	if (n==0){
		return 0;
	} else{
		return A[0] + sumarray(A+1, n-1);
	}	
}

int main() {
	FILE*file = fopen("arr.txt","r");
	if(file==NULL){
		printf("File Invalid");
		return 1;
	}
	
	int N;
	fscanf(file,"%d", &N);
	if (N<=0){
		printf("Invalid array size");
		fclose(file);
		return 1;
	}
	
	int A[N];
	for (int i=0; i<N; i++){
		fscanf(file,"%d", &A[i]);
		}
	fclose(file);
	
	int summ= sumarray(A,N);
	printf("sum of array elements is %d", summ);
	
	return 0;
}
