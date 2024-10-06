#include<bits/stdc++.h>
using namespace std;

void integerBubble(){
      int n = 10;
    int a[n] = {13, 15, 10, 7, 8 , 9, 18, 14, 5, 1};

    //Bubble sort
    int temp;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        cout<<a[i]<<" ";
    }
}
void stringBubble(){
    string arr[] = {"hello", "world", "python", "programming"};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                    string temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

}
int main(){
    cout<<"integer sort\n";
    integerBubble();
    cout<<endl;  
    cout<<"String sort\n";
    stringBubble();
    

    return 0;
}
