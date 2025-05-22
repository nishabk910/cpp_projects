#include<iostream>
#include "movie.h"

using namespace std;

void Movie::getMoviedetails() {
	
	cout << "enter the movie name: ";
	cin >> title;
	cout << "enter the genre : ";
	cin >> genre;
	cout << "enter the rating :";


}

void Movie::getRating() {

	if (rating >= 10) {
		cout << "HIT";
	}

	else if (rating <= 5)
	{
		cout << "AVG";

	}

	else if (rating < 5)
		cout << "FLOP";

	else
		cout << "invalid";



}

