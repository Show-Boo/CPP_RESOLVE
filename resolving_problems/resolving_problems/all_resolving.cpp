#include <iostream>
#include <cmath>


using namespace std;

/*�����ϴ� square
int square(int i) {
	return i * i;
}

int main() {
	int x;
	x = 5;
	cout << square(x) << endl; // square �Լ� ���
}
*/

//���� �����
/*
int main() {
	double value;
	value = 5;
	cout << sqrt(value) << endl; //������
	cout << exp(value) << endl; //e�� ���� �� ����
	cout << log10(value) << endl; //�α׿���(��:10)
	cout << cos(value) << endl; //cosine
	return 0;
}
*/


//default augments�� ���
/*
void applePrice(int a = 1000) {
	cout << "Price of an apple is " << a << endl;
}
// default augment �߿�!
int main() {
	applePrice(1500);
	applePrice(500);
	applePrice(1000);
	applePrice(); // default augments
	return 0;
}
*/


//4���� �Լ��� ����ϱ�
/*
int get_number() {
	int num;
	cout << "Enter the number : ";
	cin >> num;
	return num;
}

int addmul(int x, int y, int z) {
	return (x + y) * z;
}
float muldiv(int x, int y, int z) {
	return float( (x * y) ) / z;
}
int addmuladd(int x, int y, int z) {
	return (x + y) * (y + z);
}
float subdivsub (int x, int y, int z) {
	return float( (x - y) ) / float( (y - z) );
}
int main() {
	int x;
	int y;
	int z;
	x = get_number();
	y = get_number();
	z = get_number();
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
	cout << "(x + y) * z = " << addmul(x, y, z) << endl;
	cout << "(x * y) / z = " << muldiv(x, y, z) << endl;
	cout << "(x + y)*(y + z) = " << addmuladd(x, y, z) << endl;
	cout << "(x - y) / (y - z) = " << subdivsub(x, y, z) << endl;
	return 0;
}
*/

//������� default �� ���
/*
int print_d0b(int year = 1900, int month = 1, int day = 1) {
	cout << "��������� " << year << "�� " << month << "�� " << day << "�� �Դϴ�.";
	return 0;
}

int main() {
	int y;
	int m;
	int d;
	print_d0b();
	cout << endl;

	cout << "year �Է� : ";
	cin >> y;
	cout << "month �Է� : ";
	cin >> m;
	cout << "day �Է� : ";
	cin >> d;
}
*/

//cmath�� Ȱ��
/*
int main() {
	double x;
	double y;

	cout << "x : ";
	cin >> x;
	cout << "y : ";
	cin >> y;

	cout << "Rounding up nuber of " << x << ": " << ceil(x) << endl;
	cout << y << "-th root of " << x << ": " << pow(x, 1 / y);

}
*/

// call by value�� call  by reference
/*
int swap_call_by_value(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	return 0;
}
int swap_call_by_reference(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
	return 0;
}
int main() {
	int x;
	int y;
	cout << "x �Է� : ";
	cin >> x;
	cout << endl << "y �Է� : ";
	cin >> y;

	cout << x << " " << y << endl;
	swap_call_by_value(x,y);
	cout << x << " " << y << endl;
	swap_call_by_reference(x, y);
	cout << x << " " << y << endl;


}
*/

//if ������ ���� ���� ���α׷�
/*
int main() {

	char grade = 'X';
	int score;
	cout << "Enter your score: ";
	cin >> score;
	if (score >= 0 && score <= 100 ) {
		if (score >= 90)
			grade = 'A';
		if (score >= 80)
			grade = 'B';
		if (score >= 70)
			grade = 'C';
		if (score >= 60)
			grade = 'D';
		else
			grade = 'F';

		cout << "Your grade is " << grade << endl;
	}
	else {
		cout << "The score (" << score << ") is invalid" << endl;
	}
	return 0;


}
*/

//while�� ����� 2 �ŵ�����
/*
#include <iomanip>
int main() {
	int num = 1;
	int count = 1;
	cout.imbue(locale("")); // �� �ڸ�(1,000)���� ��ǥ �������.
	while (count <= 20) {
		num *= 2;
		cout << count << '\t' << setw(10) << num << endl;
		count++;
	}
	return 0;
}
*/

