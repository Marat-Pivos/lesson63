#include "Student.h"

int main() {
	Student* st01 = new Student("alex", 14, true, 'm', 9.5);
	Student* st02 = new Student("olya", 15, true, 'f', 7.8);
	Student* st03 = new Student(st02);
	Student* st04 = new Student(st02);
	Student* st05 = new Student(st02);

	cout << st01->toString() << endl;
	cout << st02->toString() << endl;
	cout << st03->toString() << endl;
	cout << st04->toString() << endl;
	cout << st05->toString() << endl;

	return 0;
}