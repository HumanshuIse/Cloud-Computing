public class EmployeeManagementSystem {

    // Add Employee
    public static void addEmployee(
        Integer empId, String empName,
        String email, Date birthDate, String department
    ) {
        Employee__c emp = new Employee__c();

        emp.Emp_ID__c = empId;
        emp.Name = empName;
        emp.Email__c = email;
        emp.Birth_Date__c = birthDate;
        emp.Department__c = department;

        insert emp;
        System.debug('Employee Added Successfully');
    }

    // View Employees
    public static void viewEmployees() {
        List<Employee__c> empList = [
            SELECT
                Id,
                Name,
                Emp_ID__c,
                Email__c,
                Birth_Date__c,
                Department__c
            FROM Employee__c
        ];

        for(Employee__c e : empList) {
            System.debug('--------------------------------');
            System.debug('Emp ID      : ' + e.Emp_ID__c);
            System.debug('Name        : ' + e.Name);
            System.debug('Email       : ' + e.Email__c);
            System.debug('Birth Date  : ' + e.Birth_Date__c);
            System.debug('Department  : ' + e.Department__c);
            System.debug('--------------------------------');
        }
    }

    // Update Employee
    public static void updateEmployee(Integer empId, String newDepartment) {
        Employee__c emp = [
            SELECT Id, Department__c
            FROM Employee__c
            WHERE Emp_ID__c = :empId
            LIMIT 1
        ];

        emp.Department__c = newDepartment;
        update emp;
        System.debug('Employee Updated Successfully');
    }

    // Delete Employee
    public static void deleteEmployee(Integer empId) {
        Employee__c emp = [
            SELECT Id
            FROM Employee__c
            WHERE Emp_ID__c = :empId
            LIMIT 1
        ];

        delete emp;
        System.debug('Employee Deleted Successfully');
    }
}