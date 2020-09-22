#pragma once

#include <QObject>

class QPersion : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("author","wang")
    Q_CLASSINFO("time","20:30")
    Q_CLASSINFO("version","1.0")
    
    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(QString name MEMBER m_name)
    Q_PROPERTY(int score MEMBER m_score)
public:
    explicit QPersion(QObject *parent = nullptr);
    int age();
    void setAge(int );
    void incAge();
    
signals:
    void ageChanged(int);
    
    
    
private:
   	int m_age=11;
    int m_score=80;
    QString m_name;
    

};

