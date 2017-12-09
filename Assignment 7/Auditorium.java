import javax.sound.sampled.AudioSystem;

/**
 * Created by Almaz on 29.09.2017.
 */
public class Auditorium {

    Auditorium(){}

    Auditorium(int roomNo) {
        setRoomNo(roomNo);
    }

    private int roomNo;

    void setRoomNo(int roomNo){
        this.roomNo = roomNo;
    }

    int getRoomNo(){
        return roomNo;
    }
}
