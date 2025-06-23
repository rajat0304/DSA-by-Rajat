#include<iostream>
using namespace std;
// function to find factorial.
int factorial(int num){
    int fact =1;
    for(int i=1;i<=num;i++){
        fact *= i;
    }
    return fact;
}
// function to find calculate nCr.
int nCr(int n,int r){
    int result = factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}
//actual code start
int main(){
    int n,r;
    cout<<"enter value of n:";
    cin>> n;
    cout<<"enter value of r:";
    cin>> r;
    if(r>n){
        cout<<"invalid input!"<<endl;
    }else{
        int result = nCr(n,r);
        cout<<"nCr = "<< result<<endl;
    }
    return 0;
}