#include<iostream>
using namespace std;

int main(){
int n1=2147483647,n2=2147483647;
cout <<"overflow the integer range and set it in minimum range : "<<n1+1<<endl;
cout <<"increasing from it minimum range : "<<n1+2<<endl;
cout <<"product is : "<<n1*n1<<endl<<endl;
cout <<"underflow the integer and set it in maximum range : "<<n2-1<<endl;
cout<<"decreasing a number : "<<n2-2<<endl;
cout <<"pproduct is : "<<n2*n2<<endl<<endl; 
    return 0;
}