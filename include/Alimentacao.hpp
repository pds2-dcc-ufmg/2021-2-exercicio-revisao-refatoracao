#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao{
    private:
        Animal animal;
        Cuidador cuidador;
        std::string comida;
        std::string descricao;
        int porcao;
    public:
        Alimentacao(Animal _animal, Cuidador _cuidador, std::string _comida, std::string _descricao, int _porcao);
        void setPorcao(int _porcao);
        void setComida(std::string _comida);
        int getPorcao();
        std::string getDescricao();
        void print();
};

#endif