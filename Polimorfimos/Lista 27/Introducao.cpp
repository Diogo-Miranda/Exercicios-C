#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    try{
        cout << "\nAlo mundo";
        // if(true) throw('e');
        if(true) throw(1); // Irá disparar uma excessão que tem argumento n
        cout << "\nAlo mundo 2"; // if(!true) : irá executar esse Alo mundo 2
    }
    catch(int n)
    {
        cout << "\nExcecao " << n; // if(true) irá executar a exceção
    }
    catch(char h)
    {
        cout << "\nExcecao 2 " << h;
    }
    cout << "\nExcecao terminada!"; // Irá executar repois do bloco try
    return 0;
}