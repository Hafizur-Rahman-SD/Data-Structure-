#include <stdio.h>     //header file
#include <stdlib.h>    // structure  header file 
stuct Node{           //link list structure 
int data;
struct node next;
};

int main(){

  struct node *a = null;
  struct node *b = null;
  struct node *c =null;

  a =(struct node *) malloc (size of (struct node));
  b =(struct node *) malloc (size of (struct node));
  c =(struct node *) malloc (size of (struct node));


    a-> data = 13;
    b -> data = 15;
    c -> data =29;
      
      
      a -> next =b;
      b -> next = c;
       c -> next = null;
    // this is trance paft of linnk list 


    while (a! =null){
      printf ("%d ->", a-> data);
      a= a-> next;
    }
      
      return 0;
}                                  //end program.
