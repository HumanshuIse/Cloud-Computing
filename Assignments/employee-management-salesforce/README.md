# Console Based Employee Management System using Salesforce Apex

## Overview

This project demonstrates the development of a Console Based Employee Management System using Salesforce Apex programming language.

The application manages employee records stored in a custom Salesforce object. Employee operations are performed using Apex methods executed through the Execute Anonymous Window in Salesforce Developer Console.

The system supports:

- Add Employee
- View Employees
- Update Employee
- Delete Employee

The implementation uses:

- Salesforce Platform
- Apex Programming Language
- SOQL Queries
- DML Operations
- Execute Anonymous Window

---

# Objective

- Create a custom object for employee records
- Store employee information in Salesforce
- Develop backend logic using Apex
- Implement menu-driven employee operations
- Perform CRUD operations using console execution

---

# Technologies Used

| Technology | Purpose |
|---|---|
| Salesforce | Cloud CRM Platform |
| Apex | Backend Programming |
| SOQL | Database Query Language |
| DML | Database Operations |
| Execute Anonymous | Console-Based Execution |

---

# System Architecture

```text
        Execute Anonymous Window
                  |
                  |
         Apex Management Class
      (EmployeeManagementSystem)
                  |
                  |
         Salesforce Custom Object
               Employee__c
```

---

# Features

- Add Employee Records
- View Employee Records
- Update Employee Department
- Delete Employee Records
- Console-Based Execution
- Salesforce Database Integration

---

# Employee Fields

| Field Name | Data Type |
|---|---|
| Employee Name | Text |
| Emp ID | Number |
| Email | Email |
| Birth Date | Date |
| Department | Text |

---

# Prerequisites

Before starting, ensure you have:

- Salesforce Developer Account
- Internet Connection
- Basic Knowledge of Salesforce
- Apex Access

---

# Implementation Steps

| Step | Description |
|---|---|
| Step 1 | Create Salesforce Developer Account |
| Step 2 | Open Salesforce Setup |
| Step 3 | Create Employee Custom Object |
| Step 4 | Create Employee Custom Fields |
| Step 5 | Create Apex Management Class |
| Step 6 | Execute Menu-Driven Operations |
| Step 7 | Test CRUD Operations |
| Step 8 | (Optional) Create Visualforce UI |

---

# Step 1: Create Salesforce Developer Account

Open:

https://developer.salesforce.com/signup

Create a free Salesforce Developer Edition account.

Login after verification.

---

# Step 2: Open Salesforce Setup

After login:

1. Click the gear icon
2. Select:

```text
Setup
```

---

# Step 3: Create Employee Custom Object

Search:

```text
Object Manager
```

Open Object Manager.

Click:

```text
Create → Custom Object
```

Configure:

| Field | Value |
|---|---|
| Label | Employee |
| Plural Label | Employees |
| Object Name | Employee |

Click:

```text
Save
```

Salesforce automatically creates:

```text
Employee__c
```

---

# Step 4: Create Employee Custom Fields

Inside Employee Object:

Open:

```text
Fields & Relationships
```

Create the following fields:

| Field Label | Field Type | API Name |
|---|---|---|
| Emp ID | Number | Emp_ID__c |
| Email | Email | Email__c |
| Birth Date | Date | Birth_Date__c |
| Department | Text | Department__c |

---

# Step 5: Create the Apex Management Class

Go to:

```text
Setup → Apex Classes
```

Click:

```text
New
```

Class Name:

```text
EmployeeManagementSystem
```

Paste the code from:

```text
EmployeeManagementSystem.cls
```

Save the Apex class.

---

# Step 6: Execute Menu-Driven Operations

Open:

```text
Developer Console
```

Then open:

```text
Debug → Open Execute Anonymous Window
```

Shortcut:

```text
Ctrl + E
```

Paste the menu-driven execution code from:

```text
EmployeeMenu.txt
```

---

# Menu Operations

