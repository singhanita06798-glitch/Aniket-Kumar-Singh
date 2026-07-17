// copy of argument is passed to the funtion

#include <iostream>
using namespace std;

int sum(int a,int b){
    a=a+10;//15
    b=b+10;//14
    int sum=a+b;//29
    return sum;

}

int main(){
    int a=5,b=4;
    cout<<"sum = "<<sum(a,b)<<endl;

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}