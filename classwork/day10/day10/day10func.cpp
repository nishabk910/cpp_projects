/*
functions of diff type: calling of func

1. call by value
2. call by pointers
3.call by refrence

call by address is different from call by value
call by ref is available in c++ and not in c


//c++ is application prgm so call by reference, 
if writing devivce drive,sys device ,kernel code in cpp then we use call by address ,pointers

far pointers=management of devices 
*/


#include <iostream>

int add(int, int);
int updateAdd(int, int);
int updateAdd2(int*, int*);
int updateAdd3(int&, int&);//reference variable
using namespace std;
 

int main()
{
	int a =10,b= 20;
	cout<<"address of a="<<&a<<"\taddress of b="<<&b<<endl;// to print ram address of a and b , where it is stored
	int res = add(a,b);
	cout << res << endl;
	res=updateAdd(a,b);
	cout << res << endl;
	cout<<"a="<<a<<"\tb="<<b<<endl;//if want to change original i have to change the value stored at pariticular address
	res=updateAdd2(&a,&b);//pass the address of a and b in the calling so its called call by address,when u want to change the value of the original u have to pass the address of the variable 
	cout << res << endl;
	cout << "a=" << a << "\tb=" << b << endl;
	res = updateAdd3(a, b);//normally we pass the value of a and b but catching it as a reference, that way the reference will point to the original value or address
	cout << res << endl;
	cout << "a=" << a << "\tb=" << b << endl;


	return 0;
}

int add(int v1, int v2)
{
	return v1+ v2;
}

int updateAdd(int v1, int v2)
{
	v1*= 2;
	v2 /= 3;
    cout<<"v1="<<v1<<"\tv2="<<v2<<endl;	
	return v1+ v2;
}
//call by address
int updateAdd2(int* v, int* v2)//pointer should be assigned to a address
{
	cout<<v1<<"\t"
	*v1 *= 2;
	*v2 /= 3;//dereferencing the pointer, deferencing v1 and v2 = 2 and 3
	cout << "v1=" << *v1 << "\tv2=" << *v2 << endl;//* means contents at that address
	return *v1 + *v2;
}

//call by reference

int updateAdd3(int& v1, int& v2)//reference variable
{
	cout<<"in updateAdd3"<<endl;
	cout<<"v1="<<v1<<"\tv2="<<v2<<endl;//address of v1 and v2
	v1 *= 10;//when u do pointer increment it will move one address to another but in reference it will do value increment, like change the value and update the value
	v2 = v2 * v1;// address of operator is call by reference now
	cout << "changed values" << endl;
	cout<<"v1=" << v1 << "\tv2=" << v2 << endl;
	return v1 + v2;
	
}



