#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n%2==0){   
        cout<<"It is a prime number";

    }
    if(n%2!=0){
        cout<<"It is not a prime number";
    }
}