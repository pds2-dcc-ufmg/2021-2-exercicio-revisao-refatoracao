#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente : public Funcionario{

    private:
        double bon;
        static double Valor_bon = 15.0;
    
    public:
        void print();
        double calcula_bon_ger(int num_tot_vnd);
};

#endif

