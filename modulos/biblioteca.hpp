#ifndef BIBLIOTECA_HPP

#include <string> //Módulo para string.
#include <iostream> //Módulo para input(Entrada de Dados) e output(Saída de Dados).
#include <fstream> //Módulo para transmissão de arquivo.

struct books { //Estrutura de livros.
    std::string name; //Nome do livro.
    std::string author; //Autor.
    long price; //Preço.
};

struct loans { //Estrutura de empréstimos.
    books book; //Livro do empréstimo.
    std::string user; //Comprador.
    long price; //Preço.
};

//Função de registro de empréstimo.
void registerLoan(books book, loans loan, std::string buyer, long price, std::string bookName, std::string author) {
    book.name = bookName;
    book.price = price;
    loan.price = book.price;
    book.author = author;
    loan.user = buyer;
    loan.book = book;
    //Armazenando o empréstimo.
    std::ofstream armazem;
    armazem.open("emprestimos.txt");
    armazem << "Nome do Livro: " << book.name << '\n';
    armazem << "Autor do Livro: " << book.author << '\n';
    armazem << "Preço do Livro: " << book.price << ",00" << '\n';
    armazem << "Comprador: " << loan.user << '\n' << '\n';
}

#endif
