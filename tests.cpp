#include "gtest/gtest.h"
#include "student.h"

TEST(Getname, test1){
	Student testStudent("Sasha", 1,1,1);
	ASSERT_EQ(testStudent.getName(), "Sasha");
}
TEST(Getname, test2){
	AfterSessiya testStudent("tojeSasha", 1,1,1,1,1,1,1);
	ASSERT_EQ(testStudent.getName(), "tojeSasha");
}
TEST(Getname, test3){
	AfterSessiya2 testStudent("tojeSasha", 1,1,1,1,1,1,1,1);
	ASSERT_EQ(testStudent.getName(), "tojeSasha");
}
TEST(getCource, test1){
	Student testStudent("Sasha", 1,1,1);
	ASSERT_EQ(testStudent.getCourse(),1);
}
TEST(getCource, test2){
	AfterSessiya testStudent("Sasha", 3,1,1,1,1,1,1);
	ASSERT_EQ(testStudent.getCourse(),3);
}
TEST(getCource, test3){
	AfterSessiya2 testStudent("Sasha", 5,1,1,1,1,1,1,1);
	ASSERT_EQ(testStudent.getCourse(),5);
}
TEST(getGroup, test1){
	Student testStudent("Sasha", 1,1,1);
	ASSERT_EQ(testStudent.getGroup(),1);
}
TEST(getGroup, test2){
	AfterSessiya testStudent("Sasha", 1,3,1,1,1,1,1);
	ASSERT_EQ(testStudent.getGroup(),3);
}
TEST(getGroup, test3){
	AfterSessiya2 testStudent("Sasha", 1,312312231,1,1,1,1,1,1);
	ASSERT_EQ(testStudent.getGroup(),312312231);
}
TEST(getNumber, test1){
	Student testStudent("Sasha", 1,1,1);
	ASSERT_EQ(testStudent.getNumber(), 1);
}
TEST(getNumber, test2){
	AfterSessiya testStudent("Sasha", 1,1,1234,1,1,1,1);
	ASSERT_EQ(testStudent.getNumber(), 1234);
}
TEST(getNumber, test3){
	AfterSessiya2 testStudent("Sasha", 1,1,1433242423,1,1,1,1,1);
	ASSERT_EQ(testStudent.getNumber(), 1433242423);
}
TEST(getId, test1){
	Student testStudent("Sasha", 1,1,1);
	ASSERT_EQ(testStudent.getId(), 13);
}
TEST(getId, test2){
	AfterSessiya testStudent("Sasha", 1,1,1,1,1,1,1);
	ASSERT_EQ(testStudent.getId(), 14);
}
TEST(getId, test3){
	AfterSessiya2 testStudent("Sasha", 1,1,1,1,1,1,1,1);
	ASSERT_EQ(testStudent.getId(), 15);
}
TEST(getMark, test1){
	AfterSessiya testStudent("Sasha", 1,1,1,1,2,3,4);
	ASSERT_EQ(testStudent.getMark(1),1);
	ASSERT_EQ(testStudent.getMark(2),2);
	ASSERT_EQ(testStudent.getMark(3),3);
	ASSERT_EQ(testStudent.getMark(4),4);
}
TEST(getMark, test2){
	AfterSessiya2 testStudent("Sasha", 1,1,1,10,20,30,40,312);
	ASSERT_EQ(testStudent.getMark(1),10);
	ASSERT_EQ(testStudent.getMark(2),20);
	ASSERT_EQ(testStudent.getMark(3),30);
	ASSERT_EQ(testStudent.getMark(4),40);
	ASSERT_EQ(testStudent.getMark(5),312);
}
TEST(getAverage, test1){
	AfterSessiya testStudent("Sasha", 1,1,1,1,2,3,4);
	ASSERT_DOUBLE_EQ(testStudent.getAverage(), 2.5);
}
TEST(getAverage, test2){
	AfterSessiya testStudent("Sasha", 1,1,1,2,2,1,2);
	ASSERT_DOUBLE_EQ(testStudent.getAverage(), 1.75);
}
TEST(getAverage, test3){
	AfterSessiya2 testStudent("Sasha", 1,1,1,2,2,1,2,1);
	ASSERT_DOUBLE_EQ(testStudent.getAverage(), 1.6);
}
TEST(AvgGroupMarks, test1){
	AfterSessiya me("Sasha", 1,1,1,1,1,1,1);
	AfterSessiya me2("Sasha", 1,1,1,2,2,2,2);
	AfterSessiya me3("Sasha", 1,1,1,3,3,3,3);
	AfterSessiya me4("Sasha", 1,1,1,4,4,4,4);
	AfterSessiya me5("Sasha", 1,1,1,5,5,5,5);
	AfterSessiya me6("Sasha", 1,1,1,5,5,5,6);
	vector<AfterSessiya*>forStudents = {&me,&me2,&me3,&me4,&me5, &me6};
	ASSERT_DOUBLE_EQ(avgGroupMarks(forStudents), 3.375 );
}
TEST(AvgGroupMarks, test2){
	AfterSessiya2 me("Sasha", 1,1,1,1,1,1,1,1);
	AfterSessiya2 me2("Sasha", 1,1,1,2,2,2,2,1);
	AfterSessiya2 me3("Sasha", 1,1,1,3,3,3,3,1);
	AfterSessiya2 me4("Sasha", 1,1,1,4,4,4,4,1);
	AfterSessiya2 me5("Sasha", 1,1,1,5,5,5,5,1);
	AfterSessiya2 me6("Sasha", 1,1,1,5,5,5,6,1);
	vector<AfterSessiya*>forStudents = {&me,&me2,&me3,&me4,&me5, &me6};
	ASSERT_DOUBLE_EQ(avgGroupMarks(forStudents), 3.375 );
}
