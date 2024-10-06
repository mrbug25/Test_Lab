#include<bits/stdc++.h>
using namespace std;

void insertion_a(){
    int a[100] = {10, 20 ,30 , 40, 50, 60,  70,  80,  90,  100};
    int item = 54;
    int indx;
    //inserting 54 to this sorted array
    for(int i = 0; i < 10; i++){
        if(a[i] > item){
            indx = i;
            break;
        }
    }
    
    for(int j = 9; j >= indx; j--){
        a[j+1] = a[j];
         
    }

    a[indx] = 54;

    for(int i = 0; i < 11; i++){
        cout<<a[i]<<" ";
    }
    
}

void insertion_b(){
    string name[100] ={"Abdul", "Anan", "Rafusn", "Nirjhor", "Sifat", "Karim", "Rijwan" , "Enan", "Sakib", "Rifat"};

    sort(name, name+10);
    
   string itm = "Rahim";
   int idx;
   
   for(int i = 0; i < 10; i++){
        if(name[i] > itm){
            idx = i;
            break;
        }
   }

   for(int j = 9; j >= idx; j-- ){
        name[j+1] = name[j];
   }

   name[idx] = "Rahim";

   for(int i = 0; i < 11; i++){
    cout<<name[i]<<" ";
   }

}

void put_99(){

    int a[100] ={10, 20, 30 ,40, 50, 60, 70 ,80 ,90, 100};
    int pos = 5;
    int item = 99;

    for(int j = 9; j >= pos-1; j--){
        a[j+1] = a[j];
    }
    a[pos-1] = item;

    for(int i = 0; i < 11; i++) {
        cout<<a[i]<<" ";
    }

}

void put_karim(){
    string name[100] ={"Abdul", "Anan", "Rafusn", "Nirjhor", "Sifat", "Korvochob", "Rijwan" , "Enan", "Sakib", "Rifat"};

    string item = "Karim";
    int pos = 5;

    for(int j = 9; j > pos; j--){
        name[j+1] = name[j];
    }
    name[pos-1] = item;

    for(int i = 0; i < 11; i++){
        cout<<name[i]<<" ";
    }

}

int main(){
    
    insertion_a();
    cout<<endl;
    insertion_b();
    cout<<endl;
    put_99();
    cout<<endl;
    put_karim();
    cout<<endl;
   



    return 0;
}