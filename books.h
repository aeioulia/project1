#pragma once
#include <string>
#include <vector>

class Book {
public:
	Book(const std :: string& title, const std :: string& author)
		: title(title), author(author) {}
	std :: string getTitle() const {return title;}
	std :: string getAuthor() const {return author;}
private:
	std :: string title, author;
};

class Bookshelf {
public:
	void bookshelfDisplay() const {
		std :: cout << std :: endl << "Number of Books: " << shelf.size() << "\n\n";
		for (const auto& book : shelf)
			{std :: cout << book.getTitle() << " by " << book.getAuthor() << '\n';}
		std :: cout << std :: endl;
	}
	void bookshelfAddBook(const Book& book)
		{shelf.emplace_back(book);}
	
private:
	std :: vector <Book> shelf;
};
