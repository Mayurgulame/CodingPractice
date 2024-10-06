#include<iostream>
using namespace std;

int sumRec(int n){
    if(n==0) 
    return 0;
    
    return  n+sumRec(n-1);

}

int main(){
    int n=5;
    cout<<sumRec(n)<<endl;
    return 0;
    
}