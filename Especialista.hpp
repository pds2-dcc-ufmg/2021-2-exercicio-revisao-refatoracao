#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;



class Especialista : public Funcionario {

    public:
    
    //calcula o valor da comissao de cada venda
     double comissao(double valor_venda);

    void print();

    //conjunto de getter e setters para as variaveis
    void setEspecialidade(string _especialidade);
    void setPercentual(double _percentual_sobre_vendas);
    
    string getEspecialidade();  
    double getPercentual();



    private:
        string especialidade;
        double percentual_sobre_venda = 0;

};

#endif
