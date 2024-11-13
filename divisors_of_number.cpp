#include <iostream>
using namespace std;

void divisorOfNumber(int num){
    cout<<"Divisors of "<<num<<" are: ";
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<"  ";
        }
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    divisorOfNumber(num);
    return 0;
}