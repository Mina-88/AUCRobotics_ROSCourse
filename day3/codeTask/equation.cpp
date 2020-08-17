#include <iostream>
#include <math.h>

using namespace std;

double f(double mu, double sigma2, double x)
{
    double sd = sqrt(sigma2);
    double prob = (1 / (sd/sqrt(2*M_PI)))
     * pow(exp(1), (-1/2) * pow((x - mu)/sd , 2));
    return prob;
}

int main()
{
    cout << f(10.0, 4.0, 8.0) << endl;
    return 0;
}