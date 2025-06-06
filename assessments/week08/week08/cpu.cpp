#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <string>

using namespace std;

class CPU 
{
protected:
    int AX, BX, CX, DX;
    vector<int> mem;                  
    list<string> instructionList;       

public:
    CPU()
    {
        AX = 0;
        BX = 0;
        CX = 0;
        DX = 0;
        //int mem[65536];
        mem = vector<int>(65536); 
    }
    /*
    ~CPU() 
    {
        cout << "\n[INFO] CPU obj destroyed\n";
    }
    */
    void error(const string& msg)

    {
        cout << "[ERROR] " << msg << endl;
    }

    void loadInstructions(const string& filename)
    {
        ifstream file(filename);
        string line;
        if (!file.is_open())
        {
            cout << "error opening file\n";
            return;
        }
        while (getline(file, line)) {
            instructionList.push_back(line);
        }
        file.close();
    }

    void run()
    {
        for (string inst : instructionList)
        {
            stringstream ss(inst);
            string cmd, op1, op2;

            getline(ss, cmd, ' ');
            if (cmd == "HLT")
            {
                cout << "program halted\n";
                break;
            }

            getline(ss, op1, ',');
            getline(ss, op2);

            if (cmd == "MOV") executeMOV(op1, op2);

            else if (cmd == "ADD")

                executeADD(op1, op2);

            else if (cmd == "SUB")
                executeSUB(op1, op2);

            else if (cmd == "MUL")
                executeMUL(op1, op2);

            else if (cmd == "DIV")
                executeDIV(op1, op2);
        }
    }



    void executeMOV(string a, string b) 
    {
        try
        {
            int val = getValue(b);
            setValue(a, val);
        }
        catch (...)
        {
            error("invalid MOV argument: " + a + ", " + b);
        }
    }

    void executeADD(string a, string b)
    {
        try
        {
            int valA = getValue(a);
            int valB = getValue(b);
            setValue(a, valA + valB);
        }
        catch (...)
        {
            error("invalid add argument: " + a + ", " + b);
        }
    }

    void executeSUB(string a, string b) 
    {
        try
        {
            int valA = getValue(a);
            int valB = getValue(b);
            setValue(a, valA - valB);
        }
        catch (...)
        {
            error("invalid sub argument: " + a + ", " + b);
        }
    }

    void executeMUL(string a, string b) 
    {
        try
        {
            int valA = getValue(a);
            int valB = getValue(b);
            setValue(a, valA * valB);
        }
        catch (...) 
        {
            error("invalid mul argument: " + a + ", " + b);
        }
    }

    void executeDIV(string a, string b) {
        try
        {
            int valA = getValue(a);
            int valB = getValue(b);
            if (valB == 0) {
                error("Division by zero.");
                return;
            }
            setValue(a, valA / valB);
        }
        catch (...) {
            error("invalid div argument : " + a + ", " + b);
        }
    }

    int getValue(string str)
    {
        if (str == "AX")
            return AX;
        if (str == "BX")
            return BX;
        if (str == "CX")
            return CX;
        if (str == "DX")
            return DX;

        if (str.front() == '[' && str.back() == ']')//[3]
        {
            
            int addr = stoi(str.substr(1, str.size() - 2));//int addr=3 
            //"3" to int 3

            if (addr < 0 || addr >= mem.size())//3<0||3>=65536(false)
            {
                error("memory out of range : " + str);
                return 0;
            }
            return mem[addr];
        }

        return stoi(str); 
    }

    void setValue(string str, int val)
    {
        if (str == "AX") AX = val;
        else if 
            (str == "BX") BX = val;
        else if 
            (str == "CX") CX = val;
        else if 
            (str == "DX") DX = val;

        else if (str.front() == '[' && str.back() == ']') 
        {
            int addr = stoi(str.substr(1, str.size() - 2));

            if (addr < 0 || addr >= mem.size()) 
            {
                error("memeory out of range: " + str);
                return;
            }
            mem[addr] = val;
        }
        else {
            error("invalid : " + str);
        }
    }

        void Registers() 
        {
            cout << "\nRegister snapshot\n";
            cout << "AX: " << AX << endl;
            cout << "BX: " << BX << endl;
            cout << "CX: " << CX << endl;
            cout << "DX: " << DX << endl;
        }
        void memoryContents()
        {
            cout << "\n first 16 memory contents\n";
            for (int i = 0; i < 16; ++i)
            {
                cout << i << " -> " << mem[i] << endl;
            }
        }
};

int main()
{
    CPU cpu;

    
    cpu.loadInstructions("instructions.txt");

   
    cpu.run();

   
    cpu.Registers();

  
    cpu.memoryContents();

    return 0;
}
























































































