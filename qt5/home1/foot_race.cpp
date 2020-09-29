#include "foot_race.h"

foot_race::foot_race()
{
}

void foot_race::init_team()
{

    std::cout<<"初始化整个队伍的函数,不适合定向修改某人的信息"<<std::endl;


}

void foot_race::change_ones_info()
{
    std::cout<<"修改某个人具体信息的函数"<<std::endl;
}

void foot_race::get_this_team_current_match()
{
   auto_update_current_match();
   std::cout<<"调用自动更新比赛情况的函数,然后将数据以该队伍的视角可视化的显示出来"<<std::endl;
}

void foot_race::chang_team_member_info()
{
    std::cout<<"调整比赛过程中,队伍人员的变动";
}

void foot_race::confrontation(foot_race demo,foot_race demo1)
{
   std::cout<<"这是设置该任意两个对象之间对抗的静态方法"<<std::endl;
}

void foot_race::auto_update_current_match()
{
   std::cout<<"实时更新比赛的情况"<<std::endl;
}