| Choice | Operation |
|---|---|
| 1 | Add Employee |
| 2 | View Employees |
| 3 | Update Employee |
| 4 | Delete Employee |

---

# Step 7: Test CRUD Operations

## Add Employee

Set:

```text
Integer choice = 1;
```

Execute the code.

Expected Output:

```text
Employee Added Successfully
```

---

## View Employees

Set:

```text
Integer choice = 2;
```

Execute the code.

Expected Output:

```text
--------------------------------
Emp ID      : 101
Name        : Krish Bansal
Email       : krish@gmail.com
Birth Date  : 2005-01-01
Department  : IT
--------------------------------
```

---

## Update Employee

Set:

```text
Integer choice = 3;
```

Execute the code.

Expected Output:

```text
Employee Updated Successfully
```

---

## Delete Employee

Set:

```text
Integer choice = 4;
```

Execute the code.

Expected Output:

```text
Employee Deleted Successfully
```

---

# How to View Logs

After execution:

1. Open latest execution log
2. Enable:

```text
Debug Only
```

3. View employee details in console logs

---

# Apex Components Used

| Component | Purpose |
|---|---|
| Apex Class | Backend business logic |
| SOQL Query | Fetch employee records |
| DML Operations | Insert/Update/Delete |
| Execute Anonymous | Console execution |
| Custom Object | Employee database |

---

# Output

- Employee custom object created
- Employee fields configured
- Apex management class implemented
- Menu-driven logic executed successfully
- CRUD operations completed
- Employee records managed successfully

---

# Applications

- Employee Database Management
- HR Management Systems
- Enterprise Resource Management
- Staff Management Systems
- Corporate CRM Applications

---

# Advantages

- Cloud-Based Record Management
- Centralized Employee Database
- Easy Record Maintenance
- Dynamic Console Execution
- Secure Data Handling
- Salesforce Integration

---

# Result

Successfully developed a Console Based Employee Management System using Salesforce Apex with complete CRUD operations for employee records.

---

# Conclusion

Salesforce Apex provides an efficient platform for implementing database-driven enterprise applications. Using Execute Anonymous Window and Apex methods, menu-driven employee management operations can be performed efficiently within the Salesforce ecosystem.

---

# Viva Questions

| Question | Answer |
|---|---|
| What is Apex? | Salesforce backend programming language |
| What is SOQL? | Salesforce query language |
| What is DML? | Database manipulation operations |
| What is Execute Anonymous? | Temporary Apex execution window |
| What is a Custom Object? | User-defined Salesforce database object |

---

# Project Files

| File Name | Purpose |
|---|---|
| EmployeeManagementSystem.cls | Apex management class |
| EmployeeMenu.apex | Menu-driven execution logic |

---

# (Optional) Visualforce User Interface

The original assignment requires a console-based implementation only.

However, an optional Visualforce frontend UI can also be developed for enhanced interaction and record management.

The Visualforce version includes:

- Apex Controller
- Visualforce Page
- Employee Input Form
- Dynamic Employee Table

---

# Optional Visualforce Architecture

```text
             Visualforce Page
                    |
                    |
            Apex Controller
                    |
                    |
            Employee__c Object
```

---

# Optional Visualforce Steps

| Step | Description |
|---|---|
| Step 1 | Create Apex Controller |
| Step 2 | Create Visualforce Page |
| Step 3 | Bind Apex Properties |
| Step 4 | Display Employee Records |
| Step 5 | Test Visualforce Application |

---

# Optional Apex Controller

Go to:

```text
Setup → Apex Classes
```

Create:

```text
EmployeeController.cls
```

Paste the controller code and save.

---

# Optional Visualforce Page

Go to:

```text
Setup → Visualforce Pages
```

Create:

```text
EmployeeManagement.page
```

Paste the Visualforce markup and save.

---



# Author

**Name:** Krish Bansal  
**Department:** Computer Engineering  
**Institute:** Pune Institute of Computer Technology