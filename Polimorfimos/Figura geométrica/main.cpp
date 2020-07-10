#include <iostream>
#include <string.h>

using namespace std;

class Figura 
{
    private:
        float lado;
        static int qntFiguras;

    public: 

        virtual float area() = 0;

        Figura() 
        {
            this->lado = 2;
            qntFiguras++;
        }

        float getLado()
        {
            return this->lado;
        }

        void setLado(float lado)
        {   
            this->lado = lado;
        }

        static int getQntFiguras()
        {
            return qntFiguras;
        }
};

class Quadrado : public Figura 
{
    public:

        Quadrado()
        {
            setLado(1);
        }

        Quadrado(float lado)
        {
            setLado(lado);
        }

        float area() 
        {
            float lado = getLado();
            float area = lado*lado;
            return area;
        }
};

int Figura::qntFiguras = 0;

int main () 
{
    Figura* figura = new Quadrado();
    cout << figura->area();
    cout << "\n" << Figura::getQntFiguras();
    return 0;
}