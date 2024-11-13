#include <iostream>
using namespace std;

int sumOfSquares(int number){
    int sum=0;
    while(number>0){
        int d=number%10;
        sum+=d*d;
        number=number/10;
    }
    return sum;
}

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Sum of the digits: "<<sumOfSquares(number);
    return 0;
}