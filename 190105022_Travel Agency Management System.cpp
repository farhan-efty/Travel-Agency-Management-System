/**
 * ============================================================================
 * PROJECT: Travel Agency Management System (TAMS)
 * ============================================================================
 *
 * Project Number: 19
 * Author: Farhan Muhib Efty
 * Student ID: 190105022
 * Lab Group: A1
 * Academic Year: 2, Semester: 1
 *
 * Description:
 * A comprehensive console-based application for managing travel agency
 * operations including customer bookings, trip management, and invoice
 * tracking using object-oriented programming principles.
 *
 * ============================================================================
 */

// Standard library includes
#include <iostream> // For input/output operations
#include <vector>   // For dynamic array containers
#include <conio.h>  // For console I/O functions (getch)
#include <cstdlib>  // For general utilities (exit)

using namespace std;

/**
 * ============================================================================
 * CLASS: NewTravelTrip
 * ============================================================================
 *
 * Purpose: Manages travel trip creation and modification operations
 *
 * This class handles the creation of new travel bookings and provides
 * functionality to add, edit, and delete trip information for existing
 * customers. It maintains all customer and trip-related data.
 * ============================================================================
 */
class NewTravelTrip
{
public:
    // Constructors
    NewTravelTrip();        // Default constructor - creates new travel booking
    NewTravelTrip(int m) {} // Parameterized constructor - for trip operations

    // Trip management methods
    void AddTrip();    // Adds additional trip to existing booking
    void EditTrip();   // Modifies existing trip information
    void DeleteTrip(); // Removes trip from booking

    // Customer information
    int invoice;    // Auto-generated unique invoice ID
    string name;    // Customer's full name
    string date;    // Booking date
    string address; // Customer's residential address
    string phoneno; // Customer's contact number (11 digits)
    string email;   // Customer's email address

    // Trip information (supports multiple trips per booking)
    vector<string> tripdate;         // Collection of trip dates
    vector<string> startlocation;    // Collection of starting locations
    vector<string> finaldestination; // Collection of final destinations
};

/**
 * ============================================================================
 * CLASS: ShowAllUser
 * ============================================================================
 *
 * Purpose: Manages user display and modification operations
 *
 * This class provides functionality to view, edit, and delete customer
 * records. It handles all operations related to customer data management.
 * ============================================================================
 */
class ShowAllUser
{
public:
    // User management methods
    void showUser();   // Displays all customer records
    void EditUser();   // Modifies existing customer information
    void DeleteUser(); // Removes customer record from system

    // Customer data fields (used for display/manipulation)
    int invoice;         // Invoice identifier
    string name;         // Customer name
    string date;         // Booking date
    string address;      // Customer address
    string phoneno;      // Phone number
    string email;        // Email address
    string tripdate;     // Trip date
    string triplocation; // Trip location
};

// ============================================================================
// GLOBAL VARIABLES
// ============================================================================
vector<NewTravelTrip> trips; // Global vector storing all travel bookings
int inv;                     // Global counter for auto-incrementing invoice IDs

/**
 * ============================================================================
 * FUNCTION: main
 * ============================================================================
 *
 * Purpose: Entry point of the application
 *
 * Provides an interactive menu-driven interface for users to perform various
 * operations including creating bookings, managing customers, and handling
 * trip information.
 *
 * Returns: 0 on successful program termination
 * ============================================================================
 */
