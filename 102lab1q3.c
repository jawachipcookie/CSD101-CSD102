/*Write a program to read integers from a file arrayadd.txt. The first integer on the file
would be size of array N. The next N elements would be elements of the array A. The
last N elements would be elements of another array B. The program should declare the
arrays, input the data, print each array on separate lines, add the corresponding elements
of both these arrays to form array C. Finally, the program should print the elements of
the array C*/ 
#include <stdio.h>
#include <stdlib.h>

int main(){

    int N;
    FILE *fptr;
    
    fptr=fopen("arrayadd.txt","r");
    if(fptr==NULL){
        printf("ERROR opening file");
        exit(1);
    }
    printf("%p\n",(void*)fptr);
    fscanf(fptr,"%d",&N);
    printf("%d\n", N);

    int A[N];
    int B[N];
    int temp;
    for(int i=0;i<N;i++){
        fscanf(fptr,"%d",&temp);
        A[i] = temp;
    }

    for(int i=0;i<N;i++){
        fscanf(fptr,"%d",&temp);
        B[i] = temp;
    }

    fclose(fptr);

    for(int i=0;i<N;i++){
        printf("%d ",A[i]);
    }
    printf("\n");

    for(int i=0;i<N;i++){
        printf("%d ",B[i]);
    }
    printf("\n");

    for(int i=0;i<N;i++){
        printf("%d ",A[i] + B[i]);
    }
    printf("\n");
    return 0;
}