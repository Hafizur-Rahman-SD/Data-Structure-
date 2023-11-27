#include<stdio.h> //heder file.
#define CAPACITY 5     //define our capacity value 5. we can define anyvalue for capacity.
int stack [CAPACITY];
int top= -1;

void push(int x){
if (top < CAPACITY -1){
top= top+1;
stack [top]=x;

printf("Sucessfully added item: %d\n",x);
}
else {
printf("Exception No space \n");}
}

int pop(){                    //its pop
if(top >=0){
int val =stack [top];
top = top -1;
return val;
}
printf(" Execption from pop! Empty stack\n"); //print what you want.
return -1;
}

int main(){
printf("Implementing my stack in C.\n");


  //here do pop(),push() your item. 
pop();
push(10);
push(5);
push(9);
pop();
printf("POP Item:%d \n", pop());      //popwork 
push(11);
push(8);
push(0);
//printf("Top of stack: %d\n", peek());
return 0;
}
