import java.util.ArrayList;

/**
 * Created by Almaz on 29.09.2017.
 */
public class LectureCourse {

    private String title;
    private Year year;
    private Instructor instructor;
    private ArrayList<Assistant> assistants;
    private boolean isCoreCourse;

    LectureCourse(){
        year = new Year();
        instructor = new Instructor();
        assistants = new ArrayList<>();
    }

    LectureCourse(String title, Year year, Instructor instructor, boolean isCoreCourse){
        this.assistants = new ArrayList<>();
        setTitle(title);
        setYear(year);
        setInstructor(instructor);
        setCoreCourse(isCoreCourse);
    }

    LectureCourse(String title, Year year, Instructor instructor, ArrayList<Assistant> assistants,
                  boolean isCoreCourse) {
        this.assistants = new ArrayList<>();
        setTitle(title);
        setYear(year);
        setInstructor(instructor);
        setAssistants(assistants);
        setCoreCourse(isCoreCourse);
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public Year getYear() {
        return year;
    }

    public void setYear(Year year) {
        this.year = year;
    }

    public Instructor getInstructor() {
        return instructor;
    }

    public void setInstructor(Instructor instructor) {
        this.instructor = instructor;
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

    public boolean isCoreCourse() {
        return isCoreCourse;
    }

    public void setCoreCourse(boolean isCoreCourse) {
        this.isCoreCourse = isCoreCourse;
    }
}
