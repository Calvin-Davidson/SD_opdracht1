#include "School.h"
#include <string>;

void School::AddStudent(std::string student, Course course)
{
	
}

void School::RemoveStudent(std::string student)
{

}

void School::NextYear()
{
	this->age += 1;
}

void School::AddCourse(Course course)
{
	this->courses.push_back(course);
}

void School::RemoveCourse(Course course)
{

}
