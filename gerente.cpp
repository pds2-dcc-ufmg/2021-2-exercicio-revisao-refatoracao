#include "Gerente.hpp"
using namespace std;
const int VALOR_PRECISAO=2;
void Gerente::print(){
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(VALOR_PRECISAO) <<salario_base<<endl;
        }
double Gerente::calcula_bonificacao_gerente(int num_total_vendas){
            return num_total_vendas*bonificacao+salario_base;
        }

