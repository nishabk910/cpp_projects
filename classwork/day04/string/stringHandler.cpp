#include <iostream>


using namespace std;

int main(int argc, char* argv[])
{
	cout << argc << endl;

	for (int i = 0;i < argc;i++)
		cout << "argv[" << i << "]:" << arg[i] << endl;
	int res = atoi(argv[1]) + atoi(argv[2]);
	cout << "res:" << res << endl;

	return 0;

}

