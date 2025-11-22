# Travel Agency Management System

A comprehensive C++ console application for managing travel agency operations, including customer information, trip bookings, and invoice management.

## Overview

This Travel Agency Management System (TAMS) is an object-oriented program developed in C++ that provides a complete solution for managing travel bookings, customer data, and trip information through an interactive menu-driven interface.

## Features

The system provides the following functionalities:

### Core Operations

1. **New Travel Trip** - Create a new travel booking with complete customer and trip details
2. **Show All Users** - Display all registered customers and their booking information
3. **Edit User** - Modify existing customer information
4. **Delete User** - Remove customer records from the system
5. **Add Trip** - Add new trip details to existing bookings
6. **Edit Trip** - Update existing trip information
7. **Delete Trip** - Remove trip records
8. **Exit Program** - Terminate the application

## Data Structure

### Customer & Trip Information

Each travel booking captures the following information:

- **Invoice ID** (Auto-generated serial number)
- **Date** - Booking date
- **User Name** - Customer's full name
- **User Address** - Customer's residential address
- **User Phone Number** - 11-digit contact number
- **User Email Address** - Customer's email
- **Trip Date** - Scheduled travel date
- **Trip Location** - Start location and final destination

### Operation-Specific Data Requirements

#### New Travel Trip
- All fields listed above are required

#### Show All Users / Edit User / Delete User
- All customer and trip fields for display and modification

#### Add Trip / Edit Trip / Delete Trip
- Invoice ID
- Trip Date
- Trip Location (start and destination)

## Technical Architecture

### Class Structure

**NewTravelTrip Class**
- Manages travel booking creation and trip operations
- Contains methods: `AddTrip()`, `EditTrip()`, `DeleteTrip()`
- Implements both default and parameterized constructors

**ShowAllUser Class**
- Handles user management operations
- Contains methods: `ShowUser()`, `DeleteUser()`, `EditUser()`

### Implementation Details

- **Design Pattern**: Object-Oriented Programming (OOP)
- **Control Flow**: Switch-case statement for menu navigation
- **Programming Language**: C++

### Header Files Used

| Header File | Purpose |
|------------|---------|
| `<iostream>` | Standard input/output stream operations |
| `<vector>` | Dynamic array container for storing records |
| `<conio.h>` | Console input/output functions (e.g., `getch()` for screen control) |
| `<cstdlib>` | General-purpose functions including `exit()` for program termination |

## Usage

The application presents an interactive menu where users can select operations by entering the corresponding option number. The program validates input and guides users through each operation with appropriate prompts.

## Menu Interface

```
Please Choose Your Option:
1. New Travel Trip
2. Show All Users
3. Edit User
4. Delete User
5. Add Trip
6. Edit Trip
7. Delete Trip
8. Exit Menu

Enter Your Choice: _
```

## License

This project is available for educational and commercial use.
