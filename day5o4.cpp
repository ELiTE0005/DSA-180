#include<iostream>
using namespace std;

int main () {

    int n,i;

    cout<<"enter number : ";
    cin>>n;

    if(n<2){
        cout<<"not a prime";
        return 0;

    }

    else {

        for (i=2 ; i<n ; i = i+1){
            if (n%i==0){
                cout<<"not a prime number";
                return 0;
            }
        }

        cout<<"a prime number";
        return 0;
    }




}