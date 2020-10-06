#pragma once
#include <string>;
#include <vector>;
#include "Course.h";

class School
{
public:
	std::string name;
	std::string age;
	int studentCount;
	std::string postcode;
	int phoneNumber;

	std::vector< Course > courses;

	void AddStudent(Course course);
	void RemoveStudent(Course course);
	void NextYear();
	void AddCourse(Course course);
	void RemoveCourse(Course course);
};

