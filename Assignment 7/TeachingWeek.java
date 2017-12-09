/**
 * Created by Almaz on 29.09.2017.
 */
public class TeachingWeek {

    private TeachingDay monday;
    private TeachingDay tuesday;
    private TeachingDay wednesday;
    private TeachingDay thursday;
    private TeachingDay friday;
    private TeachingDay saturday;
    private TeachingDay sunday;

    TeachingWeek(){
        monday = new TeachingDay();
        tuesday = new TeachingDay();
        wednesday = new TeachingDay();
        thursday = new TeachingDay();
        friday = new TeachingDay();
        saturday = new TeachingDay();
        sunday = new TeachingDay();
    }

    TeachingWeek(TeachingDay monday, TeachingDay tuesday, TeachingDay wednesday, TeachingDay thursday,
                        TeachingDay friday, TeachingDay saturday, TeachingDay sunday) {
        this.monday = monday;
        this.tuesday = tuesday;
        this.wednesday = wednesday;
        this.thursday = thursday;
        this.friday = friday;
        this.saturday = saturday;
        this.sunday = sunday;
    }

    public TeachingDay getMonday() {
        return monday;
    }

    public void setMonday(TeachingDay monday) {
        this.monday = monday;
    }

    public TeachingDay getTuesday() {
        return tuesday;
    }

    public void setTuesday(TeachingDay tuesday) {
        this.tuesday = tuesday;
    }

    public TeachingDay getWednesday() {
        return wednesday;
    }

    public void setWednesday(TeachingDay wednesday) {
        this.wednesday = wednesday;
    }

    public TeachingDay getThursday() {
        return thursday;
    }

    public void setThursday(TeachingDay thursday) {
        this.thursday = thursday;
    }

    public TeachingDay getFriday() {
        return friday;
    }

    public void setFriday(TeachingDay friday) {
        this.friday = friday;
    }

    public TeachingDay getSaturday() {
        return saturday;
    }

    public void setSaturday(TeachingDay saturday) {
        this.saturday = saturday;
    }

    public TeachingDay getSunday() {
        return sunday;
    }

    public void setSunday(TeachingDay sunday) {
        this.sunday = sunday;
    }
}
