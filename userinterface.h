#pragma once
#include "books.h"
/*TODO
 * borrow books + inventory
 * admin child class with add, remove functions
 * logins
 */ 
class User {
public:
	User(const std :: string& name = "user", const std :: string& pass = "pass",
			const std :: string& access = "user")
		: name(name), pass(pass), access(access) {}
	void setAccess(const std :: string& new_access)
		{access = new_access;}
	std :: string getName() const {return name;}
	
	void userBorrow(Bookshelf& shelf) {
		std :: string title;
		std :: cout << "Enter book title: ";
		std :: cin >> title;
		Book temp("temp", "temp");
		temp = shelf.bookshelfSearchBook(title);
		if (temp.getTitle().compare("unknown") != 0)
			inventory.emplace_back(temp);
	}
	void userDisplayInventory() const {
		if (inventory.empty()) std :: cout << std :: endl << "Inventory is empty!"
											<< std :: endl;
		else {
			std :: cout << std :: endl << name << " inventory\n\n"
					<< "Number of Books: " << inventory.size() << "\n\n";
			for (const auto& book : inventory) 
				std :: cout << book.getTitle() << " by " << book.getAuthor() << '\n';
			std :: cout << std :: endl;
		}	
	}
private:
	std :: string name, pass, access;
	std :: vector <Book> inventory;
}; 
