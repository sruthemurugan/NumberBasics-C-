 #include<iostream>
 using namespace std;
 
 
bool isPrime(int num){
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            return false; //not a prime
        }
    }
    return true; //prime
}
 
int main(){
        int num;
        cout<<"Enter the no: ";
        cin>>num;
        
        if(isPrime(num)){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not a prime"<<endl;
        }
    }
