#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"enter the b:";
    cin>> b;
    int i ;
    for(i=2; i <= b ; i++ ){
        if(i % 2 == 0){
            cout<< i << "\n";
        }
    }
return 0;
}