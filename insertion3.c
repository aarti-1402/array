#include<stdio.h>
void main(){
    int array[100]={8,4,2,7,9,1,3};
    int element;
    int size=7;
    int newposition=2;
    
    printf("Before insertion\n");
    for(int i=0;i<size;i++){
        printf("%d",array[i]);
    }
    printf("\nenter the number you want to insert at newposition\n");
    scanf("%d",&element);
    
    size=size+1;
    for(int i=size-1;i>=newposition;i--){
        array[i+1]=array[i];
    }
    
    array[newposition]=element;
    printf("After  insertion at end\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i] );
    }
        
    
    }