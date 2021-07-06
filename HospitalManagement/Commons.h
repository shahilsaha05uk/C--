#ifndef _STRUCTS_H_
#define _STRUCTS_H_
#endif // !_STRUCTS
#pragma once

#include <iostream>
#include <string>
using namespace std;

enum PatientType
{
    GENERAL,
    HEART,
    LUNGS,
};



struct PatientDetails
{
    long long ID;
    string PatientType;
    string firstname;
    string lastname;
    int age;
    char blood[5];
    char gender;
};

