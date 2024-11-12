#include <iostream>
using namespace std;

int numRev(int num , int sum){
    while(num!=0){
    sum=sum*10+(num%10);
    num=num/10;
   }
   return sum;
}

bool palindrome(int sum,int num){
    if(sum==num){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

int main(){
    int num=1221;
    int sum=0;

   cout<<palindrome(sum,num);
   return 0;
}