#include<iostream>
using namespace std;

// int sum(int m,int n)//function declare 
// {
//     int ans =m+n;// function define 
//     return ans;
// }
// int Mul(int m,int n){
//     int ans =m*n;
//     return ans ;
// }
// void fun(){
//     cout<<"hello coder \n";
// }
// int main(){
//     int a,b;
//     cout<<"Enter 2 number ";
// //function call 
//     cin>>a>>b;
//     cout<<sum(a,b);
//     cout<<endl;
//     cout<<Mul(a,b);
//     cout<<endl;
//     fun();
// }


//  bool prime(int n)
//  {
//     if (n<2)
//     return 0;

//     for (int i=2;i<n;i++){
//         if(n%i==0)
//         return 0;
//     }
//     return 1;

//  } 
//  int fact(int n){
//     int ans =1;
//     for (int i=1;i<n;i++)
//     ans =ans*i;
//     return ans ;
//  }
 

// int main(){


//     int a,b;
//     cout<<"Enter the number ";
//     cin>>a>>b;

//     // A is prime or not 
//     cout<<prime (a)<<endl;
//     // A ka Factorial
//     cout<<fact(a)<<endl;
//     //B is prime or not 
//     cout<<prime (b)<<endl;
//     //B ka Factorial 
//     cout <<fact(b)<<endl;
//     //B-A is prime or not 
//     cout <<prime(b-a)<<endl;
//     //B-A ka factorial 
//     cout <<fact(b-a)<<endl;

// }

//swaping two number 
void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
}
void swap(float &c,float &d){
    float r=c;
    c=d;
    d=r;
}

int main(){

    int a ,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<" "<<endl;
    float f1=4.8,f2=8.9;
    swap(f1,f2);
    cout<<f1<<" "<<f2;
}