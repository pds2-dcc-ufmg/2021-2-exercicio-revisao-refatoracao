#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario
{
protected:
    std::string nome;
    std::string idade;
    double salarioMinimo;
    int rgFunc;

    static double perc;
    static double percWanda;
    static double valorBonificacao;

public:
    virtual void imprimirDados();

    std::string getNome() { return nome; }
    virtual double getSalarioMinimo() { return salarioMinimo; }
};

class Especialista : public Funcionario
{
private:
    std::string especialidade;
    int numAtendimentos;
    double comissao;

public:
    Especialista(std::string nomeAux = "",
                 std::string idadeAux = "",
                 int rgFuncAux = 0,
                 int salarioMinimoAux = 0,
                 std::string especialidadeAux = "",
                 int numAtendimentosAux = 0,
                 double comissaoAux = 0.0);

    void acrescentarComissao(double valorVenda);

    void imprimirDados() override;

    int getNumAtendimentos() { return numAtendimentos; }
    double getComissao() { return comissao; }
};

class Gerente : public Funcionario
{
private:
    double bonificacao;

public:
    Gerente(std::string nomeAux = "",
            std::string idadeAux = "",
            int rgFuncAux = 0,
            double salarioMinimoAux = 0.0,
            double bonificacaoAux = 0.0);

    void acrescentarBonificacao();

    void imprimirDados() override;

    double getBonificacao() { return bonificacao; }
    double getSalarioTotal() { return getSalarioMinimo() + getBonificacao(); }
};

#endif