#include <iostream>
#include <chrono>
#include <thread>

#include "School.h";
#include "Course.h";
#include "Student.h";

void sleepFor(int seconds) {
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void printSchoolInformation(School* school) {
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
}

int main()
{
	School* school = new School("Media collage amsterdam", "3278 GT", 2147483646);
	Course* course_gamedev = new Course("Game developer");
	Course* course_mediadev = new Course("Media development");
	Course* course_audiovisueel = new Course("Audiovisueel");
	Course* course_gameArtist = new Course("Game artist");

	school->AddCourse(course_gamedev);
	school->AddCourse(course_mediadev);
	school->AddCourse(course_audiovisueel);
	school->AddCourse(course_gameArtist);


	Date birthDate(2003, 05, 28);
	Date currentData(2002, 10, 19);

	Student* student = new Student("Calvin", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);

	school->AddStudent(student, course_gamedev);
	
	printSchoolInformation(school);

	sleepFor(4);
	school->NextYear();

	std::cout << "\x1B[2J\x1B[H";
	printSchoolInformation(school);


	return 0;
}
