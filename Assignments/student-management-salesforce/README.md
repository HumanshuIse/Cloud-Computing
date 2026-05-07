# Student Record Management System using Salesforce Apex and Visualforce

## Overview

This project demonstrates the development of a Student Record Management System using Salesforce Apex programming language and Visualforce pages.

The application manages student records stored in a custom Salesforce object. Users can add, view, and delete student records through a Visualforce user interface.

The implementation uses:

- Salesforce Platform
- Apex Programming Language
- Visualforce Pages
- Custom Objects
- SOQL Queries

---

# Objective

- Create a custom object for student records
- Store student information in Salesforce
- Develop backend logic using Apex
- Create a Visualforce page for UI
- Perform insert, display, and delete operations

---

# Technologies Used

- Salesforce
- Apex
- Visualforce
- SOQL
- Salesforce Developer Edition

---

# System Architecture

```text
                Visualforce Page
                        |
                        |
                Apex Controller
                        |
                        |
                Custom Object
                  Student__c
```

---

# Features

- Add Student Records
- Display Student Records
- Delete Student Records
- Dynamic Data Rendering
- Salesforce Database Integration

---

# Student Fields

| Field Name | Data Type |
|---|---|
| Name | Text |
| Roll No | Number/Text |
| Class | Text |
| Mobile No | Phone |

---

# Prerequisites

Before starting, ensure you have:

- Salesforce Developer Account
- Internet Connection
- Basic Knowledge of Salesforce
- Apex and Visualforce Access

---

# Step 1: Create Salesforce Developer Account

Open:

https://developer.salesforce.com/signup

Create a free Salesforce Developer Edition account.

Login to Salesforce after verification.

---

# Step 2: Open Salesforce Setup

After login:

1. Click the gear icon
2. Select:

```text
Setup
```

---

# Step 3: Create Custom Object

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
| Label | Student |
| Plural Label | Students |
| Object Name | Student |

Click:

```text
Save
```

Salesforce automatically creates:

```text
Student__c
```

---

# Step 4: Create Custom Fields

Inside Student Object:

Open:

```text
Fields & Relationships
```

Create the following fields.

---

## Field 1: Roll No

| Property | Value |
|---|---|
| Field Type | Number/Text |
| Field Label | Roll No |
| API Name | Roll_No__c |

---

## Field 2: Class

| Property | Value |
|---|---|
| Field Type | Text |
| Field Label | Class |
| API Name | Class__c |

---

## Field 3: Mobile No

| Property | Value |
|---|---|
| Field Type | Phone |
| Field Label | Mobile No |
| API Name | Mobile_No__c |

---

# Step 5: Create the Apex Controller

Go to:

```text
Setup → Apex Classes
```

Click:

```text
New
```

Paste the code from:

```text
StudentController.cls
```

Save the Apex class.

---

# Step 6: Create the Visualforce Page

Go to:

```text
Setup → Visualforce Pages
```

Click:

```text
New
```

Page Name:

```text
StudentManagement
```

Paste the code from:

```text
StudentManagement.page
```

Save the Visualforce page.

---

# Step 7: Run the Application

### How to Use

1. Once saved, click the Preview button on the StudentManagement Visualforce page.
2. Fill in the form fields.
3. Click Save Record.
4. The record will be saved to the database, and the "Existing Students" table below will refresh automatically.


---

# Functionalities Demonstrated

## Add Student

Users can:

- Enter Name
- Enter Roll Number
- Enter Class
- Enter Mobile Number

Click:

```text
Save Student
```

to insert records into Salesforce database.

---

# View Student Records

All student records are displayed dynamically in a table format using Visualforce components.

---

# Delete Student Records

Users can click:

```text
Delete
```

to remove records from Salesforce database.

---

# Apex Components Used

| Component | Purpose |
|---|---|
| Apex Controller | Backend business logic |
| SOQL Query | Fetch records |
| DML Operations | Insert/Delete records |
| Visualforce Page | Frontend UI |

---

# Output

- Custom Student Object created
- Student fields configured
- Apex controller implemented
- Visualforce page created
- Student records inserted successfully
- Dynamic record display achieved
- Delete functionality implemented

---

# Applications

- Student Database Management
- School Administration Systems
- College ERP Systems
- Academic Record Management
- Educational CRM Applications

---

# Advantages

- Cloud-Based Management
- Centralized Database
- Easy Record Maintenance
- Dynamic UI Rendering
- Secure Data Handling
- Salesforce Integration

---

# Result

Successfully developed a Student Record Management System using Salesforce Apex and Visualforce with complete student record management functionality.

---

# Conclusion

Salesforce provides a powerful cloud platform for rapidly developing enterprise applications. Using Apex and Visualforce, dynamic database-driven applications can be developed efficiently with integrated backend and frontend capabilities.

---

# Viva Questions

| Question | Answer |
|---|---|
| What is Apex? | Salesforce backend programming language |
| What is Visualforce? | Salesforce UI framework |
| What is SOQL? | Salesforce query language |
| What is a Custom Object? | User-defined Salesforce database object |
| Why use Visualforce? | To create dynamic custom UI pages |

---

# Project Files

| File Name | Purpose |
|---|---|
| StudentController.cls | Apex backend controller |
| StudentManagement.page | Visualforce frontend page |

---

# Author

**Name:** Krish Bansal  
**Department:** Computer Engineering  
**Institute:** Pune Institute of Computer Technology