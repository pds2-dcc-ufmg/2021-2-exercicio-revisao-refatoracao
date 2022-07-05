#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _nome, std::string _idade, std::string _especie) {
    this->setNome(_nome);
    this->setIdade(_idade);
    this->setFamilia("Herpistidae");
    this->especie = _especie;
    this->kgRacaoConsumidos = 0;
}

void Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    this->kgRacaoConsumidos += this->QUANTIDADE_PORCAO * porcoesConsumidas;
}

void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " << this->especie << std::endl;
}

double Herpestidae::getKgRacaoConsumidos() {
    return this->kgRacaoConsumidos;
}