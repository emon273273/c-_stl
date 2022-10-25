#include<bits/stdc++.h>
using namespace std;

int main(){


    cout<<"emon"<<endl;

    string s;

    s=s+'a';
    s=s+'b';
    s+='c';
    cout<<s;

    s+=' ';

    cout<<endl;

    cout<<s<<endl;

    //size print

    cout<<s.size()<<endl;

    //index dekhte chaile


    cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;

    //amra chaile alada char wise change o korte parbo

s[0]='z';

cout<<s<<endl;

//chaile arekta string jog o korte parbo

string s1="hello";

char s2='.';

s+=s1+s2;
cout<<s<<endl;
}



