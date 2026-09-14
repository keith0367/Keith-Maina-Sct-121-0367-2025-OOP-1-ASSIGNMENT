#include <iostream>
#include <string>

using namespace std;

class unit {
public:
    string unitcode;
    string unittitle;
    int unitfee;

    void displayunit() {
        cout <<"Unit Code :" << unitcode << endl;
        cout <<"Unit Title:" << unittitle << endl;
        cout <<"Unit Fee:KSh " << unitfee << endl;
    }
};

class student {
public:
    int studentid;
    string firstname, lastname;
    string registeredunit;
    int feebalance;
    float catmark;
    float exammark;

    void registerunit(string utitle, int fee) {
        registeredunit = utitle;
        feebalance = fee;
        cout << firstname << " successfully registered for " << registeredunit << endl;
    }

    void displaylms() {
        cout << "LMS Dashboard" << endl;
        cout << "Student Name: " << firstname << " " << lastname << endl;
        cout << "Active Course: " << registeredunit << endl;
    }

    void displayportal() {
        cout << "Student Portal" << endl;
        cout << "Student ID:"<< studentid << endl;
        cout << "Student Name: " << firstname << " " << lastname << endl;
        cout << "Enrolled Unit: " << registeredunit << endl;
        cout << "Fee Balance:KSh " << feebalance << endl;
        cout << "CAT Mark: " << catmark << "/30" << endl;
        cout << "Exam Mark: " << exammark << "/70" << endl;
        cout << "Total Mark: " << (catmark + exammark) << "/100" << endl;
    }
};

class lecturer {
public:
    int lecturerid;
    string firstname, lastname;

    void entermarks(student &s, float cat, float exam) {
        s.catmark = cat;
        s.exammark = exam;
        cout << "Marks recorded by Lecturer " << firstname << " " <<lastname<< endl;
    }
};

int main(int argc, char** argv) {
    unit unitobject;
    unitobject.unitcode ="ICS2101";
    unitobject.unittitle ="Object Oriented Programming";
    unitobject.unitfee =15000;

    student studentobject;
    studentobject.studentid = 001;
    studentobject.firstname ="Keith";
    studentobject.lastname ="Maina";

    lecturer lecturerobject;
    lecturerobject.lecturerid = 500;
    lecturerobject.firstname="Dr";
    lecturerobject.lastname="Kamau";

    cout <<"UNIT REGISTRATION"<< endl;
    studentobject.registerunit(unitobject.unittitle, unitobject.unitfee);

    studentobject.displaylms();

    cout << "LECTURER GRADING" << endl;
    lecturerobject.entermarks(studentobject, 25, 60);

    studentobject.displayportal();

    return 0;
}