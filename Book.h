#pragma once

#include <iostream>
#include <string>

using namespace std;

enum class Genre {
    FANTASY,
    ROMANCE,
    HORROR,
    SCIENCE_FICTION,
    HISTORY,
    BIOGRAPHY,
    DRAMA,
    POETRY,
    UNKNOWN
};

typedef struct author {
    string firstName;
    string lastName;
} Author;

class Book {

private:

    string title;
    Author author;
    unsigned yearOfPublication;
    string publisher;
    string isbn;
    Genre genre;

public:

    Book() = default;

    Book(const string &title, const Author &author, unsigned yearOfPublication);

    Book(const string &title, const Author &author, unsigned yearOfPublication, const string &publisher,
         const string &isbn, Genre genre);

    const string &getTitle() const;

    void setTitle(const string &title);

    const Author &getAuthor() const;

    void setAuthor(const Author &author);

    unsigned getYearOfPublication() const;

    void setYearOfPublication(unsigned yearOfPublication);

    const string &getPublisher() const;

    void setPublisher(const string &publisher);

    const string &getIsbn() const;

    void setIsbn(const string &isbn);

    Genre getGenre() const;

    void setGenre(Genre genre);

    static string genre_enum_to_string(const Genre &genre);

    void print() const;

};
