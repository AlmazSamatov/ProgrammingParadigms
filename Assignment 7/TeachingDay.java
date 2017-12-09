import java.util.ArrayList;

/**
 * Created by Almaz on 29.09.2017.
 */
public class TeachingDay {

    private ArrayList<Lecture> lectures;

    TeachingDay(){
        lectures = new ArrayList<>();
    }

    TeachingDay(ArrayList<Lecture> lectures){
        lectures = new ArrayList<>();
        setLectures(lectures);
    }

    public void setLectures(ArrayList<Lecture> lectures) {
        this.lectures.clear();
        this.lectures.addAll(lectures);
    }

    public void addLecture(Lecture lecture){
        lectures.add(lecture);
    }

    public ArrayList<Lecture> getLectures(){
        return lectures;
    }
}
