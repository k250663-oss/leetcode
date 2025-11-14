#include <stdio.h>

void transform(int num[], int n, int transformed[]) {
    for (int i =0 ;i <n;i++) {
        if(num[i] % 2==0){
            transformed[i]=0;
        }
        else{
            transformed[i] =1;
        }
}
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
    int transformed[n];
    transform(num, n, transformed);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (transformed[j] > transformed[j + 1]) {
                int a = transformed[j];
                transformed[j] = transformed[j + 1];
                transformed[j + 1] = a;}
                } }
    for (int i = 0; i < n; i++) {
        printf("%d ", transformed[i]);
    }


    return 0;
}
