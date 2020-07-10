#include <iostream>
#include <stdexcept>

using namespace std;

class DivisaoPorZero : public runtime_error {
    public:
        DivisaoPorZero():runtime_error("Operacao por zero nao definida") {}
};

int main()
{
    try{
        cout << "\nDivisao inteira";
        int a; cout << "\nA= "; cin >> a;
        int b; cout << "\nB= "; cin >> b;
        if(b == 0) throw DivisaoPorZero();
        int c= a/b;
        cout << "\na/b= " << c; 
    } catch(DivisaoPorZero &ex)
    {
        cout << ex.what();
    }
    return 0;
}