// ������� 10*10
/*
#include <iomanip>

int main() {
	int column = 1, row = 1;
	while (row <= 10) {
		while (column <= 10) {
			int num;
			if (row == column) 
				num = 1;
			
			else 
				num = 0;
			cout << setw(4) << num;
			column++;
		}
		cout << endl;
		row++;
		column = 1;            // column = 1 �� �ʱ�ȭ �����ֱ�...
	}
	return 0;
}
*/

// for ������ ������ �Ȱ��� �����
/*
int main() {
	
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i == j)                       // i == j ����!!!!!!!
				cout << 1;
			else
				cout << 0;
		}
		cout << endl;
	}
	return 0;
}
*/




// 10 ���� �ڿ��� ���, Ʋ���� while������ ���
/*
int main() {
	int num;
	while (true) {
		cout << "Enter the number (0, 10]: ";
		cin >> num;
		if (num >= 1 && num <= 10)
			break;
	}
	cout << "Success!" << endl;
	return 0;
}
*/


// n * m ��� �����
/*
#include <iomanip>

int main() {
	int n, m;
	cout << "Enter n for n x m matrix: ";
	cin >> n;
	cout << "Enter m for n x m matrix: ";
	cin >> m;
	
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << setw(4) << i * j;
		}
		cout << endl;
	}
	return 0;
}
*/

// Ȧ¦ �Ǻ� 5�� ����
/*
int main() {
	
	for (int i = 1; i <= 5; i++) {
		int a;
		cout << i << "��° ���� : ";
		cin >> a;

		if (a % 2 == 0)
			cout << a << "��(��) ¦�� �Դϴ�." << endl;
		else
			cout << a << "��(��) Ȧ�� �Դϴ�." << endl;
	}
}
*/
// 1���� n���� �� ���ϱ�
/*
int main() {
	int a;
	int sum = 0;

	cout << "number : ";
	cin >> a;

	for (int i = 1; i <= a; i++) {
		sum = sum + i;
	}
	cout << sum;

}
*/

// ������ �ܼ� �Է�
/*
int main() {

	while (true) {

		int a;
		cout << "�� ���� �Է��ϼ��� : ";
		cin >> a;


		if (a >= 1 && a <= 9) {
			for (int i = 1; i <= 9; i++) {
				cout << a << " * " << i << " = " << a * i << endl;
			}
		}


		else if (a == -1) {
			break;
		}

		else {
			cout << "1 ���� 9������ ������ �Է��� �ּ���" << endl;
		}
		cout << endl;
	}

	cout << "�����մϴ�.";

}
*/

//����Լ�, ���Ǻ�
/*
int gcd(int x, int y) {
	return y == 0 ? x : gcd(y, x % y);
}
int main() {
	int a;
	int b;
	cout << "x = ";
	cin >> a;
	cout << "y = ";
	cin >> b;

	cout << "gcd(" << a << "," << b << ") = " << gcd(a, b);

}
*/

//string ����� ��ɵ�
/*
#include <string> //string��ü ���
#include <fstream> //ifstream ofstream
#include <iomanip> // setw

using namespace std;
int main() {
	string s1 = "mouse";
	cout << s1 << endl;
	cout << s1.length() << ", " << size(s1) << endl << endl; //s1�� length, size ���
	
	cout << s1.empty() << endl;
	s1.clear();// s1 = "";
	cout << s1.empty() << endl;
	
	s1 = "Good";
	s1 = s1 + "-bye";
	// Good-bye (string)
	// 01234567 (index)
	cout << s1 << endl;
	cout << s1[4] << ", " << s1.at(4) << endl; // �ΰ��� ������� index 4 �� ���
	cout << bool(s1 == "Good-bye") << endl; // s1�� Good-bye �� (bool �� ���)
	cout << bool(s1 == "good-bye") << endl; // s1�� good-bye �� (bool �� ���)
	cout << bool(s1 >= "z") << endl << endl; // s1�� ��z������ ũ�ų� ������ �� (bool �� ���)
	cout << s1.substr(5,3) << endl; // s1�� index 5���� 3���� ���
	cout << s1.substr(2,2) << endl; // s1�� index 2���� 2���� ���
	cout << s1.find("od") << endl; // od ��ġ ���
	cout << s1.find("od", 5) << endl;
	int od_index = s1.find("od");
	cout << s1.find("od", od_index + 2);
	cout << (s1.find("korea") == string::npos) << endl;
	return 0;
}
*/


