#pragma once
#include <string>

class Book {
public:
	Book(const std :: string& title,
			const std :: string& author)
		: title(title), author(author) {}
	std :: string getTitle() const {return title;}
	std :: string getAuthor() const {return author;}
    
	 	
private:
	std :: string title, author;
};
