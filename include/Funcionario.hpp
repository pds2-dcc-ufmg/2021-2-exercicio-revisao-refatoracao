#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

class Funcionario
{

protected:
    double _SalarioBase;
    std::string _idade;
    std::string _nome;
    int _RegistroFuncional;
    int _NumeroDeAtendimentos;
    double _Comissao;

public:
    Funcionario(std::string nome = "",
                std::string idade = "",
                double SalarioBase = 0,
                int RegistroFuncional = 0,
                int NumeroDeAtendimentos = 0,
                double Comissao = 0);

    int getRegistroFuncional();
    double getSalarioBase();
    std::string getNome();
    std::string getIdade();
    int getNumeroDeAtendimentos();
    double getComissao();

    void setRegistroFuncional(int RegistroFuncional);
    void setSalarioBase(double SalarioBase);
    void setNome(std::string Nome);
    void setIdade(std::string Idade);
    void setNumeroDeAtendimentos(int NumeroDeAtendimentos);
    void setComissao(double Comissao);

    void SomaNumeroDeAtendimentos(int NumeroDeAtendimentos);
    void SomaComissao(double Comissao);

    void print();
};

#endif