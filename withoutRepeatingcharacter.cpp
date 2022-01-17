#include<bits/stdc++.h>
using namespace std;


int main(){


string s="geeksforgeeks";
int n=s.length();
int i=0,j=0;
int maxL=INT_MIN;
unordered_map<char,int>mpp;

int x=0,y=0;
while(j<n){

mpp[s[j]]++;
int count=mpp.size();

if(maxL<count){
    maxL=count;
    x=i;
    y=j;
}

if(mpp[s[j]]==2){

    while(mpp[s[j]]==2){

    mpp[s[i]]--;


    if(mpp[s[i]]==0)
mpp.erase(s[i]);


    i++;
    }
}

j++;


}

cout<<maxL;


for(int g=x;g<=y;g++)
cout<<s[g]<<" ";

    return 0;

}
