#include "iostream"
using namespace std;


class Complex
{
    private:
        int real;
        int imag;
    public:
        Complex (int get_real, int get_imag)
        {
            GetNum (get_real, get_imag);
        }
        void GetNum (int get_real, int get_imag)
        {
            real = get_real;
            imag = get_imag;
        }
        int GetReal ()
        {
            return real;
        }
        int GetImag ()
        {
            return imag;
        }
        void PrintNum ()
        {
            cout << "Real: " << real << " Imag: " << imag << endl;
        }

};

Complex operator + (Complex c1, Complex c2)
{
    int newreal = c1.GetReal()+c2.GetReal();
    int newimag = c1.GetImag()+c2.GetImag();
    Complex ans (newreal, newimag);
    return ans;
}

Complex operator * (Complex c1, Complex c2)
{
    int newreal = c1.GetReal()*c2.GetReal()-c1.GetImag()*c2.GetImag();
    int newimag = c2.GetReal()*c1.GetImag()+c1.GetReal()*c2.GetImag();
    Complex ans (newreal, newimag);
    return ans;
}

int main ()
{
    Complex c1 (2, 3);
    Complex c2 (3, 4);
    Complex c3 (0, 0);
    Complex c4 (0, 0);
    c3 = c1+c2;
    c4 = c1*c2;
    c3.PrintNum();
    c4.PrintNum();
}


