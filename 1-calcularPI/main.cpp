#include <iostream>
using namespace std;

double calculoPI() {
double pi=0.0 ;
int sig=1;
int denom=1;

int interacionesmax =1000000;

for (int i=0; i <interacionesmax; i++) {

    pi +=sig *(1.0/denom);

    sig *= -1;

    denom +=2;

}

    return pi*4;
}


 int main(){
 double pi= calculoPI();

 cout.precision(7);
 cout<< "el valor de pi es=" <<pi << endl;
 }




