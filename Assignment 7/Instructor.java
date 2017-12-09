import java.util.ArrayList;

/**
 * Created by Almaz on 29.09.2017.
 */
public class Instructor {
    private Name name;
    private ArrayList<LectureCourse> lectures;

    Instructor(){
        name = new Name();
        lectures = new ArrayList<>();
    }

    Instructor(Name name, ArrayList<LectureCourse> lectures) {
        this.lectures = new ArrayList<>();
        setName(name);
        setLectures(lectures);
    }

    public Name getName() {
        return name;
    }

    public void setName(Name name) {
        this.name = name;
    }

    public void setLectures(ArrayList<LectureCourse> lectures) {
        this.lectures.clear();
        this.lectures.addAll(lectures);
    }

    public void addLecture(LectureCourse lectureCourse){
        lectures.add(lectureCourse);
    }

    public ArrayList<LectureCourse> getLectures(){
        return lectures;
    }
}
