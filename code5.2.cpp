#include <iostream>
#include<cmath>
using namespace std;
int main()
{ // check given number is prime number
    // int n;
    // cin >> n;
    // bool flag=0;
    // for (int i = 2; i < sqrt(n); i++)
    // {
    //     if (n % 2 == 0)
    //     {
    //         cout << "Non -prime" << endl;
    //         flag=1;
    //         break;
    //     }
    // }if(flag==0){
    //     cout<<"Prime"<<endl;
    // }
// reverse the given number 
//     int n;
//     cin>>n;
//     int reverse;
//     while(n>0)
// {
//     int lastdigit=n%10;
//  reverse =reverse*10 +lastdigit;
//  n=n/10;

// }
// cout<<reverse<<endl;

// check if a given number is Armstrong number or not
// int n;
// cin>>n;
// int sum=0;
// int oldno=n;
// while(n>0){
//     int lastdigit=n%10;
//     sum+=pow(lastdigit,3);
//     n=n/10;
// }
// if(sum==oldno){
//     cout<<"Armstrong Number"<<endl;
// }
// else{
//     cout<<"NOt Armstrong number"<<endl;
// }

// print all the digits of a postive decimal number from rigth to left
// int n;
// cin>>n;
// while(n>0){
//     int rem=n%10;
//     cout<<rem<<"\n";
//     n=n/10;
// }


// calculating the factorial of a number n 
// int n;
// cin>>n;
// int fac=1;
// for(int i=1;i<=n;i++){
//     fac=fac*i;
// } 
// cout<<fac<<"\n";


// print Fibonacci series 
int n;
cin>>n;
if(n==1){
    cout<<"0\n";
}else if(n==2){
    cout<<"0 1\n";

}else{
    int curr_f,a=0,b=1,i=3;
    cout<<a<<" "<<b<<" ";
    while(i<=n){
        curr_f=a+b;
        cout<<curr_f<<" ";
        a=b;
        b=curr_f;
        i++;
    }
    cout<<"\n";
}
    return 0;
}