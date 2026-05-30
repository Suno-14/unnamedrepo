#include <iostream>
#include <cmath>
using namespace std;

class Arithmetic2var
{
    public:
        double addition(const double &n1, const double &n2)
        {
            return n1+n2;
        }
        
        double subtraction(const double &n1, const double &n2)
        {
            return n1-n2;
        }
        
        double multiplication(const double &n1, const double &n2)
        {
            return n1*n2;
        }

        double division(const double &n1, const double &n2)
        {
            if (n2==0) throw invalid_argument("Cannot divide by zero!");

            else return n1/n2;
        }

};

int main()
{
    Arithmetic2var maths;
    double a, b;
    cout<<"enter input a:"<<endl;
    cin>>a;
    cout<<"enter input b:"<<endl;
    cin>>b;
    cout<<"\na+b:\n"<<maths.addition(a,b)<<endl;
    cout<<"\na-b:\n"<<maths.subtraction(a,b)<<endl;
    cout<<"\na*b:\n"<<maths.multiplication(a,b)<<endl;
    cout<<"\na/b:\n"<<maths.division(a,b)<<endl;
    return 0;
};
