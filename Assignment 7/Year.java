/**
 * Created by Almaz on 29.09.2017.
 */
public class Year {

    private String[] EducationYear = {
        "BS1", "BS2", "BS3", "BS4", "MS1", "MS2"
    };

    private String year;

    Year(){}

    Year(String year){
        setYear(year);
    }

    // Attribute year can be one of the following strings:
    // "BS1", "BS2", "BS3", "BS4", "MS1", "MS2"
    void setYear(String year){
        checkForCorrectness(year);
        this.year = year;
    }

    String getYear(){
        return year;
    }

    // check value for correctness otherwise throw exception
    private void checkForCorrectness(String year){
        boolean isInSet = false;
        for(String s: EducationYear){
            if(s.equals(year))
                isInSet = true;
        }
        if(!isInSet)
            throw new Error("You try to set wrong year to object of class Year");
    }
}
