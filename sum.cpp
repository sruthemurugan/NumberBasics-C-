#include <iostream> 
using namespace std;

int main(){
    int number;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>number;

    while(number!=0){
        sum+=number%10;
        number/=10;
    }
    cout<<"Sum of digits is: "<<sum;
    return 0;
}