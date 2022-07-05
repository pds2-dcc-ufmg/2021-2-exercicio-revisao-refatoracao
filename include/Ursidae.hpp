#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

class Ursidae : public Animal {
    private:
        const int PEIXES_POR_RACAO = 5;
        std::string especie;
        double quantPeixesPorDia;
        double kgPeixesConsumidos;
    public:
        Ursidae(std::string _nome, std::string _idade);
        Ursidae(std::string _nome, std::string _idade, std::string _especie, double _quantPeixesPorDia);
        void print();
        void calculaPeixesConsumidos(int porcaoPeixes);
        double getKgPeixesConsumidos();
};

#endif

