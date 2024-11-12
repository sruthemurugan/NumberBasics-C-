#include <iostream>
using namespace std;

int main(){
   int num=54321;
   int sum=0;

   while(num!=0){
    sum=sum*10+(num%10);
    num=num/10;
    
   }
   cout<<sum;
   return 0;

}