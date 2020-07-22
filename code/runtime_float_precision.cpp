#include <iostream>
#include <iomanip>

using namespace std;

// what type to use
using precision_type = long double;

int main() {
    // set up our variables
    precision_type val = 1e10, max = 1e3, step = 1e-4, start = 1.0;
    
    // repeatedly do nothing
    // if precision were perfect this would not change `val`
    for (precision_type i = start; i <= max; i += step) {
        val *= i;
        val += i;
        val /= i;
        val -= 1;
    }
    
    // tell us what `val` is after all those iterations
    cout << fixed << setprecision(10) << val << '\n';
}