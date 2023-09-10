#include <stdio.h>
#include <time.h>

int function1(double a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        int temp = function1(a, n / 2);
        return temp * temp;
    } else {
        int temp = function1(a, n / 2);
        return a * temp * temp;
    }
}

int function2(double a, int n) {
    if (n == 0) return 1;
    int b = function2(a, n / 2);
    if (n % 2 == 0) {
        return b * b;
    } else {
        return a * b * b;
    }
}

int main() {
    double a = 2.0;
    int n = 64;
    int k = 1000000; // Number of times to call each function
    
    clock_t start, end;
    double cpu_time_used;

    // Measure time for function1
    start = clock();
    for (int i = 0; i < k; i++) {
        function1(a, n);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken by function1: %f seconds\n", cpu_time_used);

    // Measure time for function2
    start = clock();
    for (int i = 0; i < k; i++) {
        function2(a, n);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken by function2: %f seconds\n", cpu_time_used);

    return 0;
}
