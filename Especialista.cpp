#include "Especialista.hpp"

Especialista :: Especialista (string _nome,
                              int _idade,
                              int _registro,
                              double _SalarioBase,
                              string _especialidade)
    {
        nome = _nome;
        idade = _idade;
        registro = _registro;
        SalarioBase = _SalarioBase;
        especialidade = _especialidade;
        numAtendimentos = 0;
        comissaoValor = 0;
    }

    Especialista :: Especialista (){}

    double Especialista :: comissao(double ValorVenda){
        comissaoValor += perc*ValorVenda;
    };

    void Especialista :: print()
    {
        std::cout << "[Especialista]" << endl;
        Funcionario::print();
        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
        cout << "Num Atendimentos: " << numAtendimentos << endl;
        cout << "Salario Total: " << SalarioBase+comissaoValor<<endl;
    }

    void Especialista :: contagemAtendimento (){
        numAtendimentos += 1;
    }