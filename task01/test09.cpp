#include "manager.h"

int main() {
	int* marks1 = new int[2] {7, 9};

	Student* st01 = new Student("alex", 14, true, 'm', marks01, 2);
	
	Student** group = new Student * [5] {st01};

	Menager* meneger = new Menager();

	cout << "Avg mark of students list is " << meneger->calculateAvgMark(group, 5) << ".\n";

	delete[] group

	delete st01;

	return 0;
}