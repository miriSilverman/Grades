#include <iostream>
#include "grades.h"

int main() {
    // הכנס את ציוני הקורסים שלך של שנה א:
    std::vector<double> my_grades_a = {82,77,81,94,85,77,84,74};

    // הכנס את הנ"זים שלהם בהתאמה:
    std::vector<double> my_naz_a = {7,4,4,7,7,6,6,5};

    // הכנס את ציוני אבני הפינה שלך של שנה א:
    std::vector<double> ap_my_grades_a = {};

    // הכנס את הנ"זים שלהם בהתאמה:
    std::vector<double> ap_my_naz_a = {};



    // הכנס את ציוני הקורסים שלך של שנה ב:
    std::vector<double> my_grades = {96, 85, 88, 68, 87, 100, 82};

    // הכנס את הנ"זים שלהם בהתאמה:
    std::vector<double> my_naz = {4, 2, 5, 5, 5, 2, 6};

    // הכנס את ציוני אבני הפינה שלך של שנה ב:
    std::vector<double> ap_my_grades = {100,90};

    // הכנס את הנ"זים שלהם בהתאמה:
    std::vector<double> ap_my_naz = {2,2};



    std::cout << "\nfirst year:" << std::endl;
    grades* first_year_grades = new grades(my_grades_a, my_naz_a,ap_my_grades_a,ap_my_naz_a);

    std::cout << "\nsecond year:" << std::endl;
    grades* second_year_grades = new grades(my_grades, my_naz,ap_my_grades,ap_my_naz);

    second_year_grades->get_average_of_both_years(first_year_grades);



    return 0;
}
