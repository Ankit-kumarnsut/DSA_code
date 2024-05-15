#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    int ans=0,rem;
    while (n>0)
    {
       rem=n%10;
       n/=10;
       ans=ans*10+rem;

    }cout <<ans<<endl;
    
return 0;


}