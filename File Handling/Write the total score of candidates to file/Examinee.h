#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
struct Examinee
{
	string id;
	float math = 0, literature = 0, physic = 0, chemistry = 0, biology = 0, history = 0, geography = 0, civic_education = 0, natural_science = 0, social_science = 0, foreign_language = 0;
};


// Hàm cắt chuỗi và lưu vào struct
Examinee readExaminee_token(string s);

// Hàm lấy thông tin từ file
vector<Examinee> readExamineeList(string file_name);

// Hàm tính tổng điểm
float TotalScore(Examinee& candidate);

// Hàm ghi thông tin ra file
void writeTotal(vector<Examinee> examinee_list, string out_file_name);


