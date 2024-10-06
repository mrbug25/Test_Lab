#include<bits/stdc++.h>
using namespace std;

void removeKarim(){
     string name[100] ={"Abdul", "Anan", "Rafusn", "Nirjhor", "Sifat", "Karim", "Rijwan" , "Enan", "Sakib", "Rifat"};
     sort(name, name+10);

     for(int i = 0; i < 10; i++){
        cout<<name[i]<<"  ";
     }
    cout<<endl;

    string itm = "Karim";
    int idx;
    
    for(int i = 0; i < 10; i++){
        if(name[i] == itm){
            idx = i;
            break;
        }
    }

    for(int j = idx; j < 9; j++){
        name[j] = name[j+1]; 
    }

    for(int i = 0; i < 9; i++){
        cout<<name[i]<<"  ";
    }
}

void removeItem(){
    int a[10] = {10, 20, 30, 40,50, 60,70,80, 90, 100};
    int k = 2;
    int item = a[k];

    for(int i = k; i < 9; i++){
        a[i] = a[i+1];
    }

    for(int i = 0; i < 9; i++){
        cout<<a[i]<<"  ";
    }

}

int main(){
    removeKarim();
    cout<<endl;
    removeItem();

    return 0;
}