// file ����� �⺻
/*
#include <string> //string��ü ���
#include <fstream> //ifstream ofstream
#include <iomanip> // setw
using namespace std;
int main() {
	ofstream fout; // processor->file ����
	fout.open("example.txt"); // example.txt ����
	string s2 = "Objective Oriented Programming";
	fout << s2 << endl;
	fout << "Random Variables" << endl;
	fout << "Linear Algebra" << endl;
	fout.close();// fout �ݱ�

	ifstream fin;
	string s1;
	fin.open("example.txt"); // example.txt ����
	if (!fin) {
		cout << "Error, no such file exists" << endl;
		exit(100);
	}
	
	while (getline(fin, s1)) { // line by line���� example.txt���� �о�ͼ� ���
		cout << s1 << endl;
	}
	*/


	/*
	//�ѹ��� ������� �ʱ� ������ �ּ�ó�� �س���
	while (true) { // ���� ������ example.txt���� �о�ͼ� ���
		fin >> s1;
		if (!fin)
			break;
		cout << s1 << endl;

		fin.close();
	}
	*/		/*
}
*/

// ��°� ���� ����, unsetf, ios �ҷ�����
/*
int main() {
	double d1 = 1.23456789;
	cout << d1 << endl;
	cout.width(10); // ��°� ���� 10�� ����
	cout.precision(3); // �ֿ� �ڸ��� 3�ڸ��� ���
	cout << d1 << endl;
	char ch1;
	char ch2;
	// ch1, ch2 : enter �� z��. ( space + z )
	cin >> ch1;
	cout << "(" << ch1 << ")" << endl;
	cin.ignore(); // enter�� ���� cin���� ���� �ʵ��� ����
	cin.unsetf(ios::skipws); // space�� �Է����� �����ϰ� �� 
	cin >> ch2;
	cout << "(" << ch2 << ")" << endl;
	return 0;
}
*/

//���ּ� string
/*
#include <string>
int main() {
	string city, area, building, street;
	cout << "�� : ";
	cin >> city;


	cout << "�� : ";
	cin >> area;


	cout << "�� : ";
	cin >> street;


	cout << "�ǹ��� : ";
	cin >> building;
	cout << endl;

	string adress = city + area + street + building;
	cout << "�� �ּ� : " << adress;
}
*/

// pointer swap
/*
//int &x = a; int &y = b; pass by reference
//int *x = &a; int *y = &b; pass by address
void swap(int* x, int* y) {
	int *tmt = x;
	x = y;
	y = tmt;
}
int main() {
	int a = 10, b = 20;
	cout << a << ", " << b << endl;
	swap(a, b);
	cout << a << ", " << b << endl;
	return 0;
}
*/


// func�� ������ ��������
/*
int sum(int x, int y) { return x + y; }
int mult(int x, int y) { return x * y; }
// �Լ� func�� �����Ϳ� �Ķ���� x, y�� �޾ƿͼ� �Լ� func�� ���ప�� �������ִ� �Լ�
int evaluate(int (*func)(int, int), int x, int y)
{
	return func(x, y);
}
int main() {
	int(*func)(int, int);
	func = sum; // sum �Լ� �ּҰ� ����
	cout << func(10, 20) << endl;
	func = mult; // mult �Լ� �ּҰ� ����
	cout << func(10, 20) << endl;
	cout << evaluate(&sum, 100, 200) << endl;
	cout << evaluate(&mult, 100, 200) << endl;
	return 0;
}
*/

// vector�� Ȱ��
/*
#include<iostream>
#include<vector>
using namespace std;
void print(const vector<int>& v) {
	for (unsigned i = 0; i < v.size(); i++)
		cout << v[i] << "\t";
	cout << endl;
}
int main() {
	// �ε��� 0 1 2
	vector<int> vec{ 10, 20, 30 };
	print(vec);
	vec[0] = 100; // vector �ε��� 0���� ���� ����
	vec.at(1) = 200; // vector�� at() �Լ� �̿�	
	print(vec);
	vec.push_back(400); // vector�� push_back() �Լ� �̿�
	print(vec);
	vec.pop_back(); // vector�� pop_back() �Լ� �̿�
	print(vec);
	cout << endl;
	// ������� for���� �̿��� vector ���Ұ� �ٲٱ� (�����̵� p.26 ����)
	for (int &elem : vec) {
		cout << "enter an element of vector v: ";
		cin >> elem;
	}
	cout << endl << "[ vector v ]" << endl;
	// ������� for���� �̿��� ȭ�� ����ϱ� (�����̵� p.26 ����)
	for (int elem : vec)
		cout << elem << "\t";
	cout << endl;
	return 0;
}
*/

