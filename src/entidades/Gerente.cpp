#include "Gerente.hpp"

static const double valorBonificacao = 15.0;

void Gerente::print() const {
    cout << fixed << setprecision(2) <<
    "[Funcionario]"      << endl <<
    "[Gerente]"          << endl <<
    "  Nome: "           << _nome          << endl <<
    "  Idade: "          << _idade         << endl <<
    "  RGFunc: "         << _rgFunc        << endl <<
    "  SalarioBase: R$ " << _salarioBase   << endl <<
    "Salario Total: "    << salarioTotal() << endl;
}

void Gerente::calculaNovaBonificacao(int numTotalVendas){
    _bonificacao += numTotalVendas * valorBonificacao;
}

double Gerente::salarioTotal() const {
    return _salarioBase + _bonificacao;
}

istream& operator>>(istream& in, Gerente& gerente) {
    getline(in, gerente._nome);
    getline(in, gerente._idade);

    in >> gerente._rgFunc;
    in.ignore();

    in >> gerente._salarioBase;
    in.ignore();

    return in;
}
