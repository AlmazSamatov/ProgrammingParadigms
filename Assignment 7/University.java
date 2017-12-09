import java.util.ArrayList;

/**
 * Created by Almaz on 29.09.2017.
 */
public class University {

    private ArrayList<Student> students;
    private ArrayList<Assistant> assistants;
    private ArrayList<Instructor> instructors;
    private ArrayList<LectureCourse> courses;
    private TeachingSchedule schedule;

    University(){
        schedule = new TeachingSchedule();
        students = new ArrayList<>();
        assistants = new ArrayList<>();
        instructors = new ArrayList<>();
        courses = new ArrayList<>();
    }

    public University(ArrayList<Student> students, ArrayList<Assistant> assistants, ArrayList<Instructor> instructors,
                      ArrayList<LectureCourse> courses, TeachingSchedule schedule) {
        students = new ArrayList<>();
        assistants = new ArrayList<>();
        instructors = new ArrayList<>();
        courses = new ArrayList<>();
        setStudents(students);
        setAssistants(assistants);
        setInstructors(instructors);
        setCourses(courses);
        setSchedule(schedule);
    }

    public ArrayList<Student> getStudents() {
        return students;
    }

    public void setStudents(ArrayList<Student> students) {
        this.students.clear();
        this.students.addAll(students);
    }

    public void addStudent(Student student){
        students.add(student);
    }

    public ArrayList<Assistant> getAssistants() {
        return assistants;
    }

    public void setAssistants(ArrayList<Assistant> assistants) {
        this.assistants.clear();
        this.assistants.addAll(assistants);
    }

    public void addAssistant(Assistant assistant){
        assistants.add(assistant);
    }

    public ArrayList<Instructor> getInstructors() {
        return instructors;
    }

    public void setInstructors(ArrayList<Instructor> instructors) {
        this.instructors.clear();
        this.instructors.addAll(instructors);
    }

    public void addInstructor(Instructor instructor){
        instructors.add(instructor);
    }

    public ArrayList<LectureCourse> getCourses() {
        return courses;
    }

    public void setCourses(ArrayList<LectureCourse> courses) {
        this.courses.clear();
        this.courses.addAll(courses);
    }

    public void addCourse(LectureCourse course){
        courses.add(course);
    }

    public TeachingSchedule getSchedule() {
        return schedule;
    }

    public void setSchedule(TeachingSchedule schedule) {
        this.schedule = schedule;
    }
}
