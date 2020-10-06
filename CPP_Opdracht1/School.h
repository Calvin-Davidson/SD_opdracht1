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

	void AddStudent(std::string student, Course course);
	void RemoveStudent(std::string student);
	void NextYear();
	void AddCourse(Course course);
	void RemoveCourse(Course course);
};

