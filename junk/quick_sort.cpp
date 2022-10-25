#include<bits/stdc++.h>
using namespace std;
int a[100];
int mid;
int partition(int low,int high){

    int pivot,i,j,t;
mid=(low+high)/2;
    pivot=mid;

    i=low;
    int temp;

j=high;

// for(;i<j;i++){

// if(a[i]>=pivot &&a[j]<=pivot){

//         temp=a[j];
//         a[j]=a[i];
//         a[i]=temp;
//         i++;
//         j--;

// }
// else{
//         i++;
//     }}

while(i<j){


    if(a[i]>=pivot &&a[j]<=pivot){

        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        i++;
        j--;
    }else{
        i++;
    }

  
}

return i;
}


void quick_sort(int low,int high){
    

    if(low<high){

        
    int p=partition(low,high);
    quick_sort(low,mid);
    quick_sort(p+1,high);
    }
    
}





int main(){



int n;
cin>>n;

for(int i=0;i<n;i++){

    cin>>a[i];
}

quick_sort(0,n-1);

for(int i=0;i<n;i++){

    cout<<a[i]<<" ";
}
}