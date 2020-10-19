#include <iostream>
#include "School.h";

int main()
{
	School* school = new School("Media collage amsterdam", "3278 GT", 2147483646);
	Course* course_math = new Course("math");
	Course* course_nederlands = new Course("nederlands");
	Course* course_engels = new Course("engels");
	Course* course_rekenen = new Course("rekenen");

	school->AddCourse(course_math);
	school->AddCourse(course_nederlands);
	school->AddCourse(course_engels);
	school->AddCourse(course_rekenen);

	std::cout << "\n\n\n";

	std::cout << "Schoolname: " << school->name;
	std::cout << "\n";
	std::cout << "Schoolage: " << school->age;
	std::cout << "\n";
	std::cout << "Postcode: " << school->postcode;
	std::cout << "\n";
	std::cout << "Telefoon nummer: " << school->phoneNumber;
	std::cout << "\n\n";

	std::cout << "Courses: " << school->courses.size();
	std::cout << "\n";
	std::cout << "StudentCount: " << school->studentCount;

	std::cout << "\n";

	return 0;
}
