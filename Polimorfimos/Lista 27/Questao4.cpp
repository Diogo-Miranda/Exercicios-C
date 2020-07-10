#include <iostream>

using namespace std;

class Excecao {
    public:
        void mensagem() {
            cout << "\nGerada Excecao";
        }
};

int main()
{
    try 
    {
        cout << "\nAlo mundo!";
        if (true) throw Excecao();
    }catch(Excecao excecao) {
        excecao.mensagem();
    }
    cout << "\nInstrucao try terminada!";
    return 0;
}