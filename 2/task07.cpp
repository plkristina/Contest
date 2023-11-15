Student make_student(std::string line) {
    Student person;
    Course pred;
    std::string str;
    std::vector <std::string> info;
    for (int s = 0; s < line.length(); ++s) {
        if (line[s] == ';') {
            info.push_back(str);
            str = "";
        } else str += line[s];
    }
    info.push_back(str);
    person.name = info[0];
    person.group = info[1];
    for (int i = 2; i < info.size() - 3; i += 3) {
        pred.name = info[i];
        pred.semester = stoi(info[i+1]);
        pred.finished = info[i+2] == "1";
        person.courses.push_back(pred);
    }
    return person;
}

bool is_debtor(Student student, int cur_semester, int max_debt) {
    int cnt = 0;
    for (int i = 0; i < student.courses.size(); ++i) {
    	if (student.courses[i].semester == cur_semester) continue;
        if (student.courses[i].finished == false) ++cnt;
    }
    return cnt > max_debt;
}

bool is_upper(Student p1, Student p2) {
    if  (p1.group == p2.group) return p1.name < p2.name;
    else return p1.group < p2.group;    
}

void print(std::vector<Student> expulsion_candidates){
    if (expulsion_candidates.size() == 0) std::cout << "Empty list!" << std::endl; 
    else {
        std::cout << expulsion_candidates[0].group << std::endl;
        std::cout << "- " << expulsion_candidates[0].name << std::endl;
        for (int i = 1; i < expulsion_candidates.size(); ++i) {
            if (expulsion_candidates[i - 1].group == expulsion_candidates[i].group) {
                std::cout << "- " << expulsion_candidates[i].name << std::endl;
            } else {
                std::cout << expulsion_candidates[i].group << std::endl;
                std::cout << "- " << expulsion_candidates[i].name << std::endl;
            }
        }
    }
}
