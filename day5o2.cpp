#include<iostream>
using namespace std;

int main(){

    int i,n,sum;

    sum = 0;

    cout<<"enter upto which natural number: ";
    cin>>n;

    for(i=1 ; i<=n ; i = i+1){

        sum = sum + i ;

    }

    cout<<sum<<endl;


    
}
