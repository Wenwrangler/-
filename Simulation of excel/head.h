#pragma once
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<Windows.h>
#include <stdlib.h>
#include <cstdio>
using namespace std;
struct MyStruct
{
	string Name;                     //����
	string Num;                      //ѧ��
	string CourseNumber;             //�γ̱��
	string Results;                  //�ɼ�
};
void GUI_Main();//���ӻ�������
void GUI_Show_Information();//չʾ�ı���Ϣ
void MySort();

void NameMergeSort(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int endIndex,int &idx);
void NameMerge(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int midIndex, int endIndex, int& idx);//����

void NumMergeSort(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int endIndex, int& idx);
void NumMerge(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int midIndex, int endIndex, int& idx);//ѧ��

void CourseNumberMergeSort(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int endIndex, int& idx);
void CourseNumbernameMerge(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int midIndex, int endIndex, int& idx);//�γ�

void ResultsMergeSort(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int endIndex, int& idx);
void ResultsMerge(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int midIndex, int endIndex, int& idx);//�ɼ�

void Name_ResultsMergeSort(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int endIndex, int& idx);
void Name_ResultsMerge(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int midIndex, int endIndex, int& idx);//����+�ɼ�


void Num_ResultsMergeSort(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int endIndex, int& idx);
void Num_ResultsMerge(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int midIndex, int endIndex, int& idx);//ѧ��+�ɼ�

void Name_Num_ResultsMergeSort(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int endIndex, int& idx);
void Name_Num_ResultsMerge(MyStruct sourceArr[], MyStruct tempArr[], int startIndex, int midIndex, int endIndex, int& idx);//����+ѧ��+�ɼ�

void Save_information();