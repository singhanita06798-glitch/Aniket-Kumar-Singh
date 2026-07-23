#include <iostream>
using namespace std;

void inc(int *x){

    *x = *x+1;
}

int a=5;
inc(&a);