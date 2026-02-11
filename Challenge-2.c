// Two Sum Problem
#include <stdio.h>
int main() {
    int arr[100], n, target;
    int i, j, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target sum: ");
    scanf("%d", &target);
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair found at indices %d and %d\n", i, j);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }
    if(!found) {
        printf("No pair found.\n");
    }
    return 0;
}
