#include<bits/stdc++.h>

using namespace std;

int main(){

string s;

cin>> s;


cout<<s<<endl;

// reverse(s.begin(),s.end());
// cout<<s;


//arekta way
int len=s.length();
int n=len;
for(int i=n;i>=0;i--){

    cout<<s[n];
}

return 1;
}
