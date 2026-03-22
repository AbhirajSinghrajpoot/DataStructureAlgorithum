 #include <stdio.h>

int main() {
    int a[10], i, j, count;

    // Input 10 values into the array
    for (i = 0; i < 10; i++) {
        printf("Enter the value: ");
        scanf("%d", &a[i]);
    }

    // Display the original array
    printf("\nOriginal array is:");
    for (i = 0; i < 10; i++) {
        printf("\n%d", a[i]);
    }

    // Count the frequency of each element
    for (i = 0; i < 10; i++) {
        if (a[i] != 0) {
            count = 1;
            for (j = i + 1; j < 10; j++) {
                if (a[j] == a[i]) {
                    count++;
                    a[j] = 0; // Marking the element as counted
                }
            }
            printf("\nFrequency of %d = %d", a[i], count);
        }
    }

    return 0;
}
