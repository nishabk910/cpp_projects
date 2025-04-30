#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	/*
	char name[20] = {'n','i','s','h','a'};//"nisha";
	for (int i = 0;i < 20;i++)
		printf("%c = %d\n", name[i], name[i]);
	for (int i = 39, count = 0;i < 59;i++)
		name[count++] = i;
	cout << "============"<<endl;
	for (int i = 0;i < 20;i++)
		printf("%c = %d\n", name[i], name[i]);
	name[0] = 'n';
	name[1] = 'i';
	name[2] = 's';
	name[3] = 'h';
	name[4] = 'a';
	cout << "============" << endl;

	for (int i = 0;i < 20;i++)
		printf("%c = %d\n", name[i], name[i]);

	printf("Name: %s\n", name);

	*/

	char name[20];// = "nisha krishna";
	//cout << strlen(name)<<endl;
	//scanf("%[^\n]s", name);
	fgets(name, 19, stdin);
	puts(name);
	printf("%s\n", name);
	return 0;
}
