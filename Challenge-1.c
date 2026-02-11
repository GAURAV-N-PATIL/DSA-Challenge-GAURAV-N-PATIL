// Merging of Two Sorted Array
// I just thought it will be better if i make this menu-driven program to take arrays from user and merging them and sorting them
#include <stdio.h>

int arr1[50], arr2[50], merged[100];
int n1 = 0, n2 = 0;

// Function to create arrays 
void create_arr() {
    int i;
    printf("\nEnter number of elements in Array 1: ");
    scanf("%d", &n1);
    printf("Enter elements of Array 1:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter number of elements in Array 2: ");
    scanf("%d", &n2);
    printf("Enter elements of Array 2:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("\nArrays created successfully!\n");
}

// Function to sort arrays (Bubble Sort) 
void sort() {
    int i, j, temp;

    // Sort Array 1
    for(i = 0; i < n1 - 1; i++) {
        for(j = 0; j < n1 - i - 1; j++) {
            if(arr1[j] > arr1[j + 1]) {
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    // Sort Array 2
    for(i = 0; i < n2 - 1; i++) {
        for(j = 0; j < n2 - i - 1; j++) {
            if(arr2[j] > arr2[j + 1]) {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    printf("\nArrays sorted successfully!\n");
}

// Function to merge two sorted arrays 
void merge() {
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while(i < n1) {
        merged[k++] = arr1[i++];
    }
    while(j < n2) {
        merged[k++] = arr2[j++];
    }
    printf("\nMerged Array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
}

// Main Function
int main() {
    int choice;

    while(1) {
        printf("\n===== MENU =====\n");
        printf("1. Create Arrays\n");
        printf("2. Sort Arrays\n");
        printf("3. Merge Arrays\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                create_arr();
                break;
            case 2:
                sort();
                break;
            case 3:
                merge();
                break;
            case 4:
                return 0;
            default:
                printf("Please enter correct option\n");
        }
    }

    return 0;
}
