#include<iostream>
using namespace std;

// sum of n natural number
int sum(int n){
    int ans=0;
    for (int i = 1; i <=n; i++)
    {
        ans+=i;
    }
    return ans;
}
int main (){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}