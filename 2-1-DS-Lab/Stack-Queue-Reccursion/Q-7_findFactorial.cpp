#include<iostream>
using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num;
    cout<<"Enter the number\n";
    cin>>num;

    cout<<"Factorial of "<<num << " is "<<factorial(num);
    return 0;
}