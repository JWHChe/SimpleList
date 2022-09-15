#include "include/database.h"

void Database::write(vector<string> list){
    ofstream db;
    db.open("db/list.sl");

    if (db.is_open())  {
        for (int i = 0; i < (int)list.size(); i++)  
            db << list[i] << "\n";  
    } 
    else {
        cout << "Cannot open the file for writing...\n";
    }    

    db.close();
}

void Database::read(){
    string line;
    ifstream db;
    db.open("db/list.sl");

    if (db.is_open()){
        while ( getline(db, line, '\n'))  {
            cout << line << endl;
        }       
    } 
    else {
        cout << "Cannot open the file for writing...\n";
    }

    db.close();
}