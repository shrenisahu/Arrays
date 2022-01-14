#include<bits/stdc++.h>
using namespace std;


int main(){

int arr[]={7,-1,-2,3,4,-5,6,7,8};
int n=9;
int i=0,j=0;
int k=3;

list <int>ans;
while(j<n){
if(arr[j]<0){
    ans.push_back(arr[j]);
}

    if(j-i+1<k)
    {
        j++;
    }

    else if(j-i+1==k){

if(ans.size()==0)
cout<<"0";



else cout<<ans.front()<<"  ";


if(arr[i]==ans.front()){
    ans.remove(arr[i]);
}
;

i++;
j++;
    }
}


    return 0;
}
