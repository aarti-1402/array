#include<stdio.h>
void main(){
int array[100]={3,7,6,8,5,1};
int element;
int size=6;
printf("Before insertion\n");
for(int i=0;i<size;i++){
    printf("%d",array[i]);
}
printf("\nenter the number you want to insert at end\n");
scanf("%d",&element);
array[size]=element;
size=size+1;
printf("After  insertion at end\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i] );
    }
}