#pragma once
#include <string>;
#include <vector>;

class Course
{

public:
	std::string name;
	std::string age;
	int studentCount;

	std::vector < std::string> Students;

	void AddStudent();
	void RemoveStudent();
};

