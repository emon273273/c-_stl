#include<bits/stdc++.h>

using namespace std;
int main()
{
    // Complete the code.
/*stack in c++*/
stack<int>s;

s.push(21);
s.push(3);
s.push(6);

s.push(53);

while(!s.empty()){

    cout<<s.top()<<" ";
    s.pop();
   }

}
