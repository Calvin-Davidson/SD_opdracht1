#include <iostream>
#include "Student.h"

Student::Student(std::string name, std::string familyName, Date birthDate, std::string adres, std::string postCode, int phoneNumber, std::string firstContactName, std::string firstContactFamilyName, int phoneNumberfirstContact, int courseYear, Date admissionDate)
{
    this->_name = name;
    this->_familyName = familyName;
    this->_birthDate = birthDate;
    this->_adres = adres;
    this->_postCode = postCode;
    this->_phoneNumber = phoneNumber;
    this->_firstContactName = firstContactName;
    this->_firstContactFamilyName = firstContactFamilyName;
    this->_phoneNumberfirstContact = phoneNumberfirstContact;
    this->_courseYear = courseYear;
    this->_admissionDate = admissionDate;

    std::cout << "nieuwe student is aangemaakt\n";
}

Student::~Student()
{ 
    std::cout << "Student deleted student Name: " << this->_name << "\n";
}

void Student::NextYear() {
    _courseYear += 1;
}

bool Student::DoneWithSchool() {
    return (this->_courseYear > 4);
}