#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    struct Book {
    char title[100];
    char author[50];
    double price;
    };

    struct Book myBook;
    strcpy(myBook.title,"The Catcher in the Rye");
    strcpy(myBook.author,"J.D.Salinger");
    myBook.price = 12.99;

    printf("Book Title:%s\n",myBook.title);
    printf("Author: %s\n",myBook.author);
    printf("Price:$%.2f\n",myBook.price);
    return 0;
}
