#include<iostream>
using namespace std;

int naturalNumber(int num){
    int sum;
    for(int i=0;i<=num;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    cout<<"Sum of first "<<n<<" natural number is : "<<naturalNumber(n);
}