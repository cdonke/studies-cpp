// ProjectTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdio>

struct Card {
	const char* title;
	const char* author;
	const char* publisher;
	const char* subject;
	const char* isbn;
	const char* oclc;
	int ddc1;
	int ddc2;
	int year_pub;
	int year_acq;
	int quantity;
};

int main()
{
	Card library[10];
	library[0] = {
		"Title ",
		"Author ",
		"Publisher ",
		"Subject ",
		"ISBN ",
		"OCLC ",
		3,
		9,
		1995,
		2000,
		2
	};
	
	Card lc1 = *library;


	printf("Title: %s\n", lc1.title);
	printf("Author: %s\n", lc1.author);
	printf("Publisher: %s\n", lc1.publisher);
	printf("Subject: %s\n", lc1.subject);
	printf("ISBN: %s\n", lc1.isbn);
	printf("WorldCat (OCLC): %s\n", lc1.oclc);
	printf("Dewey Decimal: %d.%d\n", lc1.ddc1, lc1.ddc2);
	printf("Year published: %d\n", lc1.year_pub);
	printf("Year acquired: %d\n", lc1.year_acq);
	printf("Quantity: %d\n", lc1.quantity);
}
