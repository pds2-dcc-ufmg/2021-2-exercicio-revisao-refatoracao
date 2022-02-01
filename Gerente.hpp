#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente
{
private:
    double SalarioBase; // valor m�nimo recebido pelo funcion�rio
    string idade;
    string nome;
    int rgFunc;
    double bonificacao;

public:
    double getSalarioBase()
    {
        return SalarioBase;
    };
    void setSalarioBase(double Salario)
    {
        this->SalarioBase = Salario;
    }
    double getBonificacao()
    {
        return bonificacao;
    };
    void setBonificacao(double Salario)
    {
        this->bonificacao = Salario;
    }
    string getIdade()
    {
        return idade;
    };
    void setIdade(string idade)
    {
        this->idade = idade;
    };
    string getNome()
    {
        return nome;
    };
    void setNome(string Nome)
    {
        this->nome = Nome;
    };
    int getRgFunc()
    {
        return rgFunc;
    }
    void setRgFunc(int rgFunc)
    {
        this->rgFunc = rgFunc;
    }
    void print()
    {
        cout << "[Funcionario]" << endl
             << "[Gerente]" << endl
             << "  Nome: " << nome << endl
             << "  Idade: " << idade << endl
             << "  RGFunc: " << rgFunc << endl
             << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << endl;
    }

    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas)
    {
        double x;
        return numTOTALVendas * ValorBONIFICACAO;
    }
};

#endif
