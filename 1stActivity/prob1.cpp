// palindrome fxn
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string n,temp;
    cin>>n;
    n=temp;
    reverse(temp.begin(),temp.end());
    if(n==temp){
        cout<<"It is palindrome...";
    }
    else{
        cout<<"It is not palindrome...";
    }
    return 0;
}