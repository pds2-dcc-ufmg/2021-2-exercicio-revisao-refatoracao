#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        const double QUANTIDADE_PORCAO = 1; 
        double kgRacaoConsumidos;
        std::string especie;
    public:
        Herpestidae(std::string _nome, std::string _idade, std::string _especie);
        void kgConsumidosDeRacao(int porcoesConsumidas);
        void print();
        double getKgRacaoConsumidos();
};

#endif
