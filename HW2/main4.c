#include <stdio.h>

typedef struct Books{
    int id;
    int price;
    char title[100];
}book_t;

int total_price(book_t books[], int size){
    int total=0;
    for(int i=0; i<size; i++){
        total+=books[i].price;
    }
    return total;
}

void list_books(book_t books[], int size){
    printf("Id\tPrice\tTitle\n");
    for(int i=0; i<size; i++){
        printf("%d\t%d\t%s\n", books[i].id, books[i].price, books[i].title);
    }
}

int main(){
    book_t books[]={
        {1, 1000, "All the Light We Cannot See"},
        {2, 300, "The 38 Letters from J.D. Rockfeller to his son"},
        {3, 1000, "The Ballad of Songbirds and Sankes"},
        {4, 550, "Killers of the Flower Moon"},
        {5, 870, "Elon Musk"},
        {6, 1344, "Milk and Honey 12-Month 2024"}
    };
    int size=sizeof(books)/sizeof(books[0]);
    list_books(books, size);
    printf("\nTotal Price: %d\n", total_price(books, size));

    return 0;
}
