/**
 * Created by Almaz on 29.09.2017.
 */
public class Lecture {

    private Auditorium room;
    private LectureCourse lecture;

    Lecture(){
        room = new Auditorium();
        lecture = new LectureCourse();
    }

    Lecture(Auditorium room, LectureCourse lectureCourse){
        setRoom(room);
        setLecture(lectureCourse);
    }

    public Auditorium getRoom() {
        return room;
    }

    public void setRoom(Auditorium room) {
        this.room = room;
    }

    public LectureCourse getLecture() {
        return lecture;
    }

    public void setLecture(LectureCourse lecture) {
        this.lecture = lecture;
    }
}
