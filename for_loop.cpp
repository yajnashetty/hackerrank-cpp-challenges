#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n , m;
    string str[] = {"one","two","three","four","five","six","seven","eight","nine"};

    cin>>n;
    cin>>m;
    for(int i = n; i<=m;i++)
    {
        if (i<=9)
        {
            cout<<str[i-1]<<endl;
        }
        else if(i>9)
        {
            if(i%2==0)
            {
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }

    return 0;
}