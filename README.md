# Exercício de Revisão e Refatoração

**/*.cpp** 

- Adequação dos nomes das variáveis.
- Adicionado getters/setters para manipulação das variáveis.

**/*.hpp** 
- Mudança e adequação dos modificadores de acesso das variáveis.
- Mudança e adequação dos modificadores de acesso dos métodos.

**Cliente.hpp**
- Remoção da variável AlturaDosPais.

**Funcionario.hpp**

- Remoção do método print_oi().
- Mudança no modificador de acesso das variáveis para o tipo Protected, para ser possível herança.

**Gerente.hpp**

- Remoção a variavel 'x' do método calculaBonificacao().
- Classe Gerende herda de Funcionario.

**Especialista.hpp**

- Remoção a variavel 'percWanda' da Classe.

- Remoção de uma declaração 'public' errônea.

**Venda.hpp**

- Remoção do código comentado.

**main.cpp**

- Alteração nas chamadas e instanciações dos objetos.
