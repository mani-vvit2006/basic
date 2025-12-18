#include <stdio.h>
int main() {
    int a[100], n, i, pos, element, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nInsertion Methods:");
    printf("\n1. Insert at Beginning");
    printf("\n2. Insert at End");
    printf("\n3. Insert at Position");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter element to insert: ");
    scanf("%d", &element);
    switch(choice) {
        case 1:
            for(i = n; i > 0; i--) {
                a[i] = a[i - 1];
            }
            a[0] = element;
            n++;
            break;
        case 2:
            a[n] = element;
            n++;
            break;
        case 3:
            printf("Enter position (1 to %d): ", n + 1);
            scanf("%d", &pos);

            for(i = n; i >= pos; i--) {
                a[i] = a[i - 1];
            }
            a[pos - 1] = element;
            n++;
            break;

        default:
            printf("Invalid choice");
            return 0;
    }

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