int main()
{
    int choice; // Stores user's menu selection
    inv = 1;    // Initialize invoice counter

    // Main application loop - continues until user exits
    // Main application loop - continues until user exits
    while (1)
    {
        // Display main menu
        cout << "==========================================================================" << endl;
        cout << "\t\tPlease choose your option between (1 to 7):" << endl;
        cout << "==========================================================================" << endl;
        cout << endl;
        cout << "\t1. New Travel Trip. " << endl;
        cout << "\t2. Show All Users. " << endl;
        cout << "\t3. Edit user. " << endl;
        cout << "\t4. Delete user. " << endl;
        cout << "\t5. Add Trip. " << endl;
        cout << "\t6. Edit Trip. " << endl;
        cout << "\t7. Delete Trip. " << endl;
        cout << "\t8. Exit Program. " << endl;
        cout << endl;
        cout << "\tEnter Your Choice: ";
        cin >> choice;

        // Process user selection
        switch (choice)
        {
        case 1: // Create new travel booking
        {
            cout << "========================================================================" << endl;
            cout << "\t\tYou have chosen option 1." << endl;
            cout << "========================================================================" << endl;

            // Create new booking - constructor handles data input
            NewTravelTrip ad;

            // Add booking to global trips vector
            trips.push_back(ad);

            cout << "======================================================================" << endl;
            cout << "\t\tYour Data is Recorded. " << endl;
            cout << "\tPress any key to go Back to the main menu... " << endl;
            cout << "======================================================================" << endl;
            getch(); // Hold screen until user presses a key
            break;
        }
        case 2: // Display all customer records
        {
            cout << "======================================================================" << endl;
            cout << "\t\tYou have chosen option 2." << endl;
            cout << "\tYour Previously recorded Data is showing Below." << endl;
            cout << "======================================================================" << endl;

            // Create ShowAllUser object and display all records
            ShowAllUser show;
            show.showUser();

            cout << "======================================================================" << endl;
            cout << "\tPress any key to go to the main menu... " << endl;
            cout << "======================================================================" << endl;
            getch();
            break;
        }
        case 3: // Edit existing customer information
        {
            cout << "======================================================================" << endl;
            cout << "\t\tYou have chosen option 3." << endl;
            cout << "======================================================================" << endl;

            // Edit customer record by invoice ID
            ShowAllUser edit;
            edit.EditUser();

            cout << "======================================================================" << endl;
            cout << "\t\tYour Data is Edited. " << endl;
            cout << "\tPress any key to go Back to the main menu... " << endl;
            cout << "======================================================================" << endl;
            getch();
            break;
        }
        case 4: // Delete customer record
        {
            cout << "======================================================================" << endl;
            cout << "\t\tYou have chosen option 4." << endl;
            cout << "======================================================================" << endl;

            // Remove customer record from system
            ShowAllUser del;
            del.DeleteUser();

            cout << "======================================================================" << endl;
            cout << "\t\tYour Data is Deleted. " << endl;
            cout << "\tPress any key to go Back to the main menu... " << endl;
            cout << "======================================================================" << endl;
            getch();
            break;
        }
        case 5: // Add additional trip to existing booking
        {
            cout << "======================================================================" << endl;
            cout << "\t\tYou have chosen option 5." << endl;
            cout << "======================================================================" << endl;

            // Add new trip to existing customer record
            NewTravelTrip tp(0);
            tp.AddTrip();

            cout << "======================================================================" << endl;
            cout << "\t\tYour Trip is Added. " << endl;
            cout << "\tPress any key to go Back to the main menu... " << endl;
            cout << "======================================================================" << endl;
            getch();
            break;
        }
        case 6: // Edit existing trip information
        {
            cout << "======================================================================" << endl;
            cout << "\t\tYou have chosen option 6." << endl;
            cout << "======================================================================" << endl;

            // Modify trip details for a specific booking
            NewTravelTrip tp(0);
            tp.EditTrip();

            cout << "======================================================================" << endl;
            cout << "\t\tYour Trip is Edited. " << endl;
            cout << "\tPress any key to go Back to the main menu... " << endl;
            cout << "======================================================================" << endl;
            getch();
            break;
        }
        case 7: // Delete trip from booking
        {
            cout << "======================================================================" << endl;
            cout << "\t\tYou have chosen option 7." << endl;
            cout << "======================================================================" << endl;

            // Remove specific trip from customer record
            NewTravelTrip tp(0);
            tp.DeleteTrip();

            cout << "======================================================================" << endl;
            cout << "\t\tYour Trip is Deleted. " << endl;
            cout << "\tPress any key to go Back to the main menu... " << endl;
            cout << "======================================================================" << endl;
            getch();
            break;
        }
        case 8: // Exit application
        {
            cout << "======================================================================" << endl;
            cout << "\t\tPress Any key. " << endl;
            cout << "\tIf you Want to Exit the Program..." << endl;
            cout << "======================================================================" << endl;
            exit(0); // Terminate program with success status
            break;
        }
        default: // Handle invalid menu selection
        {
            cout << "============================================================================" << endl;
            cout << "\tSorry!Incorrect Option. Press any key to go to the main menu... " << endl;
            cout << "============================================================================" << endl;
            getch();
            break;
        }
        }
    }

    return 0; // Program termination
}

