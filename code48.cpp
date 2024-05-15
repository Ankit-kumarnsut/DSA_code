#include <iostream>
using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
//     float f1=4.8,f2=7.9;
//     swap(f1,f2);
//     cout<<f1<<" "<<f2<<endl;
// }\\\\\

char convert(char name)
{
    if (name >= 'a' && name <= 'z')
    {
        char ans = name - 'a' + 'A';
        return ans;
    }
    else if (name >= 'A' && name <= 'Z')
    {
        char ans = name - 'A' + 'a';
        return ans;
    }
    return name;
}

int main()
{

    char name;
    cin >> name;
    cout << convert(name);
}