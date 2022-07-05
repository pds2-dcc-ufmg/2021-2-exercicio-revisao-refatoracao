#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _nome, std::string _idade, std::string _especie, double _quantPeixesPorDia) {
    this->setNome(_nome);
    this->setIdade(_idade);
    this->setFamilia("Ursidae");
    this->especie = _especie;
    this->quantPeixesPorDia = _quantPeixesPorDia;
    this->kgPeixesConsumidos = 0;
}

Ursidae::Ursidae(std::string _nome, std::string _idade) {
    this->setNome(_nome);
    this->setIdade(_idade);
    this->setFamilia("Ursidae");
    this->kgPeixesConsumidos = 0;
}

void Ursidae::print() {
    Animal::print();
    std::cout << "  Especie: " << this->especie << std::endl;
}

void Ursidae::calculaPeixesConsumidos(int porcaoPeixes) {
    this->kgPeixesConsumidos += this->PEIXES_POR_RACAO * porcaoPeixes;
}

double Ursidae::getKgPeixesConsumidos() {
    return this->kgPeixesConsumidos;
}