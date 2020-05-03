#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "connect.cpp"
using namespace std;

#define ipserver "192.168.0.16"
#define port 5432
#define dbname "psudb"
#define user "psu"
#define password "psu"

void participante();

int main(int argc, char** argv){

    connect db ;
    db.dbconnect((char *) ipserver, port, (char *) dbname, (char *) user, (char *) password);
    db.dbclose();

    participante();
}

void participante(){
    cout<< endl << "=== Tarea ===" <<endl;
    cout<< endl << "Israel Ramirez Cardoso. "<<endl;
    cout<< endl << "Humberto Román Matamoros." <<endl;
    cout<< endl << "Victor Araya Romero. "<<endl;
}