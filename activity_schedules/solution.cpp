#include <bits/stdc++.h>
using namespace std;


    vector<string> act = {"swimming", "running", "football"};
    vector<string> sch;

void FindSchedules(int n) {
    if (sch.size() == n) {
        for (auto &day : sch) {
            cout << day << " ";
        }
        cout << endl;
        return;
    }

    for (auto &activity : act) {
        if (sch.empty() || sch.back() != activity) {

            sch.push_back(activity);
            
            FindSchedules(n);
            
            sch.pop_back();
        }
    }
}

int main() {
    int n;
    cout << "Enter number of days : ";
    cin >> n;

    FindSchedules(n);

    return 0;
}
