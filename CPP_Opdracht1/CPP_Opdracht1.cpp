#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <ctime>;
#include "School.h";
#include "Course.h";
#include "Student.h";

void sleepFor(int seconds) {
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void clearConsole() {
	std::cout << "\x1B[2J\x1B[H";
}

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	School* school = new School("Media collage amsterdam", "3278 GT", 31655123432);

	Course* course_gamedev = new Course("Game developer");
	Course* course_mediadev = new Course("Media development");
	Course* course_audiovisueel = new Course("Audiovisueel");
	Course* course_gameArtist = new Course("Game artist");

	school->AddCourse(course_gamedev);
	school->AddCourse(course_mediadev);
	school->AddCourse(course_audiovisueel);
	school->AddCourse(course_gameArtist);


	Date birthDate(2003, 05, 28);
	Date birthDate2(2001, 04, 13);
	Date currentData(2020, 10, 20);
	Student* student = new Student("Calvin", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 31655580955, 0, currentData);
	Student* student1 = new Student("Calvin1", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 31655580955, 0, currentData);
	Student* student2 = new Student("Calvin2", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 31655580955, 1, currentData);
	Student* student3 = new Student("Calvin3", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 31655580955, 0, currentData);
	Student* student4 = new Student("Calvin4", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 31655580955, 2, currentData);
	Student* student5 = new Student("Calvin5", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 31655580955, 0, currentData);
	Student* student6 = new Student("Calvin6", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 31655580955, 3, currentData);
	Student* student7 = new Student("Calvin7", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 31655580955, 0, currentData);
	Student* student8 = new Student("Calvin8", "Davidson", birthDate, "Laan van brussel", "1825 GS", 234534534, "Linda", "Davidson", 31655580955, 4, currentData);

	Student* student9 = new Student("Ingmar", "van Busschbach", birthDate2, "Hondsdraf", "8255 KB", 628291231, "Erik", "van Busschbach", 31655640355, 0, currentData);
	Student* student10 = new Student("Ingmar1", "van Busschbach", birthDate2, "Hondsdraf", "8255 KB", 628291231, "Erik", "van Busschbach", 31655640355, 0, currentData);
	Student* student11 = new Student("Ingmar2", "van Busschbach", birthDate2, "Hondsdraf", "8255 KB", 628291231, "Erik", "van Busschbach", 31655640355, 1, currentData);
	Student* student12 = new Student("Ingmar3", "van Busschbach", birthDate2, "Hondsdraf", "8255 KB", 628291231, "Erik", "van Busschbach", 31655640355, 0, currentData);
	Student* student13 = new Student("Ingmar4", "van Busschbach", birthDate2, "Hondsdraf", "8255 KB", 628291231, "Erik", "van Busschbach", 31655640355, 2, currentData);
	Student* student14 = new Student("Ingmar5", "van Busschbach", birthDate2, "Hondsdraf", "8255 KB", 628291231, "Erik", "van Busschbach", 31655640355, 0, currentData);
	Student* student15 = new Student("Ingmar6", "van Busschbach", birthDate2, "Hondsdraf", "8255 KB", 628291231, "Erik", "van Busschbach", 31655640355, 3, currentData);
	Student* student16 = new Student("Ingmar7", "van Busschbach", birthDate2, "Hondsdraf", "8255 KB", 628291231, "Erik", "van Busschbach", 31655640355, 0, currentData);
	Student* student17 = new Student("Ingmar8", "van Busschbach", birthDate2, "Hondsdraf", "8255 KB", 628291231, "Erik", "van Busschbach", 31655640355, 4, currentData);

	school->AddStudent(student, course_gamedev);
	school->AddStudent(student2, course_gamedev);
	school->AddStudent(student9, course_gamedev);
	school->AddStudent(student10, course_gamedev);
	school->AddStudent(student1, course_gamedev);
	school->AddStudent(student17, course_gamedev);

	school->AddStudent(student3, course_mediadev);
	school->AddStudent(student4, course_mediadev);
	school->AddStudent(student11, course_mediadev);
	school->AddStudent(student12, course_mediadev);

	school->AddStudent(student5, course_audiovisueel);
	school->AddStudent(student6, course_audiovisueel);
	school->AddStudent(student13, course_audiovisueel);
	school->AddStudent(student14, course_audiovisueel);

	school->AddStudent(student7, course_gameArtist);
	school->AddStudent(student8, course_gameArtist);
	school->AddStudent(student15, course_gameArtist);
	school->AddStudent(student16, course_gameArtist);

	clearConsole();
	school->PrintSchoolData();
	sleepFor(4);
	clearConsole();

	for (int i = 0; i < 10; i++) {
		school->NextYear();
		school->PrintSchoolData();
		sleepFor(1);

		SetConsoleTextAttribute(hConsole, 2);
		std::cout << "\n\nType iets om naar het volgende jaar te gaan\n";
		SetConsoleTextAttribute(hConsole, 0);

		std::string test;
		std::cin >> test;
		clearConsole();
	}

	school->PrintSchoolData();

	SetConsoleTextAttribute(hConsole, 2);
	return 0;
}
