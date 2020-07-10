#include <iostream>

using namespace std;

class Quadrado 
{
    private:
        float lado;

    public:
        void setLado(float l) {
            lado = l;
        }

        float getLado() {
            return lado;
        }

        float perimetro() {
            float perimetro = 4*lado;
            return perimetro;
        }

        float area() {
            float area = lado*lado;
            return area;
        }

        void lerLado() {
            cout << "Informe o lado do quadrado: ";
            cin >> lado;
        }
};

int main() 
{
    Quadrado quadrado;
    quadrado.lerLado();
    float perimetro = quadrado.perimetro();
    cout << "\nO perimetro do quadrado eh: " << perimetro;
    float lado = quadrado.getLado();
    cout << "\nO lado do quadrado eh: " << lado;
    
    return 0;
}