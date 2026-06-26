#include "manager.h"

int main() {
	int* marks1 = new int[2] {7, 9};
	int* marks1 = new int[3] {7, 8, 9};
	int* marks1 = new int[4] {7,9,9,9};
	int* marks1 = new int[5] {7, 9, 10, 9, 10};
	int* marks1 = new int[6] {8,8,8, 8, 9, 10};

	Student* st01 = new Student("alex", 14, true, 'm', marks01, 2);
	Student* st02 = new Student("anna", 13, true, 'f', marks02, 3);
	Student* st03 = new Student("happy", 13, true, 'm', marks03, 4);
	Student* st04 = new Student("alice", 15, true, 'f', marks04, 5);
	Student* st05 = new Student("peter", 14, true, 'm', marks05, 6);

	Group* group = new Group();
	group->setName("P23125");

	Menager* meneger = new Menager();

	group->addStudent(st01);
	group->addStudent(st02);
	group->addStudent(st03);
	group->addStudent(st04);
	group->addStudent(st05);

	group->removeStudent(3);

	delete group

	delete st01;
	delete st02;
	delete st01;
	delete st02; 
	delete st02;

	return 0;
}