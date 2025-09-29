#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits> 

using namespace std;

// defines a movie with a title, release year, and screenwriter.
class Movie {
private:
    string screenwriter;
    int yearReleased;
    string title;

public:
    // setter for screenwriter.
    void setScreenwriter(const string& sw) {
        screenwriter = sw;
    }

    // setter for year released.
    void setYearReleased(int year) {
        yearReleased = year;
    }

    // setter for title.
    void setTitle(const string& t) {
        title = t;
    }

    // getter for screenwriter.
    string getScreenwriter() const {
        return screenwriter;
    }

    // getter for year released.
    int getYearReleased() const {
        return yearReleased;
    }

    string getTitle() const {
        return title;
    }

    // prints the movie's data in the specified format.
    void print() const {
        cout << "Movie: " << screenwriter << endl;
        cout << "Year released: " << yearReleased << endl;
        cout << "Screenwriter: " << title << endl << endl;
    }
};

int main() {
    vector<Movie> movie_container;
    ifstream inputFile("input.txt");

    if (!inputFile) {
        cerr << "Error: Could not open input file." << endl;
        return 1;
    }

    string tempTitle, tempScreenwriter;
    int tempYear;

    // read from the file as long as there are lines to process.
    while (getline(inputFile, tempTitle)) {
        inputFile >> tempYear;
        inputFile.ignore(numeric_limits<streamsize>::max(), '\n'); 
        getline(inputFile, tempScreenwriter);

        Movie tempMovie;
        tempMovie.setTitle(tempTitle);
        tempMovie.setYearReleased(tempYear);
        tempMovie.setScreenwriter(tempScreenwriter);

        movie_container.push_back(tempMovie);
    }

    inputFile.close();

    // output the contents of the vector.
    for (const auto& movie : movie_container) {
        movie.print();
    }

    return 0;
}