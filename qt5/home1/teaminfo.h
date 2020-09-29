#pragma once
#include<iostream>
#include<string>
using std::string;

class TeamInfo
{

public:
    TeamInfo();
    friend class foot_race;
private:
    int age;
    string name;
    string sex;
    string team_name;
    int height;
    int weight;
    string team_wear;
};

