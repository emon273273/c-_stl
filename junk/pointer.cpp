 #include<bits/stdc++.h>

using namespace std;

int main(){

	int x=5;

	int *p;
cout<<x<<endl;
	p=&x;
	*p=6;

	cout<<x;

	int **q;
	q=&p;
	**q=7;
	cout<<x;
}