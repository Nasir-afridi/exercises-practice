#include<iostream>
using namespace std;

int main(){
int num=57;
cout <<endl;
cout <<"the number is : "<<num<<endl;
num++;
cout <<"the post increment by the number 1 is : "<<num<<endl;
++num;
cout <<"the pre increment by number 1 is : "<<num<<endl;
num=num+1;
cout <<"after increasing the 1 number is : "<<num<<endl;
num--;
cout <<"after post decrement by number 1 is : "<<num<<endl;
--num;
cout <<"after pre decrement by number 1 is : "<<num<<endl;
num=num-1;
cout <<"after decreasing the 1 number is : "<<num<<endl<<endl;
return 0;
}