#include "Especialista.hpp"
using namespace std;
const int VALOR_PRECISAO=2;
const float perc=0.1;
double Especialista::comissao(double ValorVenda) {
        double c = ValorVenda*perc;
                  return c;
    }

void Especialista::print() {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();
        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(VALOR_PRECISAO) << salario_base<<endl;

    }
