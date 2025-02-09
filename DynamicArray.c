#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
     Dynamic Array Manager
Objective:
Create a program that:

Dynamically allocates memory for an array of integers.
Allows the user to:
Add elements.
Resize the array when it reaches its limit.
View all stored elements.
    */
    int *arr;
    int size = 2;
    int count = 0;
    arr = (int *)malloc(size*sizeof(int));
    if(arr==NULL){
        printf("Memory failed \n");
        return 1;
    }
    while(1){
        int option;
        printf("1.Add number\n2.Show the Array\n3.Exit\n");
        printf("choose the option\n");
        scanf("%d",&option);
        if(option == 1){
            int num;
            printf("Enter the num to add\n");
            scanf("%d",&num);
            if(size==count){
                size = size * 2;
                arr = (int *)realloc(arr,size*sizeof(int));
                  if(arr==NULL){
        printf("Memory failed \n");
        return 1;
    }
            }
            arr[count++] = num;
        }else if(option == 2){
            printf("show the array \n");
            for(int i = 0; i<count; i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
        }else if(option == 3){
            break;
        }else{
            printf("invalid option");
        }
    }
    free(arr);
    return 0;
}