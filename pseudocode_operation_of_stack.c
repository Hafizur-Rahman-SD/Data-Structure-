// Write pseudo code for the 5 operations of stack
//PUSH,POP,TOP,IsEmpty(),Is Full().

int A[15]     //create our array size. 

//PUSH
push(x){
top <-top+1
A[top] <-x
}

//POP
pop(){
top <-top -1
}

//TOP
top(){
return A[top]   //return the top value of Arrrays. 
  }

//ISEMPTY
IsEmpty() {
if (top == -1)
  return true
    else 
return false
  }
