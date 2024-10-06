
/*
    NOTE : You can use structure and memory allocation to precisely delete space 
        But here i used -1 as notation of an empty space inside a stack
*/

#include<bits/stdc++.h>
using namespace std;

const int size = 50;
int st[size];
int top = -1;

void initialize(){
    for(int i = 0; i < size; i++){
        st[i] = -1;
    }
}
void delTop(){
    if(top == -1){
        cout<<"Stack Underflow\n";
    }
    st[top] = -1;
    top--;
    cout<<"Item deleted\n";
}

void push(int x){
    if(top == size-1){
        cout<<"Stack overflow\n";
    }
    else{
        top = top + 1;
        st[top] = x; 
    }
}
void show(){
    if(top == -1){
        cout<<"Stack empty\n";
    }
    else{
        cout<<"stack : ";
        for(int i = top; i >= 0; i--){
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){

    initialize();

    cout<<"Press 1 to create\n\tPress 2 to delete\n\tPress 3 to show\n\tPress 4 to exit";

    int com;
    while(1){
        cin>>com;

        switch (com)
        {
        case 1:
            cout<<"Enter item to stack\n";
            int x;
            cin>>x;
            push(x);
            break;
        case 2 :
            cout<<"Deleting top item..\n";
            delTop();
            break;

        case 3: 
            cout<<"Showing stack items:";
            show();
            break;
        case 4:
            return 0;
        }
    }

    return 0;

}
