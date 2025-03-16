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



struct Book *books = NULL;

void acceptallbooks(){ 
    books = (struct Book *)malloc(size * sizeof(struct Book));  
   
    for(int i = 0; i < size; i++) {
        struct Book *b1 = &books[i];

        printf("Enter details of book %d\n", i + 1);
        
        printf("\nEnter your book ID: "); 
        scanf("%d", &b1->bookID);

        printf("\nEnter your book TITLE: ");
        scanf("%s", b1->title);

        printf("\nEnter your book author: ");
        scanf("%s", b1->author);

        printf("\nEnter your book genre: ");
        scanf("%s", b1->genre);
    }
}

void showallbooks(){
    printf("\n=== All Books Details ===\n");
    for (int i = 0; i < size; i++) {
        struct Book *b1 = &books[i];

        printf("\nBook %d Details:\n", i + 1);
        printf("Book ID: %d\n", b1->bookID);
        printf("Title: %s\n", b1->title);
        printf("Author: %s\n", b1->author);
        printf("Genre: %s\n", b1->genre);
    }
}




void update(int index)
{
    struct Book *b1 = &books[index];

    printf("update existing %d the book detail\n",index+1);
    printf("enter a new id");
    scanf("%d",&b1->bookID);
    printf("enter your book TITLE:");
    scanf("%s",b1->title);
    printf("enter your book author:");
    scanf("%s",b1->author);
    printf("enter your book genre:");
    scanf("%s",b1->genre);
}


void remove(int index){
    struct Book *b1 = &books[index];
    printf("\n delete existing %d the book detail\n",index+1);
    b1->bookID=0;
    b1->title[0]='\0';
    b1->author[0]='\0';
    b1->genre[0]='\0';
}

int main()
{

int choice;
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
        acceptallbooks();
        break;
    case 2 : 
        showallbooks();
    break;
    case 3 : 
        update(2);
        break;
    case 4 : 
        remove(1);
        break;
    case 5 : 
        return 0;
    default:printf("invalid choice. try again\n");
    
}
}
}





