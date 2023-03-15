#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue <int> stud;
        queue <int> san;

        for(int i = 0; i < students.size();i++){
            stud.push(students[i]);
            san.push(sandwiches[i]);
        }

        while(!stud.empty() || !san.empty()){
            if(stud.front() == san.front()){
                stud.pop();
                san.pop();
            }
            else{
                stud.push(stud.front());
                stud.pop();
            }
           
        }
        return stud.size();


    }
};