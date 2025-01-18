#include <iostream>

using namespace std;

int main() {

    int i , num , first=0 , second = 1 , next;

    cout<<"enter the number of terms you need in the series : ";
    cin>>num;

    cout<<"fibonacci series : "<<endl;

    for(i=0 ; i<num ; i++){
        cout<<first<<endl;
        next = first + second;
        first = second ;
        second = next ;
        
    }

}