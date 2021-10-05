#include <iostream>
#include <math.h>

double power(double value, double exp=0.5) {
    return pow(value, exp);
}
int main() {
    //printf("Hello World from C/C++\n");

    /*int i;
    for ( i=0; i <10; ++i){
        printf("%")
    }*/
    double  result, result1;

    result = power(2, 3);
    result1 = power(9);
    std::cout << "power (2,3) =  " << result << "\n" ;
    std::cout << "power (9) =  " << result1 << "\n";

    return 0;
}