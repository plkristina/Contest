Student make_student(std::string line) {
    Student person;
    std::string str;
    for (int s = 0; s < line.length(); ++s) {
        if (line[s] == ';') {
            person.name = str;
            str = "";
        } else str += line[s];
    }
    person.group = str;
    return person;
}

bool is_upper(Student p1, Student p2) {
    if  (p1.group == p2.group) return p1.name < p2.name;
    else return p1.group < p2.group;    
}

void print(std::vector<Student> students){
    if (students.size() == 0) std::cout << "Empty list!" << std::endl; 
    else {
        std::cout << students[0].group << std::endl;
        std::cout << "- " << students[0].name << std::endl;
        for (int i = 1; i < students.size(); ++i) {
            if (students[i - 1].group == students[i].group) {
                std::cout << "- " << students[i].name << std::endl;
            } else {
                std::cout << students[i].group << std::endl;
                std::cout << "- " << students[i].name << std::endl;
            }
        }
    }
}
