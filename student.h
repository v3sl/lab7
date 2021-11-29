#ifndef LAB7_STUDENT_H
#define LAB7_STUDENT_H

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Student {
protected:
    int course;
    int group;
    int number;
    int id;
    char *name;
    Student() = default;
public:
    Student(char *name_s, int course_s, int group_s, int number_s);
    Student(const Student &stud);
    char *getName() const;
    int getCourse() const;
    int getGroup() const;
    int getNumber() const;
    int getId() const;
    void setName(char *newName);
    void setCourse(int newCourse);
    void setGroup(int newGroup);
    friend ostream &operator<<(ostream &out, Student &student);
};
class AfterSessiya : public Student {
protected:
    AfterSessiya() = default;
    int* marks = new int [4];
public:
    AfterSessiya(char *name_s, int course_s, int group_s, int number_s, int mark1_s, int mark2_s, int mark3_s,
                 int mark4_s);
    AfterSessiya(const AfterSessiya &stud);
    void changeMark(int markPos, int changedMark);
    int getMark(int markPos) const;
	friend ostream &operator << (ostream &out, AfterSessiya &student);
	virtual double getAverage();
};
class AfterSessiya2 : public AfterSessiya {
protected:
    AfterSessiya2();
public:
    AfterSessiya2(char *name_s, int course_s, int group_s, int number_s,int mark1_s, int mark2_s, int mark3_s,
                  int mark4_s, int mark5_s);
    AfterSessiya2(const AfterSessiya2 &stud);
	friend ostream &operator << (ostream &out, AfterSessiya2 &student);
	virtual double getAverage();
};

double avgGroupMarks(vector<AfterSessiya*>forMarks);

#endif //LAB7_STUDENT_H
