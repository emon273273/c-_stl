#include<bits/stdc++.h>
using namespace std;


 void printvec(std::vector<pair<int,int>> &v){

cout<<"size:"<<v.size()<<endl;

for(int i=0;i<v.size();i++){

    cout<<v[i].first<<" "<<v[i].second<<endl;
}
cout<<endl;
}


int main(){


//     vector<int> v1;


// vector<int>:: iterator  it;

//     for(int i=0;i<5;i++){
// int a;
// cin>>a;
//          v1.push_back(a);
//     }



// for(it=v1.begin();it!=v1.end();it++){


//     cout<<*it<<endl;
// }

// vector<int > v2(12,20);

// swap(v2,v1);

// cout<<"after swap"<<endl;

// for(auto element:v2){

//     cout<<element<<endl;
// }

// cout<<"ager v1"<<endl;

// for(auto el:v1){


//     cout<<el;
// }




/*pairs*/


std::vector<pair<int,int>> v={{1,2},{2,3},{3,4}};

printvec(v);


}
