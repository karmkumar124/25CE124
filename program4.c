#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    int choice;

    while (1) {
        printf("\n===== Data Type Info Menu =====\n");
        printf("1. char\n");
        printf("2. short\n");
        printf("3. int\n");
        printf("4. long\n");
        printf("5. long long\n");
        printf("6. float\n");
        printf("7. double\n");
        printf("8. long double\n");
        printf("9. Exit\n");
        printf("Enter your choice (1-9): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- char ---\n");
                printf("Size: %lu byte\n", sizeof(char));
                printf("Signed Range: %d to %d\n", CHAR_MIN, CHAR_MAX);
                printf("Unsigned Range: 0 to %u\n", UCHAR_MAX);
                break;

            case 2:
                printf("\n--- short ---\n");
                printf("Size: %lu bytes\n", sizeof(short));
                printf("Signed Range: %d to %d\n", SHRT_MIN, SHRT_MAX);
                printf("Unsigned Range: 0 to %u\n", USHRT_MAX);
                break;

            case 3:
                printf("\n--- int ---\n");
                printf("Size: %lu bytes\n", sizeof(int));
                printf("Signed Range: %d to %d\n", INT_MIN, INT_MAX);
                printf("Unsigned Range: 0 to %u\n", UINT_MAX);
                break;

            case 4:
                printf("\n--- long ---\n");
                printf("Size: %lu bytes\n", sizeof(long));
                printf("Signed Range: %ld to %ld\n", LONG_MIN, LONG_MAX);
                printf("Unsigned Range: 0 to %lu\n", ULONG_MAX);
                break;

            case 5:
                printf("\n--- long long ---\n");
                printf("Size: %lu bytes\n", sizeof(long long));
                printf("Signed Range: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
                printf("Unsigned Range: 0 to %llu\n", ULLONG_MAX);
                break;

            case 6:
                printf("\n--- float ---\n");
                printf("Size: %lu bytes\n", sizeof(float));
                printf("Range: %e to %e\n", FLT_MIN, FLT_MAX);
                break;

            case 7:
                printf("\n--- double ---\n");
                printf("Size: %lu bytes\n", sizeof(double));
                printf("Range: %e to %e\n", DBL_MIN, DBL_MAX);
                break;

            case 8:
                printf("\n--- long double ---\n");
                printf("Size: %lu bytes\n", sizeof(long double));
                printf("Range: %Le to %Le\n", LDBL_MIN, LDBL_MAX);
                break;

            case 9:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please select between 1 and 9.\n");
        }
    }

    return 0;
}
