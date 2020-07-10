#include <iostream>

using namespace std;

class Excecao { };

int main()
{
    try{
        cout << "\nAlo mundo";
        if (true) throw Excecao();
        cout << "\nAlo mundo 2";
    }catch(Excecao excecao)
    {
        cout << "\nExcecao lancada";
    }
    cout << "\nInstrucao try encerrada!";
    return 0;
}