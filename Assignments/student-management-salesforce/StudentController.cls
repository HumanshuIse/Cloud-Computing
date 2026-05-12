public class StudentController {
    public Student__c stu {get; set;}
    public List<Student__c> studentList {get; set;}

    public StudentController() {
        stu = new Student__c();
        loadStudents();
    }

    public void saveStudent() {
        insert stu;
        stu = new Student__c();
        loadStudents();
    }

    public void loadStudents() {
        studentList = [
            SELECT Id, Name, Roll_No__c, Class__c, Mobile_No__c
            FROM Student__c
        ];
    }

    public void deleteStudent() {
        String studentId = ApexPages.currentPage().getParameters().get('id');

        Student__c s = [SELECT Id FROM Student__c WHERE Id = :studentId LIMIT 1];
        delete s;
        loadStudents();
    }
}