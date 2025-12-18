#include<stdio.h>
int main() {
    int n, i;
    int a[50], b[50];
    float add[50], sub[50], mul[50], div[50];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nEnter elements of second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for(i = 0; i < n; i++) {
        add[i] = a[i] + b[i];
        sub[i] = a[i] - b[i];
        mul[i] = a[i] * b[i];

        if(b[i] != 0)
            div[i] = (float)a[i] / b[i];
        else
            div[i] = 0;
    }
    printf("\nAddition:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", add[i]);
    printf("\nSubtraction:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", sub[i]);
    printf("\nMultiplication:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", mul[i]);
    printf("\nDivision:\n");
    for(i = 0; i < n; i++) {
        if(b[i] != 0)
            printf("%.2f ", div[i]);
        else
            printf("Not Defined ");
    }
    return 0;
}
