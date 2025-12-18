#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n, m, i, choice, pos, value, key, found;

    // Read first array
    printf("Enter number of elements in array A: ");
    scanf("%d", &n);

    printf("Enter elements of array A:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do {
        printf("\n--- ARRAY OPERATIONS MENU ---\n");
        printf("1. Traversal\n");
        printf("2. Insertion\n");
        printf("3. Deletion\n");
        printf("4. Searching\n");
        printf("5. Sorting\n");
        printf("6. Merging\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            // 1. Traversal
            case 1:
                printf("Array elements:\n");
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;

            // 2. Insertion
            case 2:
                printf("Enter position to insert (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value to insert: ");
                scanf("%d", &value);

                for(i = n; i > pos; i--)
                    a[i] = a[i-1];

                a[pos] = value;
                n++;

                printf("Array after insertion:\n");
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;

            // 3. Deletion
            case 3:
                printf("Enter position to delete (0 to %d): ", n-1);
                scanf("%d", &pos);

                for(i = pos; i < n-1; i++)
                    a[i] = a[i+1];

                n--;

                printf("Array after deletion:\n");
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;

            // 4. Searching
            case 4:
                printf("Enter element to search: ");
                scanf("%d", &key);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(a[i] == key) {
                        found = 1;
                        printf("Element found at position %d\n", i);
                        break;
                    }
                }

                if(!found)
                    printf("Element not found\n");
                break;

            // 5. Sorting (Bubble Sort)
            case 5:
                for(i = 0; i < n-1; i++) {
                    for(int j = 0; j < n-i-1; j++) {
                        if(a[j] > a[j+1]) {
                            int temp = a[j];
                            a[j] = a[j+1];
                            a[j+1] = temp;
                        }
                    }
                }

                printf("Sorted array:\n");
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;

            // 6. Merging
            case 6:
                printf("Enter number of elements in array B: ");
                scanf("%d", &m);

                printf("Enter elements of array B:\n");
                for(i = 0; i < m; i++)
                    scanf("%d", &b[i]);

                for(i = 0; i < n; i++)
                    c[i] = a[i];

                for(i = 0; i < m; i++)
                    c[n + i] = b[i];

                printf("Merged array:\n");
                for(i = 0; i < n + m; i++)
                    printf("%d ", c[i]);
                printf("\n");
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 7);

    return 0;
}
