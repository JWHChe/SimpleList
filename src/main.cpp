#include "include/list.h"

int main(int arg_count, char *args[]){

    if (arg_count >1)
    {
        //string name (args[1]);              // args[0] - name of program
        List simpleList;
        simpleList.name = string(args[1]);
        simpleList.print_menu();
               
    } 
    else
    {
        cout << "Username not supplied... Exiting the program." << endl;            
    }    
    
    return 0;
}

