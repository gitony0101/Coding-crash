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
  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
    cout << it->m_name << " " << it->m_age << endl;
  }
}

int main() {
  test_03();
  return 0;
}
