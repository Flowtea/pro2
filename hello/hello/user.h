#pragma once
using namespace std;

class User {
public:
	User(int id, int age );
	~User();
	void fing();



private:
	int m_id;
	int m_age;

};