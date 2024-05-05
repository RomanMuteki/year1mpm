#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const IBusko::MenuItem IBusko::ALGEBRA_SUMM = {
    "1 - Хочу научиться складывать!", IBusko::study_summ, &IBusko::STUDY_ALGEBRA
};
const IBusko::MenuItem IBusko::ALGEBRA_SUBSTRACT = {
    "2 - Хочу научиться вычитать!", IBusko::study_substract, &IBusko::STUDY_ALGEBRA
};
const IBusko::MenuItem IBusko::ALGEBRA_MULTIPLY = {
    "3 - Хочу научиться умножать!", IBusko::study_multiply, &IBusko::STUDY_ALGEBRA
};
const IBusko::MenuItem IBusko::ALGEBRA_DIVIDE = {
    "4 - Хочу научиться делить!", IBusko::study_divide, &IBusko::STUDY_ALGEBRA
};
const IBusko::MenuItem IBusko::ALGEBRA_GO_BACK = {
    "0 - Выйти в меню выбора дисциплины", IBusko::study_go_back, &IBusko::STUDY_ALGEBRA
};

namespace {
    const IBusko::MenuItem* const algebra_children[] = {
        &IBusko::ALGEBRA_GO_BACK,
        &IBusko::ALGEBRA_SUMM,
        &IBusko::ALGEBRA_SUBSTRACT,
        &IBusko::ALGEBRA_MULTIPLY,
        &IBusko::ALGEBRA_DIVIDE
    };
    const int algebra_size = sizeof(algebra_children) / sizeof(algebra_children[0]);
}

const IBusko::MenuItem IBusko::STUDY_ALGEBRA = {
    "1 - Хочу учиться алгебре!", IBusko::show_menu, &IBusko::STUDY, algebra_children, algebra_size
};


const IBusko::MenuItem IBusko::CALCULUS_DIFF = {
    "1 - Хочу научиться дифференциальному исчислению!", IBusko::study_calculus_diff, &IBusko::STUDY_CALCULUS
};
const IBusko::MenuItem IBusko::CALCULUS_INTEGRAL = {
    "2 - Хочу научиться интегральному исчислению!", IBusko::study_calculus_integral, &IBusko::STUDY_CALCULUS
};
const IBusko::MenuItem IBusko::CALCULUS_GO_BACK = {
    "0 - Выйти в меню выбора дисциплины", IBusko::study_go_back, &IBusko::STUDY_CALCULUS
};

namespace {
    const IBusko::MenuItem* const calculus_children[] = {
        &IBusko::CALCULUS_GO_BACK,
        &IBusko::CALCULUS_DIFF,
        &IBusko::CALCULUS_INTEGRAL
    };
    const int calculus_size = sizeof(calculus_children) / sizeof(calculus_children[0]);
}

const IBusko::MenuItem IBusko::STUDY_CALCULUS = {
    "2 - Хочу учиться матанализу!", IBusko::show_menu, &IBusko::STUDY, calculus_children, calculus_size
};

const IBusko::MenuItem IBusko::STUDY_GO_BACK = {
    "0 - Выйти в главное меню", IBusko::study_go_back, &IBusko::STUDY
};

namespace {
    const IBusko::MenuItem* const study_children[] = {
        &IBusko::STUDY_GO_BACK,
        &IBusko::STUDY_ALGEBRA,
        &IBusko::STUDY_CALCULUS
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const IBusko::MenuItem IBusko::STUDY = {
    "1 - Хочу учиться математике!", IBusko::show_menu, &IBusko::MAIN, study_children, study_size
};
const IBusko::MenuItem IBusko::EXIT = {
    "0 - Я лучше пойду полежу...", IBusko::exit, &IBusko::MAIN
};

namespace {
    const IBusko::MenuItem* const main_children[] = {
        &IBusko::EXIT,
        &IBusko::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const IBusko::MenuItem IBusko::MAIN = {
    nullptr, IBusko::show_menu, nullptr, main_children, main_size
};
