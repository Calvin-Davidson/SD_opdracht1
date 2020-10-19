#pragma once
#include <string>;
#include <vector>;
#include "Course.h";
#include "Student.h";

class School
{
public:
	std::string name;
	int age;
	int studentCount;
	std::string postcode;
	long phoneNumber;

	std::vector< Course* > courses;

	void AddStudent(Student* student, Course* course);
	void RemoveStudent(Student* student);
	void NextYear();
	void AddCourse(Course* course);
	void RemoveCourse(Course* course);

	School(std::string name, std::string postcode, long phoneNumber);
};

