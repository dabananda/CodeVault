#include <bits/stdc++.h>

using namespace std;

class Student {
 public:
  int id, marks;
  char name[101], section;

  Student(int id, char name[], char section, int marks) {
    this->id = id;
    strcpy(this->name, name);
    this->section = section;
    this->marks = marks;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int id, marks;
    char name[101], section;

    cin >> id >> name >> section >> marks;
    Student s1(id, name, section, marks);
    cin >> id >> name >> section >> marks;
    Student s2(id, name, section, marks);
    cin >> id >> name >> section >> marks;
    Student s3(id, name, section, marks);

    Student topper = s1;
    if (s2.marks > topper.marks || (s2.marks == topper.marks && s2.id < topper.id)) {
     topper = s2;
    }
    if (s3.marks > topper.marks || (s3.marks == topper.marks && s3.id < topper.id)) {
     topper = s3;
    }

    cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.marks << endl;
  }
  return 0;
}