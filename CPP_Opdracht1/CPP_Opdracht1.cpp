#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include "School.h";
#include "Course.h";
#include "Student.h";

void sleepFor(int seconds) {
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void printSchoolInformation(School* school) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 1);
	std::cout << "Schoolname: " << school->name;
	std::cout << "\n";
	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "Schoolage: " << school->age;
	std::cout << "\n";
	SetConsoleTextAttribute(hConsole, 3);
	std::cout << "Postcode: " << school->postcode;
	std::cout << "\n";
	SetConsoleTextAttribute(hConsole, 4);
	std::cout << "Telefoon nummer: " << school->phoneNumber;
	std::cout << "\n\n";

	SetConsoleTextAttribute(hConsole, 5);
	std::cout << "Courses: " << school->courses.size();
	std::cout << "\n";
	SetConsoleTextAttribute(hConsole, 6);
	std::cout << "StudentCount: " << school->studentCount;

	std::cout << "\n";
}

void clearConsole() {
	std::cout << "\x1B[2J\x1B[H";
}

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 1);
	std::cout << " I want to be nice today!" << "\n";


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
	Student* student1 = new Student("Calvin1", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student2 = new Student("Calvin2", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student3 = new Student("Calvin3", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student4 = new Student("Calvin4", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student5 = new Student("Calvin5", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student6 = new Student("Calvin6", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student7 = new Student("Calvin7", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student8 = new Student("Calvin8", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student9 = new Student("Ingmar", "busbach", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student10 = new Student("Ingmar1", "busbach", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student11 = new Student("Ingmar2", "busbach", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student12 = new Student("Ingmar3", "busbach", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student13 = new Student("Ingmar4", "busbach", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student14 = new Student("Ingmar5", "busbach", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student15 = new Student("Ingmar6", "busbach", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);
	Student* student17 = new Student("Ingmar7", "busbach", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 2432424, 0, currentData);

	
	school->AddStudent(student, course_gamedev);
	
	printSchoolInformation(school);

	for (int i = 0; i < 5; i++) {
		school->NextYear();
		printSchoolInformation(school);
		sleepFor(4);
		clearConsole();
	}

	printSchoolInformation(school);
	return 0;
}
