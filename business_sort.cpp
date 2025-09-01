#include <iostream>   
#include <vector>     
#include <algorithm>  
#include <string>     

using namespace std;

int main() 
{
    
    cout << "Welcome to the Business Sorting Program!\n" << endl;
    vector<string> businesses;  
    string name;                
    string choice;              

    while (true) 
	{
        
        cout << "Please enter the name of a business:  ";
        getline(cin, name);  
        businesses.push_back(name);  
        sort(businesses.begin(), businesses.end());
		
        if (businesses.size() == 1) 
		{
            cout << "\nYour business is:\n" << endl;
        } 
		else 
		{
            cout << "\nYour businesses are:\n" << endl;
        }
        for (const string &b : businesses) 
		{
            cout << "    " << b << endl;
        }
        cout << "\nAnother business?  ";
        cin >> choice;
        cin.ignore();  
        if (choice != "y" && choice != "Y" && choice != "yes" && choice != "Yes" && choice != "YES") 
		{
            break;  
        }
        cout << endl;
    }
    cout << "\nThank you for using the Business Sorting Program!" << endl;

    return 0;
}


        

        

        

        

    

