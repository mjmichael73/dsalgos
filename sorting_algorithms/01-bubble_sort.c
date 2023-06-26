/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
https://www.onlinegdb.com/online_c_compiler
*******************************************************************************/

#include <stdio.h>

int* bubble (int A[], int n) {
    int i, j, temp;
    int flag = 1;
    for (i= n-1; i>0 && flag; i--) {
        flag = 0;
        for (j = 0; j<i; j++) {
            if (A[j] > A[j+1]) {
                flag = 1;
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    return A;
}
int main()
{
    int A[] = {1, 5, 7, 8, 3, 2};
    int n = 6;
    int *result = bubble(A, n);
    for (int i = 0; i < n; i++){
        printf("%d ", result[i]);
    }
    return 0;
}
