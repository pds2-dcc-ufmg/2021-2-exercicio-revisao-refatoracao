#include "Alimentacao.hpp"

Alimentacao::Alimentacao(Animal _animal, Cuidador _cuidador, std::string _comida, std::string _descricao, int _porcao) {
    this->animal = _animal;
    this->cuidador = _cuidador;
    this->comida = _comida;
    this->descricao = _descricao;
    this->porcao = _porcao;
}

void Alimentacao::setPorcao(int _porcao) {
    this->porcao = _porcao;
}

void Alimentacao::setComida(std::string _comida) {
    this->comida = _comida;
}

int Alimentacao::getPorcao() {
    return this->porcao;
}

std::string Alimentacao::getDescricao() {
    return this->descricao;
}

void Alimentacao::print() {
        std::cout << "Animal: " << this->animal.getNome() << std::endl;
        std::cout << " Cuidador: " << cuidador.getNome() << std::endl;
}