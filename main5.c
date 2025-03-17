#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define size 3
struct Book {
    int bookID;             // Unique identifier for the book
    char title[100];        // Title of the book
    char author[50];        // Author of the book
    char genre[50];         // Genre/category of the book
};



struct Book *ptrBook = NULL;

void acceptallbooks(struct Book *ptrBook){ 
    // books = (struct Book *)malloc(size * sizeof(struct Book));  
   
    for(int i = 0; i < size; i++) {
        // struct Book *b1 = &books[i];

        printf("Enter details of book %d\n", i + 1);
        
        printf("\nEnter your book ID: "); 
        scanf("%d", &ptrBook->bookID);

        printf("\nEnter your book TITLE: ");
        scanf("%s", ptrBook->title);

        printf("\nEnter your book author: ");
        scanf("%s", ptrBook->author);

        printf("\nEnter your book genre: ");
        scanf("%s", ptrBook->genre);
    }
}

void showallbooks(struct Book *ptrBook){
    printf("\n=== All Books Details ===\n");
    for (int i = 0; i < size; i++) {
        // struct Book *ptrBook = &books[i];

        printf("\nBook %d Details:\n", i + 1);
        printf("Book ID: %d\n", ptrBook->bookID);
        printf("Title: %s\n", ptrBook->title);
        printf("Author: %s\n", ptrBook->author);
        printf("Genre: %s\n", ptrBook->genre);
    }
}




void update(int index)
{
    struct Book *b1 = &ptrBook[index];

    printf("update existing %d the book detail\n",index+1);
    printf("enter a new id");
    scanf("%d",&ptrBook->bookID);
    printf("enter your book TITLE:");
    scanf("%s",ptrBook->title);
    printf("enter your book author:");
    scanf("%s",ptrBook->author);
    printf("enter your book genre:");
    scanf("%s",ptrBook->genre);
}


void remove(int index){
    struct Book *b1 = &ptrBook[index];
    printf("\n delete existing %d the book detail\n",index+1);
    b1->bookID=0;
    b1->title[0]='\0';
    b1->author[0]='\0';
    b1->genre[0]='\0';
}

int main()
{

int choice;
ptrBook = (struct Book *)malloc(size * sizeof(struct Book));
while(1){ 
printf("\nbooks management system\n");
printf("==========================\n");
printf("\n1.add new book");
printf("\n2.view all books");
printf("\n3.update book information");
printf("\n4.delete book");
printf("\n5.exit");
printf("\nenter your choice(1-5): ");
scanf("%d",& choice);

switch (choice)
{
    case 1 : 
        acceptallbooks(ptrBook);
        break;
    case 2 : 
        showallbooks(ptrBook);
    break;
    case 3 : 
        update(2);
        break;
    case 4 : 
        remove(1);
        break;
    case 5 : 
        free(ptrBook); 
        return 0;
    default:printf("invalid choice. try again\n");
    
}
}
}

