#include <iostream>
#include "grades.h"

int main() {
    // הכנס את ציוני הקורסים שלך של שנה א:
    std::vector<double> my_grades_a = {};

    // הכנס את הנ"זים שלהם בהתאמה:
    std::vector<double> my_naz_a = {};

    // הכנס את ציוני אבני הפינה שלך של שנה א:
    std::vector<double> ap_my_grades_a = {};

    // הכנס את הנ"זים שלהם בהתאמה:
    std::vector<double> ap_my_naz_a = {};



    // הכנס את ציוני הקורסים שלך של שנה ב:
    std::vector<double> my_grades = {};

    // הכנס את הנ"זים שלהם בהתאמה:
    std::vector<double> my_naz = {};

    // הכנס את ציוני אבני הפינה שלך של שנה ב:
    std::vector<double> ap_my_grades = {};

    // הכנס את הנ"זים שלהם בהתאמה:
    std::vector<double> ap_my_naz = {};



    std::cout << "\nfirst year:" << std::endl;
    grades* first_year_grades = new grades(my_grades_a, my_naz_a,ap_my_grades_a,ap_my_naz_a);

    std::cout << "\nsecond year:" << std::endl;
    grades* second_year_grades = new grades(my_grades, my_naz,ap_my_grades,ap_my_naz);

    second_year_grades->get_average_of_both_years(first_year_grades);



    return 0;
}
