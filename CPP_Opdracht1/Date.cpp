#include "Date.h"

Date::Date(int year = 0, int month = 0, int day = 0)
{
    SetDate(year, month, day);
}

void Date::SetDate(int year, int month, int day)
{
    _month = month;
    _day = day;
    _year = year;
}