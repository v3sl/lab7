#include "student.h"

int uniqueId = 1;
Student::Student(char *name_s, int course_s, int group_s, int number_s) : name(name_s), course(course_s),
                                                                          group(group_s),
                                                                          number(number_s) {
	assert(course > 0);
	assert(group > 0);
	assert(number > 0);
	id = uniqueId;
	uniqueId++;
}
Student::Student(const Student &stud) {
	name = stud.name;
    course = stud.course;
    group = stud.group;
    number = stud.number;
    id = stud.id;
}
AfterSessiya::AfterSessiya(char *name_s, int course_s, int group_s, int number_s, int mark1_s, int mark2_s, int mark3_s,
	int mark4_s): Student(name_s, course_s, group_s, number_s){
	marks[0] = mark1_s;
	marks[1] = mark2_s;
	marks[2] = mark3_s;
	marks[3] = mark4_s;
	assert(marks[0] >= 0);
	assert(marks[1] >= 0);
	assert(marks[2] >= 0);
	assert(marks[3] >= 0);
}
AfterSessiya::AfterSessiya(const AfterSessiya &stud): Student(stud) {
	marks[0] = stud.marks[0];
	marks[1] = stud.marks[1];
	marks[2] = stud.marks[2];
	marks[3] = stud.marks[3];
}
AfterSessiya2::AfterSessiya2(char *name_s, int course_s, int group_s, int number_s, int mark1_s, int mark2_s, int mark3_s,
							int mark4_s, int mark5_s): AfterSessiya(name_s, course_s, group_s, number_s,
								mark1_s,mark2_s,mark3_s,mark4_s){
	marks[0] = mark1_s;
	marks[1] = mark2_s;
	marks[2] = mark3_s;
	marks[3] = mark4_s;
	marks[4] = mark5_s;
	assert(marks[0] >= 0);
	assert(marks[1] >= 0);
	assert(marks[2] >= 0);
	assert(marks[3] >= 0);
	assert(marks[4] >= 0);

}
AfterSessiya2::AfterSessiya2(const AfterSessiya2 &stud): AfterSessiya(stud) {
	marks[0] = stud.marks[0];
	marks[1] = stud.marks[1];
	marks[2] = stud.marks[2];
	marks[3] = stud.marks[3];
	marks[4] = stud.marks[4];
}
char *Student::getName() const {
    return name;
}
int Student::getCourse() const {
    return course;
}
int Student::getGroup() const {
    return group;
}
int Student::getNumber() const {
    return number;
}
int Student::getId() const {
    return id;
}
void AfterSessiya::changeMark(int markPos, int changedMark) {
    marks[markPos - 1] = changedMark;
}
int AfterSessiya::getMark(int markPos) const {
    return marks[markPos - 1];
}
void Student::setName(char *newName) {
    name = newName;
}
void Student::setCourse(int newCourse) {
    course = newCourse;
}
void Student::setGroup(int newGroup) {
    group = newGroup;
}

double AfterSessiya::getAverage(){
	double Sum = 0;
	Sum = marks[0]+marks[1]+marks[2]+marks[3];
	return Sum/4;
}

double AfterSessiya2::getAverage(){
	double Sum = 0;
	Sum = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
	return Sum/5;
}

ostream &operator<<(ostream &out, Student &student) {
    out << "Student's name " << student.name << '\n'
        << "Student's course " << student.course << '\n'
        << "Student's group " << student.group << '\n'
        << "Student's number " << student.number << '\n'
        << "Student's id " << student.id << '\n';
    return out;
}
ostream &operator<<(ostream &out, AfterSessiya &student) {
	out << "Student's name " << student.name << '\n'
		<< "Student's course " << student.course << '\n'
		<< "Student's group " << student.group << '\n'
		<< "Student's number " << student.number << '\n'
		<< "Student's id " << student.id << '\n'
		<< "Student's marks " << student.marks[0] << ' '
		<< student.marks[1] << ' '
		<< student.marks[2] << ' '
		<< student.marks[3] << '\n';
		return out;
	}
ostream &operator<<(ostream &out, AfterSessiya2 &student) {
	out << "Student's name " << student.name << '\n'
		<< "Student's course " << student.course << '\n'
		<< "Student's group " << student.group << '\n'
		<< "Student's number " << student.number << '\n'
		<< "Student's id " << student.id << '\n'
		<< "Student's marks " << student.marks[0] << ' '
		<< student.marks[1] << ' '
		<< student.marks[2] << ' '
		<< student.marks[3] << ' '
		<< student.marks[4] << '\n';
	return out;
}

double avgGroupMarks(vector<AfterSessiya*>forMarks){
	double sum = 0;
	double avg;
	for (int i = 0; i < forMarks.size(); i++){
		AfterSessiya* stud = forMarks[i];
		for (int j = 1; j < 5; j++)
			sum += stud->getMark(j);
	}
	avg = sum/forMarks.size()/4;
	return avg;
}

