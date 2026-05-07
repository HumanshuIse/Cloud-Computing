# Console Based Bank Account System using Salesforce Apex

## Overview

This project demonstrates the development of a Console Based Bank Account System using Salesforce Apex programming language.

The application manages customer bank account records stored in a custom Salesforce object. Customer operations are performed using Apex methods executed through the Execute Anonymous Window in Salesforce Developer Console.

The system supports:

- Add Customer
- View Customers
- Update Customer Account Type
- Delete Customer

The implementation uses:

- Salesforce Platform
- Apex Programming Language
- SOQL Queries
- DML Operations
- Execute Anonymous Window

---

# Objective

- Create a custom object for customer records
- Store customer information in Salesforce
- Develop backend logic using Apex
- Implement menu-driven customer operations
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
             (BankAccountSystem)
                  |
                  |
           Salesforce Custom Object
                 Customer__c
```

---

# Features

- Add Customer Records
- View Customer Records
- Update Customer Account Type
- Delete Customer Records
- Console-Based Execution
- Salesforce Database Integration

---

# Customer Fields

| Field Name | Data Type |
|---|---|
| Customer Name | Text |
| Customer ID | Number |
| Email | Email |
| Birth Date | Date |
| Account Type | Text/Picklist |

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
| Step 3 | Create Customer Custom Object |
| Step 4 | Create Customer Custom Fields |
| Step 5 | Create Apex Management Class |
| Step 6 | Execute Menu-Driven Operations |
| Step 7 | Test CRUD Operations |

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

# Step 3: Create Customer Custom Object

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
| Label | Customer |
| Plural Label | Customers |
| Object Name | Customer |

Click:

```text
Save
```

Salesforce automatically creates:

```text
Customer__c
```

---

# Step 4: Create Customer Custom Fields

Inside Customer Object:

Open:

```text
Fields & Relationships
```

Create the following fields:

| Field Label | Field Type | API Name |
|---|---|---|
| Customer ID | Number | Customer_ID__c |
| Email | Email | Email__c |
| Birth Date | Date | Birth_Date__c |
| Account Type | Text/Picklist | Account_Type__c |

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
BankAccountSystem
```

Paste the code from:

```text
BankAccountSystem.cls
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
BankMenu.txt
```

---

# Menu Operations

| Choice | Operation |
|---|---|
| 1 | Add Customer |
| 2 | View Customers |
| 3 | Update Customer |
| 4 | Delete Customer |

---

# Step 7: Test CRUD Operations

## Add Customer

Set:

```text
Integer choice = 1;
```

Execute the code.

Expected Output:

```text
Customer Added Successfully
```

---

## View Customers

Set:

```text
Integer choice = 2;
```

Execute the code.

Expected Output:

```text
--------------------------------
Customer ID   : 101
Name          : Krish Bansal
Email         : krish@gmail.com
Birth Date    : 2005-01-01
Account Type  : Savings
--------------------------------
```

---

## Update Customer

Set:

```text
Integer choice = 3;
```

Execute the code.

Expected Output:

```text
Customer Updated Successfully
```

---

## Delete Customer

Set:

```text
Integer choice = 4;
```

Execute the code.

Expected Output:

```text
Customer Deleted Successfully
```

---

# How to View Logs

After execution:

1. Open latest execution log
2. Enable:

```text
Debug Only
```

3. View customer details in console logs

---

# Apex Components Used

| Component | Purpose |
|---|---|
| Apex Class | Backend business logic |
| SOQL Query | Fetch customer records |
| DML Operations | Insert/Update/Delete |
| Execute Anonymous | Console execution |
| Custom Object | Customer database |

---

# Output

- Customer custom object created
- Customer fields configured
- Apex management class implemented
- Menu-driven logic executed successfully
- CRUD operations completed
- Customer records managed successfully

---

# Applications

- Banking Management Systems
- Customer Database Management
- Financial Record Systems
- Enterprise CRM Applications
- Banking Customer Tracking Systems

---

# Advantages

- Cloud-Based Record Management
- Centralized Customer Database
- Easy Record Maintenance
- Dynamic Console Execution
- Secure Data Handling
- Salesforce Integration

---

# Result

Successfully developed a Console Based Bank Account System using Salesforce Apex with complete CRUD operations for customer records.

---

# Conclusion

Salesforce Apex provides an efficient platform for implementing database-driven enterprise applications. Using Execute Anonymous Window and Apex methods, menu-driven banking customer operations can be performed efficiently within the Salesforce ecosystem.

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
| BankAccountSystem.cls | Apex management class |
| BankMenu.txt | Menu-driven execution logic |

---

# Author

**Name:** Krish Bansal  
**Department:** Computer Engineering  
**Institute:** Pune Institute of Computer Technology