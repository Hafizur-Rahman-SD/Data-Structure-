
//test code 
#include<stdio.h> //heder file.
#define CAPACITY 3     //define our capacity value 3. we can define anyvalue for capacity.
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

//peek();
push(10);
push(15);
push(20);

Printf("POP Item:%d \n", pop());      //popwork 
push(50);
//printf("Top of stack: %d\n", peek());
return 0;
}
