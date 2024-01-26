#include "Book.h"

Book::Book(const string &title, const Author &author, unsigned yearOfPublication) :
        title(title),
        author(author),
        yearOfPublication(yearOfPublication),
        publisher("unknown"),
        isbn("unknown"),
        genre(Genre::UNKNOWN) {}

Book::Book(const string &title, const Author &author, unsigned yearOfPublication, const string &publisher,
           const string &isbn, Genre genre) :
        title(title),
        author(author),
        yearOfPublication(yearOfPublication),
        publisher(publisher),
        isbn(isbn),
        genre(genre) {}

const string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const string &title) {
    this->title = title;
}

const Author &Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const Author &author) {
    this->author = author;
}

unsigned Book::getYearOfPublication() const {
    return yearOfPublication;
}

void Book::setYearOfPublication(unsigned yearOfPublication) {
    this->yearOfPublication = yearOfPublication;
}

const string &Book::getPublisher() const {
    return publisher;
}

void Book::setPublisher(const string &publisher) {
    this->publisher = publisher;
}

const string &Book::getIsbn() const {
    return isbn;
}

void Book::setIsbn(const string &isbn) {
    this->isbn = isbn;
}

Genre Book::getGenre() const {
    return genre;
}

void Book::setGenre(Genre genreOfTheBook) {
    this->genre = genreOfTheBook;
}

string Book::genre_enum_to_string(const Genre &genreOfTheBook) {

    string result;

    switch (genreOfTheBook) {
        case Genre::FANTASY:
            result = "fantasy";
            break;
        case Genre::ROMANCE:
            result = "romance";
            break;
        case Genre::HORROR:
            result = "horror";
            break;
        case Genre::SCIENCE_FICTION:
            result = "science fiction";
            break;
        case Genre::HISTORY:
            result = "history";
            break;
        case Genre::BIOGRAPHY:
            result = "biography";
            break;
        case Genre::DRAMA:
            result = "drama";
            break;
        case Genre::POETRY:
            result = "poetry";
            break;
        case Genre::UNKNOWN :
            result = "unknown";
            break;
        default:
            result = "The Genre enum class contains new genre(s).";
    }

    return result;

}

void Book::print() const {
    cout << "Title: " << title << endl
         << "Author: " << author.firstName << " " << author.lastName << endl
         << "Year of publication: " << yearOfPublication << endl
         << "Publisher: " << publisher << endl
         << "ISBN: " << isbn << endl
         << "Genre: " << genre_enum_to_string(genre) << endl;
}