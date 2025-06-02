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
void pop(stack *S, itemType *x){
    if(S->Count==0)
    cout<<"Stack masih kosong!"<<endl;
    else{
        --(S->Count);
        *x = S->Item[S->Count];
    }
}
void push(itemType x, stack *S){
    if(S->Count==MAXSTACK)
    cout<<"Stack penuh! Data tidak dapat masuk!"<<endl;
    else{
        S->Item[S->Count]=x;
        ++(S->Count);
    }
}

int main() {
    stack S;
    itemType x;

    inisiasistack(&S);

    push(10, &S);
    push(20, &S);
    push(30, &S);

    pop(&S, &x);
    cout << "Data yang di-pop: " << x << endl;

    pop(&S, &x);
    cout << "Data yang di-pop: " << x << endl;

    return 0;
}