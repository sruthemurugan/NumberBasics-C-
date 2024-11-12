#include <iostream>
using namespace std;

int productNumber(int num){
    int prod=1;
    while(num!=0){
        prod*=num%10;
        num/=10;
        
    }
    return prod;
}

int main(){
   int num;
    
    cout<<"Enter a number: ";
    cin>>num;
    
    cout<<"Product of the number is "<<productNumber(num);
}