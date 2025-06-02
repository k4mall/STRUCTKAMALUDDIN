#include <iostream>>
using namespace std;

typedef int itemType;

const int MAXSTACK = 10;

typedef struct stack

{
    itemType Item[MAXSTACK];
    int Count;
}stack;