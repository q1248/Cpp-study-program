#include <iostream>
#include"foot_race.h"
using namespace std;

int main()
{
    foot_race team1,team2;
    //初始化队伍1 和 队伍2 的成员之类的信息
    team1.init_team();
    team2.init_team();
    foot_race::confrontation(team1,team2);
    //以队伍1为主视觉的实时情况
    team1.get_this_team_current_match();
    //以队伍2为主视觉的实时情况
    team2.get_this_team_current_match();

    return 0;
}
