/*
Print the pattern
    1
  2 3
4 5 6
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n"<<endl;
    cin>> n;
    int i=1;
    int val = 1;
    while(i<=n){
        int k = 1;
        while(k<= n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=i){
            cout<<val;
            j = j+1;
            val = val + 1;

        }
        cout<<endl;
        i = i+1;
    }
}

