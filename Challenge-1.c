// Merging of Two Sorted Array
// I just thought it will be better if i make this menu-driven program to take arrays from user and merging them and sorting them
#include<stdio.h>
// void sort(){
//     return 0;
// }
// void merge(){
//     return 0;
// }
// void create_arr(){
//     return 0;
// }
int main(){
    int arr1[50],arr2[50],n;
    printf("1.Merge Arrays");
    printf("2.Sort Arrays");
    printf("3.Create new Arrays");
    printf("Enter your choice:\n");
    scanf("%d",&n);
    switch(n){
        case 1: printf("hello1 ");
            // merge();}
        break;
        case 2: printf("hello 2");
            // sort();}
        break;
        case 3: printf("hello 3");
            // create_arr();}
        break;
        default: printf("Please enter correct option");
    }
}