/**
 * ============================================================================
 * CONSTRUCTOR: NewTravelTrip::NewTravelTrip (Default)
 * ============================================================================
 *
 * Purpose: Creates a new travel booking and collects customer information
 *
 * This constructor is automatically called when creating a new booking.
 * It prompts the user for all required information including customer details
 * and initial trip information. The invoice ID is auto-generated.
 * ============================================================================
 */
NewTravelTrip::NewTravelTrip()
{
    string t_date, s_loc, f_des; // Temporary variables for trip data

    // Auto-generate invoice ID and increment global counter
    invoice = inv;
    cout << "\n              Invoice ID: " << invoice;

    // Clear input buffer before accepting data
    getline(cin, date);

    // Collect customer information
    cout << "\n              Enter Date: ";
    getline(cin, date);
    cout << "\n         Enter User Name: ";
    getline(cin, name);
    cout << "\n      Enter User Address: ";
    getline(cin, address);
    cout << "\n    Enter User Phone No.: ";
    cin >> phoneno;
    cout << "\nEnter User Email Address: ";
    cin >> email;

    // Collect trip information
    cout << "\n         Enter Trip Date: ";
    cin >> t_date;
    cout << "\n     Enter Trip Location \n";
    cout << "\n     ------------------- " << endl;
    getline(cin, s_loc); // Clear buffer
    cout << "\n           Start Location: ";
    getline(cin, s_loc);
    cout << "\n        Final Destination: ";
    getline(cin, f_des);

    // Store trip details in vectors (supports multiple trips per booking)
    tripdate.push_back(t_date);
    startlocation.push_back(s_loc);
    finaldestination.push_back(f_des);

    inv++; // Increment global invoice counter for next booking
}

/**
 * ============================================================================
 * METHOD: ShowAllUser::showUser
 * ============================================================================
 *
 * Purpose: Displays all customer records with their trip information
 *
 * Iterates through the global trips vector and displays complete information
 * for each customer including all associated trips.
 * ============================================================================
 */
void ShowAllUser::showUser()
{
    int sz, i, j;

    // Get total number of bookings
    sz = trips.size();

    // Iterate through all customer records
    for (i = 0; i < sz; i++)
    {
        // Display customer information
        cout << "\n            Invoice ID: " << trips[i].invoice << endl;
        cout << "\n                  Date: " << trips[i].date << endl;
        cout << "\n             User Name: " << trips[i].name << endl;
        cout << "\n          User Address: " << trips[i].address << endl;
        cout << "\n         User Phone No: " << trips[i].phoneno << endl;
        cout << "\n    User Email Address: " << trips[i].email << endl;

        // Display all trips associated with this customer
        // j represents the number of trips for current invoice
        for (j = 0; j < trips[i].tripdate.size(); j++)
        {
            cout << "\n             Trip Date: " << trips[i].tripdate[j] << endl;
            cout << "\n         Trip Location: " << endl;
            cout << "\n         -------------- " << endl;
            cout << "\n        Start Location: " << trips[i].startlocation[j] << endl;
            cout << "\n     Final Destination: " << trips[i].finaldestination[j] << endl
                 << endl;
        }
        cout << endl
             << endl;
    }
}

/**
 * ============================================================================
 * METHOD: ShowAllUser::EditUser
 * ============================================================================
 *
 * Purpose: Modifies existing customer and trip information
 *
 * Allows user to update all information for a specific customer identified
 * by invoice ID. This replaces all existing data including trip information.
 * ============================================================================
 */
