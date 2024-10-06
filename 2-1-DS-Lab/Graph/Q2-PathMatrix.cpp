#include<bits/stdc++.h>
using namespace std;

// Program for transitive closure of a graph

int main(){

    printf("Enter number of nodes\n");
    int nodes;
    cin>>nodes;

    printf("Enter the adjacency matrix\n");
    int MAT[nodes][nodes][nodes];
    int path[nodes][nodes];

    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            int x;
            cin>>x;
            MAT[0][i][j] = x;
            path[i][j] = x;
        }
    }
    int var[nodes][nodes];
    for(int l = 0; l < nodes-1; l++){

        for(int i = 0; i < nodes; i++){
            for(int j = 0; j < nodes; j++){
                var[i][j] = 0;
                for(int k = 0; k < nodes; k++){
                    var[i][j] += MAT[l][i][k] * MAT[0][k][j];
                }
                MAT[l+1][i][j] = var[i][j];
                path[i][j] += MAT[l+1][i][j];
            }
        }   
    }

    cout<<"The path matrix/ transitive closure of the di-graph:\n";
    int check = 1;
    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            if(path[i][j] > 0){
                path[i][j] = 1;
            }
            if(path[i][j] == 0){
                check = 0;
            }
            cout<<path[i][j]<<" ";
        }
        cout<<"\n";
    }

    if(check == 1){
        cout<<"The  Graph is strongly connected\n";
    }
    else{
        cout<<"The graph is not strongly connected\n";
    }

    return 0;
    
}