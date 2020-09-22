#include "qpersion.h"

QPersion::QPersion(QObject *parent) : QObject(parent)
{
    
}

int QPersion::age()
{
   
    return m_age;
}

void QPersion::setAge(int age)
{
   m_age=age; 
   emit ageChanged(m_age);
}

void QPersion::incAge()
{
    m_age++;
    emit ageChanged(m_age);
    
}
