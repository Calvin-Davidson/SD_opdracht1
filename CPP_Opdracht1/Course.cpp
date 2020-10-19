#include <iostream>;
#include "Course.h";

void Course::AddStudent(Student* student)
{
}

void Course::RemoveStudent(Student* student)
{
}

Course::Course(std::string name)
{
	this->name = name;
	std::cout << "Succesfully made the course: " + name + " \n";
}

Course::~Course()
{
	std::cout << "course deleted course name: " + this->name;
}
