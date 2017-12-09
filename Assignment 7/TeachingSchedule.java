import java.util.ArrayList;

/**
 * Created by Almaz on 29.09.2017.
 */
public class TeachingSchedule {

    private ArrayList<TeachingWeek> weeks;

    TeachingSchedule(){
        weeks = new ArrayList<>();
    }

    TeachingSchedule(ArrayList<TeachingWeek> weeks) {
        weeks = new ArrayList<>();
        setWeeks(weeks);
    }

    public ArrayList<TeachingWeek> getWeeks() {
        return weeks;
    }

    public void setWeeks(ArrayList<TeachingWeek> weeks) {
        this.weeks.clear();
        this.weeks.addAll(weeks);
    }

    public void addWeek(TeachingWeek week){
        weeks.add(week);
    }
}
