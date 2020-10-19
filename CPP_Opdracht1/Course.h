#pragma once
#include <string>;
#include <vector>;
#include "Student.h"

class Course
{

public:
	std::string name;
	int age;
	int studentCount;

	std::vector < Student* > Students;

	void AddStudent(Student* student);
	void RemoveStudent(Student* student);
	
	Course(std::string name);
	~Course();
};

