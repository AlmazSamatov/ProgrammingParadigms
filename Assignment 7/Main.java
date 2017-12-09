import java.util.ArrayList;

/**
 * Created by Almaz on 05.10.2017.
 */
public class Main {

    public static void main(String[] args){

        University university = new University();

        // create new instructor
        Instructor paradigmsInstructor = new Instructor();
        paradigmsInstructor.setName(new Name("Eugene", "Zuev"));

        // create new assistant
        Assistant paradigmsAssistant = new Assistant();
        paradigmsAssistant.setName(new Name("Eugene", "Bobrov"));

        // create new lecture course
        LectureCourse paradigms = new LectureCourse("Modern Programming Paradigms", new Year("BS2"),
                paradigmsInstructor, true);
        paradigms.addAssistant(paradigmsAssistant);

        // create new schedule
        TeachingSchedule schedule = new TeachingSchedule();
        TeachingWeek teachingWeek = new TeachingWeek();
        TeachingDay friday = new TeachingDay();
        Lecture paradigmsLecture = new Lecture(new Auditorium(107), paradigms);
        friday.addLecture(paradigmsLecture);
        teachingWeek.setFriday(friday);

        // add 15 weeks to schedule
        for(int i = 0; i < 15; i++)
            schedule.addWeek(teachingWeek);

        // set university attributes
        university.addCourse(paradigms);
        university.addAssistant(paradigmsAssistant);
        university.addInstructor(paradigmsInstructor);
        university.setSchedule(schedule);

        Student student1 = new Student();
        student1.setName(new Name("Ivan", "Ivanov"));
        student1.setYear(new Year("BS2"));
        student1.addLecture(paradigms);

        Student student2 = new Student();
        student2.setName(new Name("Oleg", "Mirzayan"));
        student2.setYear(new Year("BS2"));
        student2.addLecture(paradigms);

        // add new students
        university.addStudent(student1);
        university.addStudent(student2);
    }
}
