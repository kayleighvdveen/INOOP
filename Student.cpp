#include <iostream>
#include<string>
#include "Student.h"

Student::Student(studentName, studentAge)
{
	name = studentName;			// name becomes personalized 
	age = studentAge;			// same with age
}

int Student::getHomework(homework) {
	homework = 1;				// homework? just one subject, when finished return to 0 (false).
	return 0;
}

/*Student::~Student(studentName, studentAge)
{
	name = studentName;
	age = studentAge;
}*/
