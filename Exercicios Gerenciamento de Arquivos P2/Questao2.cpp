#include <iostream>

using namespace std;

class Quadrado {
    private: 
        float lado;
    public :
        Quadrado(){
            this->lado=0;
            cout << "\nUma instancia de quadrado foi criada\n";
        }

        ~Quadrado(){
            cout << "\nEntidade Destruida!\n";
        }

        void setLado(float lado){
            this->lado=lado;
        }

        float getLado(){
            return lado;
        }

        float area(){
            float area = lado*lado;
            return area;
        }

        float perimetro(){
            float perimetro = 4*lado;
            return perimetro;
        }
};

float lerLado(){
    float lado;
    bool ERRO;
    do {    
        cout << "\nInforme o lado do quadrado: ";
        cin >> lado;
        ERRO = lado < 0;
        if(ERRO) cout << "\nLado invalido";
    } while(ERRO);
    return lado;
}

int main() {

    Quadrado *Q1 = new Quadrado();
    float lado = lerLado();
    Q1->setLado(lado);
    float perimetro = Q1->perimetro();
    cout << "\nO perimetro do quadrado eh: " << perimetro;
    float area = Q1->area();
    cout << "\nA area do quadrado eh: " << area;
    return 0;
}