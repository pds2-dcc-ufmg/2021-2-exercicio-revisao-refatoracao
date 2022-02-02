#ifndef GERENTE_HPP
#define GERENTE_HPP

double ValorBONIFICACAO = 15.0;

class Gerente {
    public:
        double salario_base; // valor minimo recebido pelo funcion�rio
        std::string idade;
        std::string nome;
        int rg_func;
        double bonificacao;


        void print() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << Gerente::nome << std::endl
            << "  Idade: " << Gerente::idade << std::endl
            << "  RGFunc: " << Gerente::rg_func << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << Gerente::salario_base << std::endl;
        }

        double calcula_BONIFICACAO_GERENTE(int num_total_vendas){
            double x;
            return num_total_vendas*ValorBONIFICACAO;
        }

};

#endif