// ���� ����ϱ�
/*
#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

bool is_prime(int num) {
	if (num < 2)
		return false;
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			return false;// num�� i�� ���� �������� 0�̸� false ����
	}
	return true;
}
vector<int> primes(int lower, int upper) {
	vector<int> v;
	for (int i = lower; i <= upper; i++) {
		if (is_prime(i) == true)
			v.push_back(i);// �Ҽ��̸�(is_prime�� ���̸�) �ڿ� push
	}
	return v;
}
int main() {
	int lower = 10, upper = 100;
	vector <int> vec = primes(lower, upper); // ���� vec ���� �� primes�� ����
	for (int elem : vec)
		cout << elem << setw(5);
	cout << endl;
	return 0;
}
*/

// ���� ���ϴ� �Լ� ������
/*
#include <iostream>
#include <vector>
#include <iomanip>

void get(int* num) {
	*num = (*num) * (*num);
}

int main() {
	int a;
	cout << "input> ";
	cin >> a;
	get(&a);
	cout << "������> " << a;
	return 0;
}
*/

//pointer�� string�� �ٲٱ�
/*
#include <iostream>
#include <string>
using namespace std;

void change(string *word) {
	string other;
	cout << "input> ";
	cin >> other;
	*word = other;
}

int main() {
	string str = "This is default value";
	cout << "�⺻�� ���> " << str << endl;
	change(&str);
	cout << "��ȯ�� �� ���> " << str << endl;
	return 0;
}
*/


//vector ���� �����
/*

#include <iostream>
#include <vector>


using namespace std;

void reverse(vector <int> &v) {
	for (int i = 0; i < v.size() / 2; i++) {
		int a = v[i];
		int b = v.size() - 1;
		v[i] = v[b - i];
		v[b - i] = a;
	}
}

int main() {
	vector <int> vec(10);
	for (int i = 1; i <= 10; i++) 
		vec[i - 1] = i;
	

	cout << "�⺻ Vector ��:" << endl;
	for (int i = 0; i < vec.size(); i++) 
		cout << " " << vec[i];
	cout << endl;

	reverse(vec);

	cout << "�Լ� ���� �� Vector ��:" << endl;
	for (int i = 0; i < vec.size(); i++) 
		cout << " " << vec[i];
	


	return 0;

}
*/

// �ְ� ���� ��� ���α׷�
/*
#include <vector>

int inputGrade(float grade) {
	cin >> grade;
	if ((grade - (int)grade) != 0.0 || grade < 0 || grade > 100) {
		cout << "invalid input!!!" << endl;
		exit(EXIT_FAILURE);
	}
	else
		return (int)grade;
}
int topGrade(const vector<int>& grade) { 
	int high = grade[0];
	for (int i = 0; i < grade.size(); i++) {
		if (grade[i] > high)
			high = grade[i];
	}
	return high;
}

int main() {
	vector<int> grades;
	float _grade = 0;
	for (int i = 0; i < 3; i++) {
		cout << "Input " << i << "-th grade(0~100):";
		int grade = inputGrade(_grade);
		grades.push_back(grade);
	}
	int highest_number = topGrade(grades);
	cout << "Top Grade: " << highest_number;
	return 0;
}
*/



//using Matrix ����
/*
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
using Matrix = vector<vector<int>>;

// �迭�� ��� �ּҰ�(�����ּ�, ���ּ�)�� ����
void print(int* begin, int* end) {
	for (int* curr = begin; curr < end; curr++) //�����ð��� ��� �ּҰ��� �������� for�� �ۼ�
		cout << setw(4) << *curr;
	// while�� ���� �κ� - �����ð��� ��� �ּҰ��� �������� while�� �ۼ�
	// int* curr = begin;
	// while (curr < end) {
	// cout << setw(4) << *curr;
	// curr++;
	// }
	cout << endl;
}
// (+, -) for pointer: �ּҰ��� ����/���� (���� ���� ��ġ)
int main() {
	int list[3] = { 10, 20, 30 };
	cout << list << '\t' << *list << endl;
	cout << list + 1 << '\t' << *list + 1 << endl;
	cout << list + 2 << '\t' << *list + 2 << endl;
	int* begin = list;
	int* end = list + 3;
	print(begin, end);
	return 0;
}
*/


