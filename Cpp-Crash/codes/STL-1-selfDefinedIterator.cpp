#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// self defined datatype:
class Person {
public:
  Person(string name, int age) {
    this->m_name = name;
    this->m_age = age;
  }
  string m_name;
  int m_age;
};

void test_03() {
  vector<Person> v;
  Person p1("Tony", 8);
  Person p2("Tom", 9);
  Person p3("Jack", 10);
  Person p4("Jill", 11);

  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);

  // Every container has the iterator of its own.
  // like vector<Person>::iterator
  //
  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
    // cout << it->m_name << " " << it->m_age << endl;
    printf("Name : %s\n, Age: %d\n.", it->m_name.c_str(), it->m_age);
  }

  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
    cout << "Name: " << (*it).m_name << "Age : " << (*it).m_age << endl;
  }
}

// Store self defiend datatype POINTER
void test_04() {
  vector<Person *> v;
  Person p1("Tony", 8);
  Person p2("Tom", 9);
  Person p3("Jack", 10);
  Person p4("Jill", 11);

  v.push_back(&p1);
  v.push_back(&p2);
  v.push_back(&p3);
  v.push_back(&p4);

  for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++) {
    // *it  ---- Person*

    printf("Name : %s\n, Age: %d\n.", (*it)->m_name.c_str(), (*it)->m_age);
  }
}
// contaiener nest container

void test_05() {
  vector<vector<int>> v;
  vector<int> v1;
  vector<int> v2;
  vector<int> v3;
  // def the value for the smaller container.
  for (int i = 0; i < 5; i++) {

    v1.push_back(i + 1);
    v2.push_back(i + 10);
    v3.push_back(i + 100);
  }
  // put the smaller containers into the bigger container.
  v.push_back(v1);
  v.push_back(v2);
  v.push_back(v3);

  // *it  === vector<int>
  for (vector<vector<int>>::iterator vit = v.begin(); vit != v.end(); vit++) {
    // *it  === vector<int>
    for (vector<int>::iterator it = (*vit).begin(); it != (*vit).end(); it++) {
      // *it  === int
      printf("%d\n", *it);
    }
  }
}
// RUN
int main() {
  // test_03();
  // test_04();
  test_05();
  return 0;
}
