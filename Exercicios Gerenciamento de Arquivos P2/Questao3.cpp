#include <iostream>

using namespace std;

class Quadrado{
    private:
        float lado;
    public:
        Quadrado() {
            this->lado = 0;
            cout << "\nUma instancia de quadrado foi criada!";
        }

        ~Quadrado() {
            cout << "\nEssa instancia foi destruida!\n";
        }

        void setLado(float lado){
            this->lado = lado;
        }

        float getLado() {
            return lado;
        }

        float area() {
            float area;
            area = lado*lado;
            return area;
        }

        float perimetro() {
            float perimetro;
            perimetro = 4*lado;
            return perimetro;
        }
};

float lerLado() {
    float lado;
    bool ERRO;

    do {
        cout << "\nInforme o lado desejado: ";
        cin >> lado;
        ERRO = lado < 0;
        if (ERRO) cout << "\nValor do lado invalido";
    } while (ERRO);
    
    return lado;
}


int main() {
    Quadrado* quadrados[5];
    float lado;
    float area;
    float perimetro;

    for(int i = 0; i < 5; i++) {
        quadrados[i] = new Quadrado();
        lado = lerLado();
        quadrados[i]->setLado(lado);
        perimetro = quadrados[i]->perimetro();    
        area = quadrados[i]->area();
        cout << "\nA area do quadrado " << i+1 << " eh : " << area;
        cout << "\nO perimetro do quadrado " << i+1 << " eh : " << perimetro;
    }

    return 0;
}