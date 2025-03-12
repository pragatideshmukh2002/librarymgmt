#include <stdio.h>
#define size 3
struct Book {
    int bookID;             // Unique identifier for the book
    char title[100];        // Title of the book
    char author[50];        // Author of the book
    char genre[50];         // Genre/category of the book
    //int available;          // Availability (1 for available, 0 for issued)
};


struct Book books[size];


void acceptallbooks(){ 
    for(int i=0;i<size;i++){
        printf("enter a details of books %d\n",i+1);
    printf("\nenter your book id:"); 
    scanf("%d ",&books[i].bookID);
    printf("\nenter your book TITLE:");
    scanf("%s",books[i].title);
    printf("\nenter your book author:");
    scanf("%s",books[i].author);
    printf("\nenter your book genre:");
    scanf("%s",books[i].genre);
    }
}


    

void showallbooks(){
    for(int i=0;i<size;i++){
        printf("all books details");
    printf("Bookid:%d\n",books[i].bookID);
    printf("title:%s\n",books[i].title);
    printf("author:%s\n",books[i].author);
    printf("genre:%s\n",books[i].genre);
    }
}

void showbook(int index){
    printf("book detail");
    printf("Bookid:%d\n",books[index].bookID);
    printf("title:%s\n",books[index].title);
    printf("author:%s\n",books[index].author);
    printf("genre:%s\n",books[index].genre);  
}

void update(int index)
{
    printf("update existing %d the book detail\n",index+1);
    printf("enter a new id");
    scanf("%d",&books[index].bookID);
    printf("enter your book TITLE:");
    scanf("%s",books[index].title);
    printf("enter your book author:");
    scanf("%s",books[index].author);
    printf("enter your book genre:");
    scanf("%s",books[index].genre);
}
void delete1(int index){
    printf("\n delete existing %d the book detail\n",index+1);
    books[index].bookID=0;
    books[index].title[0]='\0';
    books[index].author[0]='\0';
    books[index].genre[0]='\0';
}
int main(){

// acceptallbooks();
// showallbooks();

// int index;
// printf("enter a index of show details:");
// scanf("%d",&index);

// showbook(index);
// update(index);
// showallbooks();



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
    case 1 : acceptallbooks();break;
    case 2 : showallbooks();break;
    case 3 : update(2);break;
    case 4 : delete1(1);break;
    case 5 : return 0;
    default:printf("invalid choice. try again\n");
    
}
}
}









