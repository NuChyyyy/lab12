#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[],int n,double b[])
{
    double sum = 0,sum1 = 0,sum2 = 1,sum3 = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    b[0] = sum/n;
    for(int i = 0; i < n; i++)
    {
        sum1 += pow(a[i] - b[0],2);
    }
    b[1] = sqrt(sum1/n);
    for(int i = 0; i < n; i++)
    {
        sum2 *= a[i];
    }
    b[2] = pow(sum2,(1.0/n));
    for(int i = 0; i < n; i++)
    {
        sum3 += (1/a[i]);
    }
    b[3] = n/sum3;
    double min = a[0],max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max) max = a[i];
        else if(a[i] < min) min = a[i];
    }
    b[4] = max;
    b[5] = min;
}
