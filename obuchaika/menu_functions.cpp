#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const IBusko::MenuItem* IBusko::show_menu(const MenuItem* current) {
    std::string welcome_word = "";
    std::string lecturer = "";

    if (current->title == "1 - Хочу учиться алгебре!") {
        lecturer = "Алексей Юрьевич Утешев > ";
        welcome_word = "Коллеги, здравствуйте!";
    }
    else if (current->title == "2 - Хочу учиться матанализу!") {
        lecturer = "Анатолий Олегович Бочкарёв > ";
        welcome_word = "Здравствуйте, присаживайтесь!";
    }
    else {
        lecturer = "Обучайка > ";
        welcome_word = "Обучайка приветствует тебя, мой юный ученик!";
    }

    std::cout << welcome_word << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << lecturer;

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const IBusko::MenuItem* IBusko::exit(const MenuItem* current) {
    std::exit(0);
}

const IBusko::MenuItem* IBusko::study_summ(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const IBusko::MenuItem* IBusko::study_substract(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const IBusko::MenuItem* IBusko::study_multiply(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const IBusko::MenuItem* IBusko::study_divide(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const IBusko::MenuItem* IBusko::study_calculus_integral(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const IBusko::MenuItem* IBusko::study_calculus_diff(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const IBusko::MenuItem* IBusko::study_go_back(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}
