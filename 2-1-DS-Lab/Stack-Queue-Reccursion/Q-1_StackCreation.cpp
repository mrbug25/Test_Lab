#include<bits/stdc++.h>
using namespace std;

const int size = 100;
int st[size];
int top = -1;

void push(int x);
void pop();
int peek();
void show();

int main(){

    cout<<"Perform operation for stacks\n";
    cout<<"\tPress 1 to push element on to stack\n\tPress 2 to pop element onto stack\n\tPress 3 to show stack items\n\tPress 4 to Peek the top item of stack\n\tPress5 to exit program\n";

    int command;
    

    while(1){
        cin>>command;
        switch (command)
        {
        
        case 1:
            cout<<"Enter item : ";
            int x;
            cin>>x;
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            if(peek())
                cout<<"The top item is "<<peek()<<endl;
            break;
        case 5:
            cout<<"good bye !";
            return 0;
        }
    }

}

void push(int x){
    if(top == size-1){
        cout<<"Stack overflow\n";
    }
    else{
        top = top+1;
        st[top] = x;
        cout<<"Item added onto the stack\n";
    }
}

void pop(){

    if(top == -1){
        cout<<"stack underflow\n";
    }
    else{
        cout<<"Popped item = "<<st[top]<<endl;
        top = top-1;

    }
}

int peek(){
    if(top == -1){
        cout<<"Empty stack\n";
        return -1;
    }
    else{
        return st[top];
    }
}

void show(){

    if(top == -1){
        cout<<"stack empty\n";
    }
    else{
        cout<<"Items of stack : ";
        for(int i = top; i >= 0; i--){
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }
}