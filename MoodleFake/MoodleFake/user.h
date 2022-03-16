#pragma once
#include <string>
#include <iostream>

using namespace std;

struct User {
	User* next;
	string username;
	string password;
	string role;
	string Class;
};

void addAcc(User*& acc);
void getAcc(User*& acc);
User* login(string username, string password);

