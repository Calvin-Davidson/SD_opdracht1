#include <iostream>;
#include <vector>;
#include "Course.h";



void Course::AddStudent(Student* student)
{
	this->Students.push_back(student);
}

void Course::RemoveStudent(Student* student)
{
	for (int i = 0; i < this->Students.size(); i++) {
		if (this->Students[i] == student) {
			this->Students.erase(this->Students.begin() + i);
		}
	}
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
