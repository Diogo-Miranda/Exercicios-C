#include <iostream>
#include <stdexcept>

using namespace std;

class Excecao : public runtime_error {
    public:
        Excecao(int n) : runtime_error("\nEssa carta nao existe :(") {
            cout << "\nErro na linha: " << n;
        }
};

int main()
{
    try
    {
        int resp;
        cout << "\n ---------- CARTA ESCONDIDA ------------ \n";
        cout << "\n1 - Mensagem de amor";
        cout << "\n2 - Mensagem triste";
        cout << "\n3 - Mensagem alegre";
        cout << "\n4 - Mensagem motivacional";
        cout << "\nInforme o numero da carta que irei revelar a mensagem secreta: ";
        cin >> resp;
        
        switch (resp)
        {
        case 1 :
            cout << "\nNao tenho medo do amanha porque ja vi o passado e amo o dia de hoje";
            break;
        case 2 :
            cout << "\nAquele que nunca viu a tristeza, nunca reconhecera a alegria";
            break;
        case 3 :
            cout << "\nHoje voce tem duas opcoes: ser feliz ou ser mais feliz";
            break;
        case 4 : 
            cout << "\nSeja seu proprio incentivo";
        default :
            throw Excecao(__LINE__);
            break;
        }
        
    }catch(Excecao e)
    {
       e.what();
    }
    return 0;
}
