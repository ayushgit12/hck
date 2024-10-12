#include<iostream>
using namespace std;

int main(){
    int len;
    cin>>len;
    int arr[len];
    for (int  i = 0; i < len; i++)
    {
        cin>>arr[i];
    }
    int hash[100]={0};
    for (int i = 0; i < len; i++)
    {
        hash[arr[i]]+=1;
    }
    int h=0,l=101;
    for (int i = 0; i < len; i++)
    {
        if(hash[arr[i]]>h)
            h=hash[arr[i]];
        if(hash[arr[i]]<l)
            l=hash[arr[i]];
    }
    cout<<"Highest frequency element : "<<h<<endl;
    cout<<"Lowest frequency element : "<<l<<endl;
    
    
}