# Exercício de Revisão e Refatoração

O objetivo dessa atividade é praticar a parte de revisão e refatoração utilizando um sistema de controle de versão.

**Considere a seguinte descrição em alto nível da funcionalidade do código:**  
> Uma empresa prestadora de diferentes serviços quer armazenar dados das vendas, cliente e funcionários. A empresa possui um gerente que recebe um bônus para cada serviço vendido. Outro tipo de funcionário é o especialista, a pessoa que realizará o serviço e que recebe uma comissão sob o valor da venda. A porcentagem da comissão e o valor da bonificação podem variar para cada funcionário.

Você deve criar um **Fork** desse repositório, fazer as alterações que julgar necessárias e então realizar um **Pull Request**. Você é livre para criar outros arquivos, classes, métodos, etc., desde que o main continue produzindo a mesma saída. Lembre-se que essa etapa não altera o comportamento funcional.

No **título** do seu Pull Request, informe o valor **MD5** obtido a partir da sua **matrícula**. Você pode gerar esse valor a partir de diferentes sites, um exemplo está [aqui](http://www.md5.cz/). Lembre-se de também informar seus dados no forms disponibilizado no Moodle. Na **descrição** faça uma **lista/análise detalhada** das **soluções** que você utilizou. Submissões que não seguirem essas instruções não serão avaliadas.

Lembre-se de analisar aspectos como: nomenclatura, formatação, organização, comentários, aplicação correta dos conceitos de OO, entre outros.
Dica: Utilize o catálogo para pensar em possíveis sugestões de refatoração (https://refactoring.com/catalog/).


    *** Aalterações:
    
    Todos "include namespace std" foram retirados e "std::" adicionado antes de cada uso (Para todos os códigos).
    
    Ainda no .cpp foi retirado o "#include <string>", este include já é feito 
no .hpp e paassado na chamada do "#include "Cliente.hpp"". (CLiente.cpp).

    Variáveis com nomes sem significado (como double c) foram substituídas por um nome que se relacione com
o código.

	Códigos comentados e sem propísito e códigos duplicados foram retirados.

    A variável "bonificacao" passou a ser apontada pelo método "calcula_BONIFICACAO_GERENTE" e seu valor é calculado dentro
    do próprio método.

