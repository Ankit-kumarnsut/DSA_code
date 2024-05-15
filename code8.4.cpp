#include<iostream>
using namespace std;
// int main(){
// int mx=-19999999;
// int n;
// cin>>n;
// int a[n];
// for (int  i = 0; i < n; i++)
// {
//    cin>>a[i];
// }
// for (int  i = 0; i <n ; i++)
// {
//    mx=max(mx,a[i]);
//    cout<<mx<<endl;
// }

//     return 0;
// }
// int main(){
//  int n;
//  cin>>n;
//  int a[n];
//  for (int i = 0; i < n; i++)
//  {
//     cin>>a[i];
//  }
// int curr=0;
// for (int  i = 0; i < n; i++)
// {
//     curr=0;
//     for (int j = i; j < n; j++)
//     {
//       curr+=a[j];
//       cout<<curr<<endl;
//     }
    
// }


 

//     return 0;
// }

int main(){
 int n;
 cin>>n;
 int a[n];
 for (int  i = 0; i <n; i++)
 {
    cin>>a[n];
 }
 int ans=2;
 int pd=a[1]-a[0];
 int j=2;
 int curr=2;
 while (j<n)
 {
    if (pd==a[j]-a[j-1])
    {
       curr++;
    }else{
        pd=a[j]-a[j-1];
        curr=2;
    }
    ans=max(ans,curr);
    
    j++;
 }
 cout<<ans<<endl;
 

    return 0;
}