#include "School.h"
#include <string>;
#include "Student.h";
#include <iostream>;


void School::AddStudent(Student* student, Course* course)
{
	studentCount += 1;
	std::cout << "Er is een nieuwe student bij gekomen\n";
}

void School::RemoveStudent(Student* student)
{
	studentCount -= 1;
	std::cout << "een student heeft de school verlaten\n";
}

void School::NextYear()
{
	this->age += 1;
	std::cout << "Het volgende school jaar is ingegaan\n";
}

void School::AddCourse(Course* course)
{
	this->courses.push_back(course);
	std::cout << "Course added to the school\n";
}

void School::RemoveCourse(Course* course)
{
	std::cout << "Removing a course from the school\n";
	delete course;
}

School::School(std::string name, std::string postcode, long phoneNumber)
{
	this->name = name;
	this->age = 0;
	this->postcode = postcode;
	this->phoneNumber = phoneNumber;
	this->studentCount = 0;
}
