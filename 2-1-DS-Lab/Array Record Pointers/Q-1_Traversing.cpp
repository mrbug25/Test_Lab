
//By Shahriar Anan

#include<bits/stdc++.h>
using namespace std; 

int a[5] = {22, 45, 11, 55, 18};

int max(){
    //int a[5] = {22, 44, 11, 55, 18};

    int max;

    for(int i = 0; i < 5; i++){
        if(a[i]>a[0]){
            max = a[i];
        }
    }
    return max;
}

int min (){
  //  int a[5] = {10, 7, 5, 2, 16};

    int min;

    for(int i = 0; i < 5; i++ ){
        if(a[i] < a[0]){
            min = a[i];
        }
    } 

    return min;
}

double avg(){
    //int a[5] = {1, 4, 5, 6, 7};
    
    double sum = 0;;
    
    for(int i = 0; i < 5; i++){
        sum = sum + (double)a[i] ;
    }

    double avg = sum/5;

    return avg;
}

int total(){
    
    //int a[5] = {6, 7, 8, 9, 6};
    int sum = 0;

    for(int i = 0; i < 5; i++){
        sum = sum + a[i];
    }

    return sum;
}

void sinValue(){

    for(int i = 0; i < 5; i++){
        double x = double(a[i]);
        double degree = x*(3.1416/180);
        double res = sin(degree);
        printf("Sin of %dth = %.4f\n", i+1, res);
    }
}

int main(){
    cout<<"Maximum is "<<max()<<endl;
    cout<<"Minimum is "<<min()<<endl;
    cout<<"Avarage is "<<avg()<<endl;
    cout<<"total is "<<total()<<endl;

    sinValue();

    return 0;
}


