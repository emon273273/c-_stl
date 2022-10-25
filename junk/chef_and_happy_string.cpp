#include<bits/stdc++.h>
using namespace std;

int main(){


    int t;

    cin>>t;

    while(t--){

        string s;
cin>>s;
        int count=0;
        bool flag=0;


        for(int i=0;i<s.length();i++){

            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'|| s[i]=='u'){

                count++;

            }else{
                count=0;

            }

            if(count==3){

            cout<<"Happy"<<endl;
            flag =1;
            break;
        }
        }


if(flag==0){

    cout<<"sad"<<endl;
    }
}
}
