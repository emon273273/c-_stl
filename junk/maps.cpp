#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int,string>m;
    m[1]="abc";
    m[2]="bcd";

    //arekta way
    m.insert({4,"afg"});
    m.insert({5,"gdks"});
    m.insert({0,"kkk"});


    map<int,string>:: iterator it;

    for(it=m.begin();it!=m.end();it++){

        cout<<(*it).first<<" "<<(*it).second<<endl;

    }
}
