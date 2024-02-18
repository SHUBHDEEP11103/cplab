#include <iostream>
#include <cstring>

class Movie {
private:
    char title[100];
    int year;
    char director[100];

public:
    void setTitle(const char *newTitle) {
        strncpy(title, newTitle, sizeof(title));
        title[sizeof(title) - 1] = '\0'; 
    }

    void setYear(int newYear) {
        year = newYear;
    }

    void setDirector(const char *newDirector) {
        strncpy(director, newDirector, sizeof(director));
        director[sizeof(director) - 1] = '\0';
    }

    void displayInfo() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Director: " << director << std::endl;
    }
};

int main() {
    Movie myFavoriteMovie;

    myFavoriteMovie.setTitle("Inception");
    myFavoriteMovie.setYear(2010);
    myFavoriteMovie.setDirector("Christopher Nolan");

    std::cout << "My favorite movie information:" << std::endl;
    myFavoriteMovie.displayInfo();

    return 0;
}
