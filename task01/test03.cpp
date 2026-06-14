#include "Header.h"

Student findBestStudent(Student list[]) {
	Student best = list[0];


	for (int i = 1; i < 3; i++) {
		if (best.mark < list[i].mark) {
			best = list[i];
		}
	}
	return best;

}

int main() {
	Student st01, st02;

	st01.name = "alex";
	st01.age = 14;
	st01.alive = true;
	st01.mark = 9.5;
	st01.gender = 'm';

	st02.name = "anna";
	st02.age = 13;
	st02.alive = true;
	st02.mark = 7.8;
	st02.gender = 'f';

	st01 = st02;

	cout << "Before: st01.mark = " << st01.mark << " st02.mark = " << st02.mark << endl;

	st01.mark = 10;

	cout << "After: st01.mark = " << st01.mark << " st02.mark = " << st02.mark << endl;

	return 0;
}