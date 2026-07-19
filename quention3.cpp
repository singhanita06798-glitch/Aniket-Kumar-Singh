// Calculate sum of digit of a number

#include<iostream>
using namespace std;

int sumOfdigit(int num){
    int digSum=0;

    while(num>0){
        int lastDig=num%10;
        num=num/10;

        digSum +=lastDig;
    }

    return digSum;
}
int main(){

    cout<<"Sum of Digit : "<<sumOfdigit(2356)<<endl;

    return 0;
}
