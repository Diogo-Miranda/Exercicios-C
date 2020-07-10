#include <iostream>
#include <string.h>
#include <cmath>
#define MAX 100

using namespace std;

class FigGeo
{
private:
    static int quantidade;
    string cor;

public:
    FigGeo()
    {
        quantidade++;
    }

    ~FigGeo()
    {
        quantidade--;
    }

    static int getQuantidade()
    {
        return quantidade;
    }

    string getCor()
    {
        return cor;
    }

    void setCor(string cor)
    {
        this->cor = cor;
    }

    virtual void le() = 0;

    virtual void escreve() = 0;

    virtual float perimetro() = 0;

    virtual float area() = 0;
};

int FigGeo::quantidade = 0;

class Circulo : public FigGeo
{
private:
    float raio;
    static int quantidade;

public:
    Circulo()
    {
        setRaio(1);
        quantidade++;
    }

    Circulo(float raio)
    {
        setRaio(raio);
        setCor("blue");
        quantidade++;
    }

    ~Circulo()
    {
        quantidade--;
    }

    void setRaio(float raio)
    {
        this->raio = raio;
    }

    float getRaio()
    {
        return raio;
    }

    void le()
    {
        bool ERRO;
        float raio;
        do
        {
            cout << "\nInforme o raio desejado: ";
            cin >> raio;
            ERRO = raio <= 0;
            if (ERRO)
                cout << "\nERRO! Raio fora do dominio: (0,+inifity)";
        } while (ERRO);

        setRaio(raio);

        string cor;
        cout << "\nInforme a cor desejada: ";
        cin >> cor;
        setCor(cor);
    }

    void escreve()
    {
        cout << "\nCor: " << getCor();
        cout << "\nRaio : " << getRaio();
        cout << "\nArea : " << area();
        cout << "\nPerimetro : " << perimetro();
    }

    float perimetro()
    {
        float perimetro;

        float pi = 3.14;
        //2piR
        perimetro = 2 * pi * getRaio();

        return perimetro;
    }

    float area()
    {
        float area;

        float pi = 3.14;
        //piR^2
        area = (pi) * (getRaio() * getRaio());

        return area;
    }

    static int getQuantidade()
    {
        return quantidade;
    }
};

int Circulo::quantidade = 0;

class Quadrado : public FigGeo
{
private:
    float lado;
    static int quantidade;

public:
    Quadrado()
    {
        setLado(1);
        setCor("White");
        quantidade++;
    }

    Quadrado(float lado)
    {
        setLado(lado);
        setCor("White");
        quantidade++;
    }

    Quadrado(float lado, string cor)
    {
        setLado(lado);
        setCor(cor);
        quantidade++;
    }

    ~Quadrado()
    {
        quantidade--;
    }

    void setLado(float lado)
    {
        this->lado = lado;
    }

    float getLado()
    {
        return lado;
    }

    void le()
    {
        float lado;
        bool ERRO;
        do
        {
            cout << "\nInforme o valor do lado: ";
            cin >> lado;
            ERRO = lado <= 0;
            if (ERRO)
                cout << "\nInforme um lado dentro do dominio (0,+inifiny) ";
        } while (ERRO);

        setLado(lado);

        string cor;
        cout << "\nInforme a cor desejada: ";
        cin >> cor;

        setCor(cor);
    }

    void escreve()
    {
        cout << "\nCor: " << getCor();
        cout << "\nLado: " << getLado();
        cout << "\nArea: " << area();
        cout << "\nPerimetro: " << perimetro();
    }

    float area()
    {
        float area;

        area = getLado() * getLado();

        return area;
    }

    float perimetro()
    {
        float perimetro;

        perimetro = 4 * getLado();

        return perimetro;
    }
};

int Quadrado::quantidade = 0;

class Triangulo : public FigGeo
{
private:
    float a;
    float b;
    float c;
    static int quantidade;

public:
    Triangulo()
    {
        this->a = 1;
        this->b = 1;
        this->c = 1;
        setCor("White");

        quantidade++;
    }

    Triangulo(float a)
    {
        this->a = a;
        // a > | b - c |
        // a < b + c
        float auxLado = a + 1;
        this->b = auxLado;
        this->c = auxLado;

        quantidade++;
    }

    Triangulo(float a, float b)
    {
        this->a = a;
        this->b = b;

        // c > | a - b |
        // c < a + b
        float c = abs(a - b) + 1;
        this->c = c;

        quantidade++;
    }

