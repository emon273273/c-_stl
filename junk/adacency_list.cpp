#include<bits/stdc++.h>
using namespace std;



// int graph[N][N];
int graph1[100];

int main(){


    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){

        int v1,v2;

        cin>>v1>>v2;
        // graph[v1][v2]= 1;
        // graph[v2][v1]=1;
        graph1[v1]=v2;

        graph1[v2]=v1;


    }

      for(int i=0;i<m;i++){
       
      cout<<graph1[i]<<" ";
    }
} 