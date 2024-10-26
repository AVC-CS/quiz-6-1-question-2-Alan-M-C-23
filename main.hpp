#include <iostream>
#include <fstream>
using namespace std;

int writeFile(string filename);
int readFile (string filename);

int writeFile(string filename){
    int EmployeeID,N;
    string Name,department;
    double salary;
    ofstream ofs;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }
    cout << "Enter Number of Employees: ";
    cin >> N;
    ofs << N << endl;
    for (int i = 0; i < N; i++){
        cout << "Please enter Employee ID, Employee name, Dpartment name, and Salary: ";
        cin >> EmployeeID >> Name >> department >> salary;
        ofs << EmployeeID << "\t" << Name << "\t" << department << "\t" << salary << endl;
    }

    /***************************************************
     * Code your program here
     ***************************************************/

    ofs.close();
    return N;
}

int readFile (string filename){
       int EmployeeID,N;
    int total = 0;
    string Name,department;
    double salary, avg;
    ifstream ifs;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }
    ifs >> N;
    cout << "ID" << "\t" << "Name" << "\t" << "Department" << "\t" << "Salary" << endl;
    for (int i = 0; i < N; i++){
        ifs >> EmployeeID >> Name >> department >> salary;
        total = total + salary;
        cout << EmployeeID << "\t" << Name << "\t" << department << "\t" << salary << endl;
    }
    avg = total / N;
        cout << "Total: " << total << "\t" << "Average: " << avg << endl;
    return N;
}