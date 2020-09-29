#pragma once
#include<vector>
using std::vector;
#include"teaminfo.h"

class foot_race
{
public:
    foot_race();
    void init_team();
    void change_ones_info();
    void get_this_team_current_match();
    void chang_team_member_info();
    static void confrontation(foot_race demo,foot_race demo1);


private:
    int score;
    int round;
    vector<TeamInfo>team_member_info;
    void auto_update_current_match();

};

