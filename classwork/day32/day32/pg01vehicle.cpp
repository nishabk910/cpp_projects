#include<iostream>


using namespace std;


class Vehicle {
protected:
	string make;
	string model;
	


public:
	Vehicle(string make, string model) 
	{
		this->make = make;
		this->model = model;
		cout << "Starting the Generic Vehicle\n" << endl;
		cout << "stopping the Generic Vehicle\n" << endl;

	}
	void start()
	{
		cout << "starting the" << make << " " << model<<endl;

	}
	void stop() {
		cout << "stopping the" << make <<" " << model<<endl;

	}

};

class Car :public Vehicle 
{
protected:
	int numberOfDoors;
public:
	Car(string make, string model, int numberOfDoor) :Vehicle(make, model)
	{}

	void honk() {
		cout << "honking the" << make << " " << model<<endl;

	}


};

int main()
{
	
	Car c("toyota", "camry", 4);

	c.start();
	c.honk();
	c.stop();
	

	return 0;






}