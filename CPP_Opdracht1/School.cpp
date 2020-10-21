#include <string>;
#include <iostream>;
#include <Windows.h>

#include "Student.h";
#include "School.h";
#include "Course.h";

void School::AddStudent(Student* student, Course* course)
{
	course->AddStudent(student);
	studentCount += 1;
	std::cout << "Er is een nieuwe student bij gekomen\n";
}

void School::RemoveStudent(Student* student)
{
	studentCount -= 1;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "een student heeft de school verlaten\n";
	SetConsoleTextAttribute(hConsole, 0);

	for (int i = 0; i < courses.size(); i++) {
		for (int j = 0; j < courses[i]->Students.size(); j++) {
			
			// Is it the student we want to remove?
			if (courses[i]->Students[j] == student) {
				courses[i]->Students.erase(courses[i]->Students.begin() + j);
			}
		}
	}

	delete student;
}

void School::NextYear()
{
	this->age += 1;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 3);
	std::cout << "Het volgende school jaar is ingegaan\n";
	SetConsoleTextAttribute(hConsole, 0);

	for (int i = 0; i < courses.size(); i++) {
		for (int j = 0; j < courses[i]->Students.size(); j++) {
			
			courses[i]->Students[j]->NextYear();

			// Is the student done with school ( 4 years in school ) 
			if (courses[i]->Students[j]->DoneWithSchool()) {
				RemoveStudent(courses[i]->Students[j]);
				j -= 1;
			}
		}
	}
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
