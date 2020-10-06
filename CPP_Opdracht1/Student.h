#pragma once
#include <string>
#include "Date.h"

class Student
{
private:
    std::string _name;
    std::string _familyName;
    Date _birthDate;
    std::string _adres;
    std::string _postCode;
    int _phoneNumber;
    std::string _firstContactName;
    std::string _secondContactFamilyName;
    int _phoneNumberfirstContact;
    int _courseYear;
    Date _admissionDate;

public:
    Student(std::string name, std::string familyName, Date birthDate, std::string adres, std::string postCode, int phoneNumber, std::string firstContactName, std::string secondContactFamilyName, int phoneNumberfirstContact, int courseYear, Date admissionDate);
};