void ShowAllUser::EditUser()
{
    int invc_id, i, j;
    string t_date, s_loc, f_des;

    // Prompt for invoice ID to edit
    cout << "\n             Enter Invoice ID: ";
    cin >> invc_id;

    // Search for matching invoice ID in trips vector
    for (i = 0; i < trips.size(); i++)
    {
        if (trips[i].invoice == invc_id)
            j = i; // Store index of matching record
    }

    // Clear input buffer
    getline(cin, trips[j].date);

    // Collect updated customer information
    cout << "\n               Enter New Date: ";
    getline(cin, trips[j].date);
    cout << "\n          Enter New User Name: ";
    getline(cin, trips[j].name);
    cout << "\n       Enter New User Address: ";
    getline(cin, trips[j].address);
    cout << "\n      Enter New User Phone No: ";
    cin >> trips[j].phoneno;
    cout << "\n Enter User New Email Address: ";
    cin >> trips[j].email;

    // Clear all existing trip data for this customer
    trips[j].tripdate.clear();
    trips[j].finaldestination.clear();
    trips[j].startlocation.clear();

    // Clear input buffer
    getline(cin, t_date);

    // Collect new trip information
    cout << "\n         Enter New Trip Date: ";
    getline(cin, t_date);
    cout << "\n     Enter New Trip Location: \n";
    cout << "\n     ------------------------ " << endl;
    cout << "\n           New Start Location: ";
    getline(cin, s_loc);
    cout << "\n        New Final Destination: ";
    getline(cin, f_des);

    // Add new trip data to vectors
    trips[j].tripdate.push_back(t_date);
    trips[j].startlocation.push_back(s_loc);
    trips[j].finaldestination.push_back(f_des);
}

/**
 * ============================================================================
 * METHOD: ShowAllUser::DeleteUser
 * ============================================================================
 *
 * Purpose: Removes a customer record from the system
 *
 * Deletes the entire customer record including all associated trip information
 * based on the invoice ID provided by the user.
 * ============================================================================
 */
void ShowAllUser::DeleteUser()
{
    int invc_id, i, j;
    string t_date, s_loc, f_des;

    // Prompt for invoice ID to delete
    cout << "\n            Enter Invoice ID: ";
    cin >> invc_id;

    // Search for matching invoice ID
    for (i = 0; i < trips.size(); i++)
    {
        if (trips[i].invoice == invc_id)
            j = i; // Store index of record to delete
    }

    // Use iterator to navigate to the record position
    vector<NewTravelTrip>::iterator it;
    it = trips.begin(); // Point to first element

    // Advance iterator to target position
    for (i = 0; i < j; i++)
        it++;

    // Remove the customer record from vector
    trips.erase(it);
}

/**
 * ============================================================================
 * METHOD: NewTravelTrip::AddTrip
 * ============================================================================
 *
 * Purpose: Adds an additional trip to an existing customer booking
 *
 * Allows adding multiple trips to a single customer record, enabling
 * management of customers with multiple travel bookings.
 * ============================================================================
 */
void NewTravelTrip::AddTrip()
{
    int invc_id, i, j;

    // Prompt for invoice ID to add trip to
    cout << "\n        Enter Invoice ID: ";
    cin >> invc_id;

    // Locate the customer record by invoice ID
    for (i = 0; i < trips.size(); i++)
    {
        if (trips[i].invoice == invc_id)
            j = i; // Store index of matching customer
    }

    string t_date, s_loc, f_des;

    // Collect new trip information
    cout << "\n         Enter Trip Date: ";
    cin >> t_date;
    cout << "\n     Enter Trip Location: \n";
    cout << "\n     -------------------- " << endl;
    getline(cin, s_loc); // Clear buffer
    cout << "\n           Start Location: ";
    getline(cin, s_loc);
    cout << "\n        Final Destination: ";
    getline(cin, f_des);

    // Append new trip to customer's trip vectors
    trips[j].tripdate.push_back(t_date);
    trips[j].startlocation.push_back(s_loc);
    trips[j].finaldestination.push_back(f_des);
}

/**
 * ============================================================================
 * METHOD: NewTravelTrip::EditTrip
 * ============================================================================
 *
 * Purpose: Modifies trip information for a specific booking
 *
 * Displays all trips for the selected customer and allows the user to choose
 * which trip to edit. Supports customers with multiple trips.
 * ============================================================================
 */
