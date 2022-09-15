#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]){
    List simpleList;
    Database data;

    if (arg_count >1) {
        //string name (args[1]);              // args[0] - name of program
        simpleList.name = string(args[1]);
        simpleList.print_menu();
        data.write(simpleList.list);
        data.read();
    } 
    else {
        cout << "Username not supplied... Exiting the program." << endl;            
    }    
    
    return 0;
}

