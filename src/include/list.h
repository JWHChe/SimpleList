#include <iostream>
#include <vector>

using namespace std;

class List {
    private:
    protected:    
    public:
    List(){         // constructor
    }
    ~List(){        // destructor
    }
    
    vector<vector<string>> mainList;  
    vector<string> list;            //dynamic store of a list of string
    string name;
    int currentUserIndex;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    bool find_userList();
    void save_list();
};


