package com.example.complainbox1.model;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;

@Entity
public class Complain {
    @Id
    @GeneratedValue
    private int cid;
    private String complainee;
    private String complaintext;

    public int getCid() {
        return cid;
    }

    public void setCid(int cid) {
        this.cid = cid;
    }

    public String getComplainee() {
        return complainee;
    }

    public void setComplainee(String complainee) {
        this.complainee = complainee;
    }

    public String getComplain() {
        return complaintext;
    }

    public void setComplain(String complain) {
        this.complaintext = complaintext;
    }

    @Override
    public String toString() {
        return "Complain{" +
                "cid=" + cid +
                ", complainee='" + complainee + '\'' +
                ", complaintext='" + complaintext + '\'' +
                '}';
    }
}
