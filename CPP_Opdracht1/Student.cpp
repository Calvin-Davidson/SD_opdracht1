#include <iostream>
#include "Student.h"

Student::Student(std::string name, std::string familyName, Date birthDate, std::string adres, std::string postCode, int phoneNumber, std::string firstContactName, std::string secondContactFamilyName, int phoneNumberfirstContact, int courseYear, Date admissionDate)
{
    _name = name;
    _familyName = familyName;
    _birthDate = birthDate;
    _postCode = postCode;
    _firstContactName = firstContactName;
    _secondContactFamilyName = secondContactFamilyName;
    _phoneNumberfirstContact = phoneNumberfirstContact;
    _courseYear = courseYear;
    _admissionDate = admissionDate;
}

Student::~Student()
{
    std::cout << "Student deleted";
}
