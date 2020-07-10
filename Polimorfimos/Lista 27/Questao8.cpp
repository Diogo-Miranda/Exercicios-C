#include <iostream>
#include <stdexcept>

using namespace std;

class DivisaoPorZero : public runtime_error {
    public:
        DivisaoPorZero() : runtime_error("\nDivisao por zero nao definida")
        {

        }
        DivisaoPorZero(int n) : runtime_error("\nDivisao por zero nao definida")
        {
            cout << "\nErro na linha " << n;
        }
};  

int divisaoInteira(int a, int b)
{
    if(b == 0) throw DivisaoPorZero(__LINE__);
    return a / b;
}

int main()
{
    try
    {
        int a;
        cout << "\nA = "; 
        cin >> a;

        int b;
        cout << "\nB = ";
        cin >> b;
        
        int divInteira = divisaoInteira(a,b);
        cout << "\nDivisao inteira = " << divInteira;
    } catch (DivisaoPorZero &ex)
    {
        cout << ex.what();
    }
    return 0;
}