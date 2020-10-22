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
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "een student heeft de school verlaten\n";
	SetConsoleTextAttribute(hConsole, 0);

	for (int i = 0; i < GetCourses().size(); i++) {

		for (int j = 0; j < GetCourses()[i]->GetStudents()->size(); j++) {
			
			// Is it the student we want to remove?
			Student* otherStudent = GetCourses().at(i)->GetStudents()->at(j);

			if (otherStudent == student) {
				GetCourses()[i]->GetStudents()->erase(GetCourses()[i]->GetStudents()->begin() + j);
				j -= 1;
				studentCount -= 1;
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
	
		for (int j = 0; j < courses.at(i)->GetStudents()->size(); j++) {
			
			courses[i]->GetStudents()->at(j)->NextYear();

			// Is the student done with school ( 4 years in school ) 
			if (courses.at(i)->GetStudents()->at(j)->DoneWithSchool()) {
				RemoveStudent(courses.at(i)->GetStudents()->at(j));
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

	for (int i = 0; i < courses.size(); i++) {
		if (this->courses[i] == course) {
			this->courses.erase(this->courses.begin() + i);
		}
	}

	delete course;
}

void School::PrintSchoolData()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 7);
	std::cout << "Schoolname: " << this->name << "\n";
	std::cout << "Schoolage: " << this->age << "\n";
	std::cout << "Postcode: " << this->postcode << "\n";
	std::cout << "Telefoon nummer: " << this->phoneNumber << "\n\n";
	std::cout << "Courses: " << this->courses.size() << "\n";
	std::cout << "StudentCount: " << this->studentCount << "\n";
	SetConsoleTextAttribute(hConsole, 0);
}

School::School(std::string name, std::string postcode, long phoneNumber)
{
	this->name = name;
	this->age = 0;
	this->postcode = postcode;
	this->phoneNumber = phoneNumber;
	this->studentCount = 0;
}

School::~School()
{
	std::cout << "Deleted the school object";
}


// getters and setters
#pragma region Getters and setters

int School::GetAge()
{
	return 0;
}
std::string School::GetName()
{
	return this->name;
}
std::string School::GetPostcode()
{
	return this->postcode;;
}
long School::GetPhoneNumber()
{
	return this->phoneNumber;
}
int School::GetStudentCount()
{
	return this->studentCount;
}

std::vector<Course*> School::GetCourses()
{
	return this->courses;
}

void School::SetAge(int age)
{
	this->age = age;
}
void School::SetName(std::string name)
{
	this->name = name;
}
void School::SetPostcode(std::string postcode)
{
	this->postcode = postcode;
}
void School::SetPhoneNumber(long number)
{
	this->phoneNumber = number;
}

#pragma endregion 