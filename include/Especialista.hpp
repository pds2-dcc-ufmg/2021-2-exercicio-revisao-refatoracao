#ifndef Especialista_HPP
#define Especialista_HPP

#include <string>

#include "Funcionario.hpp"
#include "Cliente.hpp"

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

    void acrescentarNumAtendimentos();
    void acrescentarComissao(double valorVenda);

    void imprimirDados() override;

    int getNumAtendimentos() { return numAtendimentos; }
    double getComissao() { return comissao; }
};

#endif