#include<bits/stdc++.h>

using namespace std;

void print(set<string>&s){

    for(string value:s){
        cout<<value<<endl;
    }
}
int main(){

// set<string>s;


// s.insert("abc");
// s.insert("zsdf");
// s.insert("bcd"); //log(n)

// auto it=s.find("abc");

// if(it!=s.end()){

//     cout<<*it<<endl;
// }

// unique gulo delete kore
/*
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
*/


set<string>s;

int n;
cin>>n;

for(int i=0;i<n;i++){

    string str;
    cin>>str;

    s.insert(str);
}

print(s);
}
