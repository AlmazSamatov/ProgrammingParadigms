/**
 * Created by Almaz on 29.09.2017.
 */
public class Grade {
    private String[] Grades = {
        "A", "B", "C",  "D"
    };

    private String grade;

    Grade(){}

    Grade(String grade){
        setGrade(grade);
    }

    // Attribute grade can be one of the following strings:
    // "A", "B", "C", "D", "F"
    void setGrade(String grade){
        checkForCorrectness(grade);
        this.grade = grade;
    }

    String getGrade(){
        return grade;
    }

    // check value for correctness otherwise throw exception
    private void checkForCorrectness(String grade){
        boolean isInSet = false;
        for(String s: Grades){
            if(s.equals(grade))
                isInSet = true;
        }
        if(!isInSet)
            throw new Error("You try to set wrong grade to object of class Grade");
    }
}
