#include<stdio.h>
int stack[100],i,j,choice=0,top=-1,n;
void push();
void pop();
void show();

void main(){
    printf("Enter the number of elements in stack");
    scanf("%d",&n);

    printf("********Stack operation using Array");

    printf("\n--------------------------------\n");

    while(choice!=4){

        printf("Chose one from the below:");
        printf("\n1.push\n2.pop\n3.Show\n4.Exit");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
            {
                push();
                break;
            }

            case 2:{
                pop();
                break;
            }

            case 3:{
                show();
                break;
            }

            case 4:{
                printf("Exiting...");
                break;
            }

            default:{
                printf("Enter your valid chice!!");
            }
        }

    }

}

void push(){

    int val;

    if(top==n)
    {
        printf("\nStack os full\n");
    }else{
        printf("Enter the value");
        scanf("%d",&val);
        top = top+1;
        stack[top]=val;
    }
}

void pop(){
    if(top==-1){
        printf("\nStack is empty\n");
    }else{
        top=top-1;

    }
}

void show(){
    for(i=top;i>0;i--){
        printf("%d",stack[i]);
        printf("\n");
    }

    if(top==-1){
        printf("Stack is empty!");
    }

}