    Triangulo(float a, float b, float c, string cor)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        setCor(cor);
    }

    void setTriangulo(float a, float b, float c, string cor)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        setCor(cor);
    }

    float getA()
    {
        return a;
    }

    float getB()
    {
        return b;
    }

    float getC()
    {
        return c;
    }

    bool valido()
    {
        bool ehValido = false;

        if (a + b >= c && a + c >= b && b + c >= a && a > 0 && b > 0 && c > 0)
            ehValido = true;

        return ehValido;
    }

    float area()
    {
        float area;
        float semiperiodo = (a + b + c) / 2;

        area = sqrt(semiperiodo * (semiperiodo - a) * (semiperiodo - b) * (semiperiodo - c));

        return area;
    }

    float perimetro()
    {
        float perimetro;

        perimetro = (a + b + c);

        return perimetro;
    }

    void le()
    {
        bool ehValido;
        float l1,
            l2,
            l3;

        string cor;
        cout << "\nInforme a cor do triangulo : ";
        cin >> cor;
        do
        {
            cout << "\nInforme o primeiro lado: ";
            cin >> l1;
            cout << "\nInforme o segundo lado: ";
            cin >> l2;
            cout << "\nInforme o terceiro lado: ";
            cin >> l3;
            setTriangulo(l1, l2, l3, cor);
            ehValido = valido();
            if (!ehValido)
                cout << "\nLados invalidos, digite numeros positivos que formem um triangulo";
        } while (!ehValido);

        cout << "\nTriangulo cadastrado!!! ";
    }

    void escreve()
    {
        cout << "\nCor : " << getCor();
        cout << "\nA : " << getA();
        cout << "\nB : " << getB();
        cout << "\nC : " << getC();
        cout << "\nArea : " << area();
        cout << "\nPerimetro : " << perimetro();
    }

    static int getQuantidade()
    {
        return quantidade;
    }
};

int Triangulo::quantidade = 0;

void quadrado(FigGeo *figura[])
{
    int opcao;
    int i = FigGeo::getQuantidade();
    do
    {

        cout << "\n=== Menu de opcoes ===";
        cout << "\n0 - Voltar ";
        cout << "\n1 - Cadastrar quadrado ";
        cout << "\n2 - Escrever ultima figura cadastrada";
        cout << "\n3 - Quantidade de Quadrados ";
        cout << "\nInforme a opcao escolhida: ";
        cin >> opcao;

        switch (opcao)
        {
        case 0:
            cout << "\nVoltando...";
            break;
        case 1:
            figura[i] = new Quadrado();
            figura[i]->le();
            i++;
            break;
        case 2:
            if (i > 0)
                figura[i - 1]->escreve();
            else if (i == 0)
                figura[0]->escreve();
            else
                cout << "\nNenhuma figura cadastrada";
            break;
        case 3:
            cout << "\n"
                 << Quadrado::getQuantidade();
            break;
        default:
            break;
        }
    } while (opcao != 0);
}

void triangulo(FigGeo *figura[])
{
    int opcao;
    int i = FigGeo::getQuantidade();
    do
    {
        cout << "\n=== Menu de opcoes ===";
        cout << "\n0 - Voltar ";
        cout << "\n1 - Cadastrar triangulo ";
        cout << "\n2 - Escrever ultima figura cadastrada";
        cout << "\n3 - Quantidade de Triangulos ";
        cout << "\nInforme a opcao escolhida: ";
        cin >> opcao;

        switch (opcao)
        {
        case 0:
            cout << "\nVoltando ...";
            break;
        case 1:
            figura[i] = new Triangulo();
            figura[i]->le();
            i++;
            break;
        case 2:
            if (i > 0)
                figura[i - 1]->escreve();
            else if (i == 0)
                figura[0]->escreve();
            else
                cout << "\nNenhuma figura cadastrada";
            break;
        case 3:
            cout << "\n"
                 << Triangulo::getQuantidade();
            break;

        default:
            break;
        }
    } while (opcao != 0);
}

void circulo(FigGeo *figura[])
{
    int opcao;
    int i = FigGeo::getQuantidade();
    do
    {
        cout << "\n=== Menu de opcoes ===";
        cout << "\n0 - Voltar ";
        cout << "\n1 - Cadastrar Circulo ";
        cout << "\n2 - Escrever ultima figura cadastrada";
        cout << "\n3 - Quantidade de Circulos ";
        cout << "\nInforme a opcao escolhida: ";
        cin >> opcao;

        switch (opcao)
        { 
        case 0:
            cout << "\nVoltando ...";
            break;
        case 1:
            figura[i] = new Circulo();
            figura[i]->le();
            i++;
            break;
        case 2:
            if (i > 0)
                figura[i - 1]->escreve();
            else if (i == 0)
                figura[0]->escreve();
            else
                cout << "\nNenhuma figura cadastrada";
            break;
        case 3:
            cout << "\n"
                 << Circulo::getQuantidade();
            break;

        default:
            break;
        }
    } while (opcao != 0);
}

int main()
{
    FigGeo *figura[MAX];
    int opcao;

    do
    {
        cout << "\n=== Menu de opcoes ===";
        cout << "\n0 - Sair";
        cout << "\n1 - Quadrado ";
        cout << "\n2 - Triangulo ";
        cout << "\n3 - Circulo ";
        cout << "\n4 - Quantidade de figuras";
        cout << "\n5 - Listar figuras";
        cout << "\nInforme a opcao escolhida: ";
        cin >> opcao;

        switch (opcao)
        {
        case 0:
            cout << "\nObrigado por usar meu programa :=)";
            break;
        case 1:
            quadrado(figura);
            break;
        case 2:
            triangulo(figura);
            break;
        case 3:
            circulo(figura);
            break;
        case 4:
            cout << "\n"
                 << FigGeo::getQuantidade();
            break;
        case 5:
            for(int i = 0; i < FigGeo::getQuantidade(); i++)
            {
                cout << "\n";
                figura[i]->escreve();
            }
            break;
        default:
            cout << "\nOpcao invalida, tente novamente";
            break;
        }
    } while (opcao != 0);

    return 0;
}