#include <iostream>
using namespace std;

typedef int itemType;

const int MAXSTACK = 10;

typedef struct stack

{
    itemType Item[MAXSTACK];
    int Count;
}stack;

void inisiasistack(stack *S){
    S->Count = 0;
}
int Full(stack *S){
    return(S->Count==MAXSTACK);
}
int empty(stack *S){
    return (S->Count==0);
}