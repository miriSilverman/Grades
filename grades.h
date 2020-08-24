//
// Created by miris on 23/08/2020.
//
#include <numeric>
#include <iostream>
#include <utility>
#include <vector>
#ifndef UNTITLED_GRADES_H
#define UNTITLED_GRADES_H


class grades{
    private:
        std::vector<double> _grades;
        std::vector<double> _naz;
        std::vector<double> _ap_grades;
        std::vector<double> _ap_naz;
        double _average;
        double _ap_average;
        double _sach;
        double _ap_sach;
        double _all_sachs;
        double _yearly_grade;



    public:
        grades(std::vector<double>& grades, std::vector<double>& naz, std::vector<double>& ap_grades, std::vector<double>& ap_naz):
        _grades(std::move(grades)), _naz(naz), _ap_grades(ap_grades), _ap_naz(ap_naz), _average(0), _ap_average(0)
        {


            _sach = std::accumulate(_naz.begin(), _naz.end(), 0.0);
            _ap_sach = std::accumulate(_ap_naz.begin(), _ap_naz.end(), 0.0);


            for (int i = 0; i < size(naz); ++i) {
                _average+= _grades[i]*_naz[i];
            }

            for (int i = 0; i < ap_naz.size(); ++i) {
                _ap_average+= (_ap_grades[i]*_ap_naz[i]);
            }

            _average /= _sach;
            _ap_average /= _ap_sach;
            _all_sachs = _sach+_ap_sach;

            get_avarage();
            get_ap_avarage();
            get_yearly_grade();


        }


        void get_avarage()
        {
            std::cout<<" ממוצע חוגי שנתי: "<<_average<<std::endl;

        }
        void get_ap_avarage()
        {
            if (_ap_sach == 0)
            {
                _ap_average = 0;
            }
            std::cout<<" ממוצע אבני פינה: "<<_ap_average<<std::endl;

        }

        void get_yearly_grade()
        {

            _yearly_grade = (_ap_average*_ap_sach + _average*_sach) / (_sach+_ap_sach);
            std::cout<<" ממוצע כללי שנתי: "<<_yearly_grade<<std::endl;
        }

        void get_average_of_both_years(grades* second_year)
        {

            double _average_of_both_years = (second_year->_yearly_grade * (second_year->_all_sachs) +
                    _yearly_grade *(_all_sachs))/(_all_sachs + second_year->_all_sachs);

            std::cout<<"\n ממוצע כללי רב שנתי: "<<_average_of_both_years<<std::endl;
        }






};


#endif //UNTITLED_GRADES_H
