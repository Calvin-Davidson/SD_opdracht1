#pragma once
#include <string>

class Date
{
private:
    int _year;
    int _month;
    int _day;
    std::string _output;

public:
    Date(int year, int month, int day)
    {
        setDate(year, month, day);
    }

    void setDate(int year, int month, int day)
    {
        _year = year;
        _month = month;
        _day = day;
        _output = day + '-' + month + '-' + year;
    }

    int getYear() { return _year; }
    int getMonth() { return _month; }
    int getDay() { return _day; }
    std::string getDate() { return _output; }
};

