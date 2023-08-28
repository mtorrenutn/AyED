#include <iostream>
#include <iomanip>

using namespace std;


double calcularPi() {
    double pi = 0.0;
    double termin = 1.0;
    int den= 1;
    int icont = 0;
    
    while (termin >= 1e-7) {
        if (icont % 2 == 0) {
            pi += termin;
        } else {
            pi -= termin;
        }

        den += 2;
        termin = 1.0 / den;
        icont++;
    }

    return pi * 4;
}

int main() {
  
    
    cout << setprecision(6) << fixed;
    cout << "Pi: " << calcularPi() << endl;
    
    return 0;
}