// �Ҽ� ���ϱ�
/*

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
//�Ҽ� : 1�� �ڱ��ڽ��� �����ϰ�� ����� ���� 1���� ū ����
bool is_prime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false; // n�� i�� ���� �������� 0�̸� false�� ����
		return true;
}
vector<int> primes(int low, int high) {
	vector<int> result;
	for (int i = low; i <= high; i++)
		if (is_prime(i))
			result.push_back(i);// �Ҽ��̸� (is_prime�� ���̸�) �ڿ� push
		return result;
}
void print(const vector<int>& v) {
	for (int elem : v) //vector index�� �ƴ� ���Ҹ� �̿��� for��
		cout << setw(4) << elem;
	cout << endl;
}
int main() {
	int low, high;
	cin >> low >> high;
	vector<int> vec = primes(low, high);
	print(vec);
	return 0;
}

*/

// ����/ ���� �迭

/*
#include <iostream>
#include <vector>
using namespace std;
//���� �迭(static array):���α׷� ������ ũ�Ⱑ �����Ǿ� ���� �Ұ�
//���� �迭(dynamic array): ���α׷� ������(run time) �Ҵ�/������ ����
int main() {
	const int size = 3;
	int list[size] = { 10, 20, 30 };
	int length = 3;
	cin >> length; // Ű����κ��� �迭�� ũ�⸦ �Է¹���
	int* list2 = new int[length]; //���� �迭 ����
		// double* list2 = new double[length]
	int* begin = list2;
	int* end = list2 + length;
	for (int* curr = begin; curr != end; curr++)
		cin >> *curr;
	for (int* curr = begin; curr != end; curr++)
		cout << *curr << '\t';
	cout << endl;
	delete[] list2; //�Ҵ� ����
	return 0;
}
*/


// ���� �������� �Ҵ�ް� ��� ���ϴ� ���α׷�
/*
int main() {
	double sum = 0.0;
	double* numbers;
	int size;

	cout << "Please enter number of value to proccess: ";
	cin >> size;

	if (size > 0) {
		cout << "Please enter" << size << "numbers";
		numbers = new double[size];
		for (int i = 0; i < size; i++) {
			cin >> numbers[i];
			sum += numbers[i];
		}
		cout << "The average of ";
		for (int i = 0; i < size - 1; i++)
			cout << numbers[i] << ", ";
		
		cout << numbers[size - 1] << " is " << sum / size;
		delete [] numbers;
	}
}

*/


// ���� �迭
/*
#include <iostream>
#include <vector>
using namespace std;
void print(int** m, int nRow, int nCol) {
	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j < nCol; j++)
			cout << m[i][j] << '\t';//2�� for���� index�� �̿��Ͽ� �迭 ���� ��� - ������ : '\t'
		cout << endl;
	}
}
int main() {
	int nRow = 2, nCol = 2;
	int** matrix2;
	matrix2 = new int *[nRow]; // �����迭 ����(�����)
		for (int i = 0; i < nRow; i++)
			matrix2[i] = new int [nCol]; // �����迭 ����(������)
			matrix2[0][0] = 1; matrix2[0][1] = 2;
	matrix2[1][0] = 3; matrix2[1][1] = 4;
	print(matrix2, nRow, nCol);
	for (int i = 0; i < nRow; i++)
		delete[] matrix2[i];
	delete[] matrix2;
	return 0;
}

*/

//2���� ����
/*
#include <vector>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <random>

void print_matrix(vector <vector <int>> &m) {
	for (auto row : m)
		for (auto col : row)
			col = (rand() % 19) - 9;
}

void print(vector <vector <int>>& m) {
	for (auto row : m) {
		for (auto elem : row)
			cout << setw(4) << elem;
		cout << endl;
	}
}

vector <vector <int>> xMat(vector <vector <int>>& m1, vector <vector <int>>& m2) {
	vector <vector <int>> M(m1.size(), vector <int>(m2.size()));
	for (int i = 0; i < m1.size(); i++) {

	}



}


int main() {

}
*/

