#include <stdio.h>

void sum(int num[], int n, int result[]) {
    result[0] = num[0];
    for (int i =1;i <n;i++) {
        result[i] = result[i -1] + num[i]; }
}
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    int result[n];
    sum(num, n, result);
    printf("sum:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
