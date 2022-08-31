#include"user.h"
#include<iostream>
User::User(int id,int age)
{
	m_age = age;
	m_id = id;

}
User::~User()
{


}
void User::fing()
{
	cout << m_age << endl;

}