// �ܾ� ã��
/*
#include <iostream>
#include <string>

using namespace std;

int main() {
	string data = "���,���α׷���,����,����ǹٺ�,���뿪,õ���ǻ��,�����,��ü������";
	string input;

	cout << "Ű���� : ";
	cin >> input;
	cout << "�˻���� : ";

	string comma = ",";
	int location = 0;
	string word;

	while (1) {
		location = data.find(comma);
		if (location == string::npos) {
			if (data.find(input) != string::npos) {
				cout << data;
			}
			break;
		}

		word = data.substr(0, location);
		if (word.find(input) != string::npos) {
			cout << word << ",";
		}
		data = data.substr(location + 1);
	}

}
*/

/*
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			int num = rand() % 101;
			cout << setw(4) << num;
			if (j % 10 == 0)                     // 10�϶� �ٹٲ�!!!
				cout << endl;
		}
	}
	cout << endl;
}
*/


// �߰� 1��
/*
#include <iostream>
using namespace std;

int **create_integer_matrix(int n) {
	int** arr;
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
			arr[i][j] = i + j;
	}

	return arr;
}

void destroy_integer_matrix(int** m, int n) {
	for (int i = 0; i < n; i++) {
		delete[] m[i];
	}
	delete[] m;
}

int main()
{
	int i, j, ** M;
	M = create_integer_matrix(3);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	destroy_integer_matrix(M, 3);
	return 0;
}
*/



/*
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

void get_command(string command);
void get_size(int size);
int** gen_matrix();
void swap(int* a, int* b);// �־���
void sort_array(int* ary, int size);
void sort_matrix_row();
void print_matrix();
void save_matrix();
void free_matrix();

int main() {
	string command;
	int** matrix = NULL;
	int size = 0;
	while (1) {
		get_command(command);
		if (command == "1") {
			get_size(size);
			matrix = gen_matrix(size);
		}
		else if (command == "2") {
			print_matrix(matrix, size);
		}
		else if (command == "3") {
			sort_matrix_row(matrix, size);
		}
		else if (command == "4") {
			save_matrix(matrix, size);
		}
		else if (command == "0") {
			free_matrix(matrix, size);
			cout << "Exit the program.." << endl;
			exit(104);
		}
		else {
			cout << "Wrong command" << endl << endl;
		}
	}

	return 0;
}

void get_command(string command) {

	cout << "1. Generate matrix" << endl;
	cout << "2. Print matrix" << endl;
	cout << "3. Sort matrix" << endl;
	cout << "4. Save matrix" << endl;
	cout << "0. Exit Program" << endl;
	cout << ">> ";
	cin >> command;
}




void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort_array(int* ary, int size) {
	// ���ʽ� ������ �� Ǯ�ÿ��� �ۼ����� �ʾƵ� ��
}
*/



/*

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void get_num(int& num);
void get_filename(string& filename);
void open_file(ifstream& fin, string filename);
void countSameNum(ifstream& fin, int num, int& count);


void get_num(int &num) {
	cout << "Enter a number.";
	cin >> num;
}

void get_filename(string& filename) {
	cout << "Enter a filename: ";
	cin >> filename;
}

void open_file(ifstream& fin, string filename) {
	fin.open(filename);

	if (fin.is_open())
		ifstream fin(filename);
	else {
		cout << "Error: file open failed";
		exit(0);
	}
}

void countSameNum(ifstream& fin, int num, int& count) {
	int number;
	while (fin >> number) {
		if (num == number)
			count = count + 1;
	}

}

int main() {

	int num, count;
	string filename;
	ifstream fin;
	ofstream fout;

	get_filename(filename);
	get_num(num);
	open_file(fin, filename);
	countSameNum(fin, num, count);

	cout << "Output: " << count << endl;

	fin.close();

	return 0;

}
*/



//�ϳ���ž
/*
#include <cmath>
void hanoi(int n, int from, int by, int to) {
	if (n == 1)                             //����Լ� Ż�� ����(������ ���� ������ 1���� �� �������� ������ ��� �ű�)
		cout << from << " " << to << endl;
	else
	{
		hanoi(n - 1, from, to, by);
		cout << from << " " << to << endl;
		hanoi(n - 1, by, from, to);
	}
}

int main() {
	int n;
	cin >> n;                      // ����ڰ� �Է��� ���� ����
	int k = pow(2, n) - 1;         // �ּ� �̵�Ƚ�� k ���
	cout << k << endl;
	hanoi(n, 1, 2, 3);
}
*/



