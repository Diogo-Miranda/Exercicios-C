#include <iostream>
#include <stdexcept>

using namespace std;

class Excecao : public runtime_error
{
    public :
    Excecao() : runtime_error("\nMensagem da classe mae runtime_error") // Só irá executar se foi lançado what()
    {

    }
};

int main()
{
    try 
    {
        cout << "\nAlo mundo";
        if (true) throw Excecao();
        cout << "\nAlo mundo 2";
    } catch(Excecao &excecao)
    {
        cout << excecao.what(); // Pergunta a mae qual erro  
        cout << "\nMensagem do catch";
    }
    cout << "\nInstrucao catch encerrada!";
    return 0;
}