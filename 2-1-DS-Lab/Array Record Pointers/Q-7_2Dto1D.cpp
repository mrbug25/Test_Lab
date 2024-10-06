#include<bits/stdc++.h>
using namespace std;

int main(){
    //creating a 2d array
    int row = 4;
    int col = 3;
    int mat[row][col] ={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    
    int total = row*col;
    int a[total];
    int indx = 0;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            a[indx] = mat[i][j]; 
            indx++;
        }
    }

    //printing elements of group 3;
    for(int i = 0; i < total; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int group = 3;

    int k = (group-1)*col;

    for(;k < total; k++){
        cout<<a[k]<<" ";
    }

    return 0;

}