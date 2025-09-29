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