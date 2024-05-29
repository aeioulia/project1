#include <iostream>
#include "userinterface.h"

int main() {
//	FOR TESTING
 	Bookshelf bookshelf;
	Book math("Mathematics", "Franz");
	bookshelf.bookshelfAddBook(math);
	bookshelf.bookshelfDisplay();
	User rets("rets", "missu", "user");
	rets.userDisplayInventory();
 
	

	return 0;
}
