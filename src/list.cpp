#include "include/list.h"

void List::print_menu(){

    int choice;
    cout << "*********************\n";
    cout << "1. Print list.\n";
    cout << "2. Add to list.\n";
    cout << "3. Delete from list.\n";
    cout << "4. Save list before Quit.\n";
    cout << "5. Quit.\n";
    cout << "Enter your choice and press return: ";
    
    cin >> choice;
    switch (choice) {
    case 5:
        return;
        break;    
    case 4:
        save_list();
        break;
    case 2 :
        add_item();
        break;
    case 3 :
        delete_item();
        break;
    case 1 :
        print_list();
        break;
    default:
        break;
    }  
}

void List::add_item(){
    cout << "\n\n\n\n\n\n";
    cout << "*** Add an item ***\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;
    list.push_back(item);               // push item to the bottom of vector
    cout << "Successfully added an item to the list.\n\n";

    cin.clear();
    print_menu();
}

void List::delete_item(){
    cout << "\n\n\n\n\n\n";
    cout << "*** Delete an item ***\n";
    cout << "Select an item index number to delete: \n";
    if (list.size()){
        for (int i = 0; i < (int)list.size(); i++)  {
            cout << i << ": " << list[i] << endl;
        }  
        int choice;
        cin >> choice;
        if (choice >=0 && choice <(int)list.size()) {
            list.erase(list.begin() + choice);
        } 
        else {
            cout << "Not correct index number." << endl;
        }
    } 
    else  {
        cout << "No item to delete.\n";
    } 
    print_menu();   
}

void List::print_list(){
    cout << "\n\n\n\n\n\n";
    cout << "*** Printing list ***\n";
    if (list.size()){
        for (int i = 0; i < (int)list.size(); i++)
            cout << " * " << list[i] << endl;            
    } 
    else {
        cout << "No item in the list.\n";
    } 
    
    cout << "M - Menu \n" ;
    char choice;
    cin >> choice;
    if (choice=='M' || choice =='m')    {
        print_menu();
    }
    else {
        cout << "Invalid choice.  Quitting...\n";
        return;
    }
}

bool List::find_userList(){
    bool userFind = false;
    cout << "\n\n\n\n\n\n";
    cout << "*** Welcome " << name << " ***\n";
    for (int user_index = 0; user_index < (int)mainList.size(); user_index++){
        cout << mainList[user_index][0] << endl;
        if ( mainList[user_index][0] == name) {
            cout << "User has been found: " << mainList[user_index][0] << endl;
            list = mainList[user_index];
            currentUserIndex = user_index;
            userFind = true;
            break;
        }        
    }

    if (!userFind) {
        list.push_back(name);
        mainList.push_back(list);
        currentUserIndex = (int)mainList.size() -1;
    }
    
    return userFind;
}

void List::save_list(){
    cout << "Saving the list...\n";
    mainList[currentUserIndex] = list;
    print_menu();
}