#include <iostream> //Módulo de input(Entrada de Dados) e output(Saída de Dados).
#include <string> //Módulo de string.
#include "modulos/biblioteca.hpp" //Módulo do empréstimo de livros.

int main() {

    struct loans loan; //Criando uma variavel de empréstimo.
    struct books book; //Criando uma variavel do livro do empréstimo.

    registerLoan(book, loan, "Lucas", 200, "10 Mandamentos", "Felipe"); //Registrando.

    return 0;
}
