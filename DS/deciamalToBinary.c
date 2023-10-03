#include <stdio.h>
struct stack{
    int data[10];
    int top;
};

int main(){
    struct stack s;
    s.top=-1;
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    while(num!=0){
        s.top++;
        s.data[s.top]=num%2;
        num=num/2;
    }
    for(int i=0;i<10;i++){
        printf("%d",s.data[i]);
    }
}