#include <iostream>

using namespace std;
void sortPrimeNumbers(int,int);
int main()
{
    int a,b;
    cout<<"Enter the minimum value of the range:";
    cin>>a;
    cout<<"Enter the maxsimum value of the range:";
    cin>>b;
    sortPrimeNumbers(a,b);
    return 0;
}
//Function that detects prime numbers in the closed interval a, b.
void sortPrimeNumbers(int a, int b)
{
    for(a; a <= b; a++)
    {
        if(a == 2 || a==3 || a==5)
            cout<<a<<"  ";
        if(a%2 != 0)
            if(a%3 != 0)
                if(a%5 != 0)
                    if(a != 1)
                        cout<<a<<"  ";
    }
}
