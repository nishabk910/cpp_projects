#include <iostream>
#include <exception>


using namespace std;

int main()
{
	string err = "nisha";
	string dbyZeroErr = "Divide by Zero error occured";
	string nullPtrErr = "Memory allocation failed";
	char* ptr = nullptr;
	int n1 = 10, n2 = 0;
	try {
		int* arr = new int[9999999999999];
		if (arr == nullptr)
			throw arr;
	}
	catch (int e)
	{
		cout << "Caught an exception: " << e << endl;
	}
	catch (const string e)
	{
		cout << "Caught an exception: " << e << endl;
	}

	catch (bad_alloc& e)
	{
		cout << "Error (bad_alloc): " << e.what() << endl;
	}

	catch (exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	return 0;
}




vector<int>arr;

cout << arr.capacity() << "\t" << arr.size() << end;
arr.push_back(10)

cout << arr.capacity() << "\t" << arr.size() << end;
arr.push_back(22);

cout << arr.capacity() << "\t" << arr.size() << end;
arr.push_back(23);

cout << arr.capacity() << "\t" << arr.size() << end;


int t = 10;
for (auto i : arr)//first ele type will take up, int is i and assign i val n print , it might  be hetrogeneous 
cout << i << endl;






