#include <iostream>
#include "userinterface.h"

int main() {
//	FOR TESTING
 	Bookshelf shelf1;
	Book math("Mathematics", "Franz");
	shelf1.bookshelfAddBook(math);
	shelf1.bookshelfDisplay();
	User rets("rets", "missu", "user");
	rets.userBorrow(shelf1);
	rets.userDisplayInventory();
 
	

	return 0;
}
