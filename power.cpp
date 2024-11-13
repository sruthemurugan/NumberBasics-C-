#include <iostream>
using namespace std;

int powerOfNumber(int num,int pow){
    int result=1;
    for(int i=1;i<=pow;i++){
        result=result*num;
    }
    return result;
}

int main(){
    int num;
    int pow;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the power: ";
    cin>>pow;

    cout<<"Power of the number is: "<<powerOfNumber(num,pow);
}