#include <iostream>
using namespace std;

int oddEven(int num){
    if(num%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}

int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    oddEven(a);
}