void NewTravelTrip::EditTrip()
{
    int invc_id, i, j, x;

    // Prompt for invoice ID
    cout << "\n           Enter Invoice ID: ";
    cin >> invc_id;

    // Find customer record by invoice ID
    for (i = 0; i < trips.size(); i++)
    {
        if (trips[i].invoice == invc_id)
            j = i; // Store customer index
    }

    // Iterate through all trips for this customer
    for (x = 0; x < trips[j].tripdate.size(); x++)
    {
        // Display current trip details and ask for confirmation
        cout << "======================================================================" << endl;
        cout << "Do you want to edit this Trip? Enter 'Y/y' for yes, 'N/n' for no." << endl;
        cout << "======================================================================" << endl;
        cout << "\n              Trip Date: " << trips[j].tripdate[x] << endl;
        cout << "\n          Trip Location: " << endl;
        cout << "\n          -------------- " << endl;
        cout << "\n         Start Location: " << trips[j].startlocation[x] << endl;
        cout << "\n      Final Destination: " << trips[j].finaldestination[x] << endl
             << endl;

        // Get user confirmation
        string inp;
        cin >> inp;

        // If user confirms, edit this trip
        if (inp == "Y" || inp == "y")
        {
            string t_date, s_loc, f_des;

            // Collect updated trip information
            cout << "\n         Enter Trip Date: ";
            cin >> t_date;
            cout << "\n     Enter Trip Location: \n";
            cout << "\n     -------------------- " << endl;
            getline(cin, s_loc); // Clear buffer
            cout << "\n           Start Location: ";
            getline(cin, s_loc);
            cout << "\n        Final Destination: ";
            getline(cin, f_des);

            // Update trip data at specific index
            trips[j].tripdate[x] = t_date;
            trips[j].startlocation[x] = s_loc;
            trips[j].finaldestination[x] = f_des;
            break; // Exit loop after editing
        }
    }
}

/**
 * ============================================================================
 * METHOD: NewTravelTrip::DeleteTrip
 * ============================================================================
 *
 * Purpose: Removes a specific trip from a customer's booking
 *
 * Displays all trips for the selected customer and allows the user to choose
 * which trip to delete. Uses iterators for safe removal from vectors.
 * ============================================================================
 */
void NewTravelTrip::DeleteTrip()
{
    int invc_id, i, j, x, y;

    // Prompt for invoice ID
    cout << "\n       Enter Invoice ID: ";
    cin >> invc_id;

    // Locate customer record
    for (i = 0; i < trips.size(); i++)
    {
        if (trips[i].invoice == invc_id)
            j = i; // Store customer index
    }

    // Iterate through all trips for this customer
    for (x = 0; x < trips[j].tripdate.size(); x++)
    {
        // Display current trip and ask for deletion confirmation
        cout << "======================================================================" << endl;
        cout << "\nDo you want to delete this Trip? Enter 'Y/y' for yes, 'N/n' for no." << endl;
        cout << "======================================================================" << endl;
        cout << "\t        Trip Date: " << trips[j].tripdate[x] << endl;
        cout << "\t    Trip Location: " << endl;
        cout << "\t    -------------- " << endl;
        cout << "\t   Start Location: " << trips[j].startlocation[x] << endl;
        cout << "\tFinal Destination: " << trips[j].finaldestination[x] << endl
             << endl;

        // Get user confirmation
        string inp;
        cin >> inp;

        // If confirmed, delete the trip
        if (inp == "Y" || inp == "y")
        {
            // Use iterator for safe deletion from vectors
            vector<string>::iterator it;

            // Delete trip date at index x
            it = trips[j].tripdate.begin();
            for (y = 0; y < x; y++)
                it++; // Advance iterator to target position
            trips[j].tripdate.erase(it);

            // Delete start location at index x
            it = trips[j].startlocation.begin();
            for (y = 0; y < x; y++)
                it++;
            trips[j].startlocation.erase(it);

            // Delete final destination at index x
            it = trips[j].finaldestination.begin();
            for (y = 0; y < x; y++)
                it++;
            trips[j].finaldestination.erase(it);

            break; // Exit loop after deletion
        }
    }
}
