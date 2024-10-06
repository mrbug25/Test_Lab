#include<bits/stdc++.h>
using namespace std;

int a[10] = {14, 15, 12, 22, 33, 10, 77, 6, 80, 90};
string name[10] = {"Abdul", "Anan", "Rafusn", "Nirjhor", "Sifat", "Karim", "Rijwan" , "Enan", "Sakib", "Rifat"};

int intSearch(int key){
    sort(a, a+10);
    int low = 0;
    int high = 9;


    while(low <= high){
        int mid = (low+high) / 2;

        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
    }

    return -1;

}

int stringSearch(string key){

    sort(name, name+10);

    int low = 0;
    int high = 9;

    while(low <= high){
        int mid = (low + high) / 2;
        if(name[mid] == key){
            return mid;
        }
        else if(name[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1;
}

int main(){

    cout<<"search an integer data\n";
    int x;
    cin>>x;

    int index = intSearch(x);

    if(index == -1){
        cout<<"Element not found\n";
    }
    else{
        cout<<"Element found at index : "<<index<<endl;
    }

    cout<<"search for a name\n";
    string z;
    cin>>z;

    int indx = stringSearch(z);

    if(indx == -1){
        cout<<"Name not found\n";
    }
    else{
        cout<<"The name is at "<<indx<<endl;
    }

    return 0;
}