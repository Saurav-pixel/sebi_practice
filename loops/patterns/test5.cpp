// program to print the following pattern
/*
1
2 3
4 5 6
7 8 9 10

*/
#include<iostream>
using namespace std;

int main(){

int rows,columns,n,val;
cout<<"Enter the value of n" <<endl;
cin >>n;
rows=1;
val = 1;
while(rows<=n){
    columns = 1;
    while(columns <= rows){
       cout<<val<<" ";
       columns = columns + 1;
       val = val +1;
    }
    cout<<endl;
    rows = rows +1;
}
}