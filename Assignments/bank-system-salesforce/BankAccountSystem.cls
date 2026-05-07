public class BankAccountSystem {

    // Add Customer
    public static void addCustomer(
        Integer customerId, String customerName,
        String email, Date birthDate, String accountType
    ) {
        Customer__c c = new Customer__c();
        
        c.Customer_ID__c = customerId;
        c.Name = customerName;
        c.Email__c = email;
        c.Birth_Date__c = birthDate;
        c.Account_Type__c = accountType;

        insert c;
        System.debug('Customer Added Successfully');
    }

    // View Customers
    public static void viewCustomers() {
        List<Customer__c> customerList = [
            SELECT
                Id,
                Name,
                Customer_ID__c,
                Email__c,
                Birth_Date__c,
                Account_Type__c
            FROM Customer__c
        ];

        for(Customer__c c : customerList) {
            System.debug('--------------------------------');
            System.debug('Customer ID   : ' + c.Customer_ID__c);
            System.debug('Name          : ' + c.Name);
            System.debug('Email         : ' + c.Email__c);
            System.debug('Birth Date    : ' + c.Birth_Date__c);
            System.debug('Account Type  : ' + c.Account_Type__c);
            System.debug('--------------------------------');
        }
    }

    // Update Account Type
    public static void updateCustomer(Integer customerId, String newAccountType) {
        Customer__c c = [
            SELECT Id, Account_Type__c
            FROM Customer__c
            WHERE Customer_ID__c = :customerId
            LIMIT 1
        ];

        c.Account_Type__c = newAccountType;
        update c;
        System.debug('Customer Updated Successfully');
    }

    // Delete Customer
    public static void deleteCustomer(Integer customerId) {
        Customer__c c = [
            SELECT Id
            FROM Customer__c
            WHERE Customer_ID__c = :customerId
            LIMIT 1
        ];

        delete c;
        System.debug('Customer Deleted Successfully');
    }
}