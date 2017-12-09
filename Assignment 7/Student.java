import java.util.ArrayList;

/**
 * Created by Almaz on 29.09.2017.
 */
public class Student {

    private Name name;
    private Year year;
    private ArrayList<LectureCourse> lectures;

    Student(){
        name = new Name();
        year = new Year();
        lectures = new ArrayList<>();
    }

    Student(Name name, Year year, ArrayList<LectureCourse> lectures){
        this.lectures = new ArrayList<>();
        setName(name);
        setYear(year);
        setLectures(lectures);
    }

    Student(Name name, Year year){
        setName(name);
        setYear(year);
    }

    public Name getName() {
        return name;
    }

    public void setName(Name name) {
        this.name = name;
    }

    public Year getYear() {
        return year;
    }

    public void setYear(Year year) {
        this.year = year;
    }

    public ArrayList<LectureCourse> getLectures() {
        return lectures;
    }

    public void setLectures(ArrayList<LectureCourse> lectures) {
        this.lectures.clear();
        this.lectures.addAll(lectures);
    }

    public void addLecture(LectureCourse lectureCourse){
        lectures.add(lectureCourse);
    }
}
