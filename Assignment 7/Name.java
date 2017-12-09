/**
 * Created by Almaz on 29.09.2017.
 */
public class Name {
    private String givenName;
    private String familyName;

    Name(){}

    Name(String givenName, String familyName){
        setFamilyName(familyName);
        setGivenName(givenName);
    }

    void setGivenName(String givenName){
        this.givenName = givenName;
    }

    void setFamilyName(String familyName){
        this.familyName = familyName;
    }

    String getGivenName() {
        return givenName;
    }

    String getFamilyName(){
        return familyName;
    }
}
