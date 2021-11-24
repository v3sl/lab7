#include"student.h"

int main() {
	AfterSessiya me("Sasha", 1,1,1,1,1,1,1);
	AfterSessiya me2("Sasha", 1,1,1,2,2,2,2);
	AfterSessiya me3("Sasha", 1,1,1,3,3,3,3);
	AfterSessiya me4("Sasha", 1,1,1,4,4,4,4);
	AfterSessiya me5("Sasha", 1,1,1,5,5,5,5);
	vector<AfterSessiya*>forStudents = {&me,&me2,&me3,&me4,&me5};
	avgGroupMarks(forStudents);
    return 0;
}
