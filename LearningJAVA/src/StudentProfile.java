public class StudentProfile {
    String firstName;
    String lastName;
    int expectedGraduation;
    double gpa;
    String declaredMajor;

    public StudentProfile(String firstName, String lastName, int expectedGraduation, double gpa, String declaredMajor){
        this.firstName = firstName;
        this.lastName = lastName;
        this.expectedGraduation = expectedGraduation;
        this.gpa = gpa;
        this.declaredMajor = declaredMajor;
    }
    public void incrementExpectedGrad(){
        this.expectedGraduation++;
    }
}
