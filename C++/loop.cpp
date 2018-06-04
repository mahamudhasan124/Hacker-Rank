#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,a,b;
    string str[10] = {"","one","two","three","four","five","six","seven","eight","nine"};
     cin>>a>>b;
    for(i=a;i<=b;i++){
        if(i<=9){
            cout<<str[i]<<endl;
        }
        else{
            if(i%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }
}
