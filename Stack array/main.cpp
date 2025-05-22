#include <iostream>
#include "StackType.h"
#include "StackType.cpp"

using namespace std;

int main()
{

StackType<int> stack;
StackType<int> stack2;

if (stack.IsEmpty()) {
    cout << "Stack is Empty" << endl;
}


stack.Push(5);
stack.Push(7);
stack.Push(4);
stack.Push(2);

if (!stack.IsEmpty()) {
    cout << "Stack is not Empty" << endl;
}
if (!stack.IsFull()) {
    cout << "Stack is not full" << endl;
}




for(int i=0;i<4;i++) {

        int item = stack.Top();
        stack2.Push(item);
        stack.Pop();
}


for(int i=0;i<4;i++) {

        int item = stack2.Top();
        stack.Push(item);
        cout << item << " ";
        stack2.Pop();

}



stack.Push(3);


for(int i=0;i<5;i++) {

        int item = stack.Top();
        stack2.Push(item);
        stack.Pop();
}

cout << endl;
for(int i=0;i<5;i++) {

        int item = stack2.Top();
        stack.Push(item);
        cout << item << " ";
        stack2.Pop();

}

cout << endl;

if (stack.IsFull()) {
    cout << "Stack is full" << endl;
}



stack.Pop();
stack.Pop();


cout << stack.Top() << endl;

return 0;
}
