#include<iostream>
using namespace std;
int main(){

    int n = 10;
    int sum = 0;

    for( int i = 1; i<=n ; i++){
        if(i%2==0){
            sum = sum+i;
        }
    }

    cout<<"Sum of even no.s "<<sum<<endl;

    return 0;

}