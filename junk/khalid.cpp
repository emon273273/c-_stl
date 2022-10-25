#include<bits/stdc++.h>
using namespace std;

int main(){


int t;

cin>>t;


while(t--){

short x,y,z;
cin>>x>>y>>z;

if(x!=y or x!=z or y!=z){

if(x>y and x>z){

    cout<<"Setter"<<endl;
}else if(x<y and x<z){

    cout<<"Editorialist"<<endl;
}
else{

    cout<<"Tester"<<endl;
}

}else{

    return 0;
}




}


}
