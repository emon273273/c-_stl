#include<bits/stdc++.h>

using namespace std;

int main(){

 int t;
 cin>>t;

 while(t--){

    int n,p,x,y;

    cin>>n>>p>>x>>y;
    std::vector<int> v(n);
    int final_time=0;


    for(int i=0;i<n;i++){



cin>>v[i];


    }

for(int i=0;i<p;i++){

    if(v[i]==0){

        final_time=final_time+x;
    }else{
        final_time=final_time+y;
    }

}

 cout<<final_time<<endl;

 }


}
