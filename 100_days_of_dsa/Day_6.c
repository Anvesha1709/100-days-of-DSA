#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Edge case
    if(n == 0) return 0;

    int i = 0; // pointer for unique elements

    for(int j = 1; j < n; j++) {
        if(a[j] != a[i]) {
            i++;
            a[i] = a[j];
        }
    }

    // Print unique elements
    for(int k = 0; k <= i; k++) {
        printf("%d ", a[k]);
    }

    return 0;
}