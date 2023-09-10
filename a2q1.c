#include<stdio.h>

int sumseries(int m, int n){
	if (n== m-1){
		return n*n;
	} else {
		return n*n + sumseries(m,n-1);
	
	}
}

int main() {
	int m,n;
	printf("Enter the value of m: ");
	scanf("%d", &m);
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	int result= sumseries(m,n);
	printf("the final answer is: %d",result);
	
	return 0;


}
