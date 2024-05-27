#pragma once
#include "books.h"
/*TODO
 * borrow books + inventory
 * admin child class with add, remove functions
 * logins
 */ 
class User {
public:
	User(const std :: string& name = "user", const std :: string& pass = "pass"
			const std :: string& access = "user")
		: name(name), pass(pass), access(access) {}
	void setAccess(const std :: string& new_access)
		{access = new_access;}
	std :: string getName() const {return name;}
	
private:
	std :: string name, pass, access;   
}; 
