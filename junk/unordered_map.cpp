//maps use kore table but unordered hash table use kore

#include<bits/stdc++.h>
using namespace std;


 void print_unorderd(unordered_map<int,string>&m){

    cout<<m.size()<<endl;
    for(auto &pr:m){

        cout<<pr.first<<" "<<pr.second<<endl;
    }
 }
int main(){

unordered_map<int, string>m;


    m[1]="abc";
    m[2]="cdc";

    m[3]="efg";
    m[4]="kgka";

print_unorderd(m);




}
