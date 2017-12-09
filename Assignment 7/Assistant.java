import java.util.ArrayList;

/**
 * Created by Almaz on 29.09.2017.
 */
public class Assistant {

    private Name name;
    private ArrayList<LectureCourse> lectures;

    Assistant(){
        name = new Name();
        lectures = new ArrayList<>();
    }

    Assistant(Name name, ArrayList<LectureCourse> lectures) {
        this.lectures = new ArrayList<>();
        setName(name);
        setLectures(lectures);
    }

    Assistant(Name name) {
        setName(name);
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
