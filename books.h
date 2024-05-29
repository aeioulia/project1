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
		if (shelf.empty()) std :: cout << std :: endl << "Bookshelf is empty!"
										<< std :: endl;
		else {
			std :: cout << std :: endl << "Number of Books: "
						<< shelf.size() << "\n\n";
			for (const auto& book : shelf) 
				std :: cout << book.getTitle() << " by " << book.getAuthor() << '\n';
			std :: cout << std :: endl;
		}
	} 
	Book bookshelfSearchBook(const std :: string& title) {
		for (const auto& book : shelf)
			if (book.getTitle().compare(title) == 0) return book;
		Book unknown("unknown", "unknown");
		std :: cout << std :: endl << "No book titled '" << title << "'"
							<< std :: endl;
		return unknown;
	}
	void bookshelfAddBook(const Book& book)
		{shelf.emplace_back(book);}
	
private:
	std :: vector <Book> shelf;
};
