#include<bits/stdc++.h>
using namespace std;

int main(){
    int size = 10;
    int a[size];

    for(int i = 0; i < size; i++){
        cin>>a[i];
    }

    sort(a, a+size);
    cout<<"sorted data\n";
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }

    return 0;

}