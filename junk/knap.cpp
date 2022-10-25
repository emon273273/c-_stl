#include<bits/stdc++.h>
using namespace std;

const int N=100;


int wt[105],val[105];
long long dp[105][1000];
std::vector<int> wi;

long long func(int ind,int wt_left){

    if(wt_left==0){

        return 0;
    }

    if(ind<0){

        return 0;
    }
    if(dp[ind][wt_left]!=-1){


        return dp[ind][wt_left];
            }
// cout<<dp[ind][wt_left]<<endl;
            

   long long ans= func(ind-1,wt_left);


   if(wt_left-wt[ind]>=0){

wi.push_back(ind);

 ans=max(ans,func(ind-1,wt_left-wt[ind])+val[ind]);



 
    }

    
    // cout<<ans<<endl;
    return dp[ind][wt_left]=ans;


}

int main(){

memset(dp,-1,sizeof(dp));
    int n,w;

    cin>>n>>w;
    

        for(int i=0;i<n;i++){

            cin>>wt[i]>>val[i];
        }



    cout<<"total value  "<<func(n-1,w)<<endl;

   








 

    }

    