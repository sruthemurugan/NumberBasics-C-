#include <iostream>
using namespace std;

int factorial(int num){
    if(num==1 or num==0){
        return 1;
    }
    else {
        return (num*factorial(num-1));
    }
}

int main(){
    int num=5;

    cout<<"Factorial is:"<<factorial(num);
}