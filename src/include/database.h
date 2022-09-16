#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database {
    private:
    protected:    
    public:
    Database(){         // constructor
    }
    ~Database(){        // destructor
    }
    
    vector<vector<string>> mainList;            //dynamic store of 2 dimensional list of string
    string name;

    void write(vector<vector<string>> mainList);
    vector<vector<string>> read();
};


