#include <iostream>
#include <cmath>


using namespace std;

/*제곱하는 square
int square(int i) {
	return i * i;
}

int main() {
	int x;
	x = 5;
	cout << square(x) << endl; // square 함수 사용
}
*/

//여러 연산들
/*
int main() {
	double value;
	value = 5;
	cout << sqrt(value) << endl; //제곱근
	cout << exp(value) << endl; //e의 지수 값 연산
	cout << log10(value) << endl; //로그연산(밑:10)
	cout << cos(value) << endl; //cosine
	return 0;
}
*/


//default augments의 사용
/*
void applePrice(int a = 1000) {
	cout << "Price of an apple is " << a << endl;
}
// default augment 중요!
int main() {
	applePrice(1500);
	applePrice(500);
	applePrice(1000);
	applePrice(); // default augments
	return 0;
}
*/


//4개의 함수를 사용하기
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

//생년월일 default 값 사용
/*
int print_d0b(int year = 1900, int month = 1, int day = 1) {
	cout << "생년월일은 " << year << "년 " << month << "월 " << day << "일 입니다.";
	return 0;
}

int main() {
	int y;
	int m;
	int d;
	print_d0b();
	cout << endl;

	cout << "year 입력 : ";
	cin >> y;
	cout << "month 입력 : ";
	cin >> m;
	cout << "day 입력 : ";
	cin >> d;
}
*/

//cmath의 활용
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

// call by value와 call  by reference
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
	cout << "x 입력 : ";
	cin >> x;
	cout << endl << "y 입력 : ";
	cin >> y;

	cout << x << " " << y << endl;
	swap_call_by_value(x,y);
	cout << x << " " << y << endl;
	swap_call_by_reference(x, y);
	cout << x << " " << y << endl;


}
*/

//if 문으로 성적 산출 프로그램
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

//while문 사용한 2 거듭제곱
/*
#include <iomanip>
int main() {
	int num = 1;
	int count = 1;
	cout.imbue(locale("")); // 세 자리(1,000)마다 쉼표 찍기위함.
	while (count <= 20) {
		num *= 2;
		cout << count << '\t' << setw(10) << num << endl;
		count++;
	}
	return 0;
}
*/

// 단위행렬 10*10
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
		column = 1;            // column = 1 로 초기화 시켜주기...
	}
	return 0;
}
*/

// for 문으로 위에거 똑같이 만들기
/*
int main() {
	
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i == j)                       // i == j 주의!!!!!!!
				cout << 1;
			else
				cout << 0;
		}
		cout << endl;
	}
	return 0;
}
*/




// 10 이하 자연수 출력, 틀리면 while문으로 계속
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


// n * m 행렬 만들기
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

// 홀짝 판별 5번 제한
/*
int main() {
	
	for (int i = 1; i <= 5; i++) {
		int a;
		cout << i << "번째 정수 : ";
		cin >> a;

		if (a % 2 == 0)
			cout << a << "은(는) 짝수 입니다." << endl;
		else
			cout << a << "은(는) 홀수 입니다." << endl;
	}
}
*/
// 1부터 n까지 합 구하기
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

// 구구단 단수 입력
/*
int main() {

	while (true) {

		int a;
		cout << "단 수를 입력하세요 : ";
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
			cout << "1 부터 9까지의 정수를 입력해 주세요" << endl;
		}
		cout << endl;
	}

	cout << "종료합니다.";

}
*/

//재귀함수, 조건부
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

//string 사용한 기능들
/*
#include <string> //string객체 사용
#include <fstream> //ifstream ofstream
#include <iomanip> // setw

using namespace std;
int main() {
	string s1 = "mouse";
	cout << s1 << endl;
	cout << s1.length() << ", " << size(s1) << endl << endl; //s1의 length, size 출력
	
	cout << s1.empty() << endl;
	s1.clear();// s1 = "";
	cout << s1.empty() << endl;
	
	s1 = "Good";
	s1 = s1 + "-bye";
	// Good-bye (string)
	// 01234567 (index)
	cout << s1 << endl;
	cout << s1[4] << ", " << s1.at(4) << endl; // 두가지 방법으로 index 4 값 출력
	cout << bool(s1 == "Good-bye") << endl; // s1과 Good-bye 비교 (bool 값 출력)
	cout << bool(s1 == "good-bye") << endl; // s1과 good-bye 비교 (bool 값 출력)
	cout << bool(s1 >= "z") << endl << endl; // s1이 “z”보다 크거나 같은지 비교 (bool 값 출력)
	cout << s1.substr(5,3) << endl; // s1의 index 5부터 3글자 출력
	cout << s1.substr(2,2) << endl; // s1의 index 2부터 2글자 출력
	cout << s1.find("od") << endl; // od 위치 출력
	cout << s1.find("od", 5) << endl;
	int od_index = s1.find("od");
	cout << s1.find("od", od_index + 2);
	cout << (s1.find("korea") == string::npos) << endl;
	return 0;
}
*/


// file 입출력 기본
/*
#include <string> //string객체 사용
#include <fstream> //ifstream ofstream
#include <iomanip> // setw
using namespace std;
int main() {
	ofstream fout; // processor->file 저장
	fout.open("example.txt"); // example.txt 열기
	string s2 = "Objective Oriented Programming";
	fout << s2 << endl;
	fout << "Random Variables" << endl;
	fout << "Linear Algebra" << endl;
	fout.close();// fout 닫기

	ifstream fin;
	string s1;
	fin.open("example.txt"); // example.txt 열기
	if (!fin) {
		cout << "Error, no such file exists" << endl;
		exit(100);
	}
	
	while (getline(fin, s1)) { // line by line으로 example.txt에서 읽어와서 출력
		cout << s1 << endl;
	}
	*/


	/*
	//한번에 실행되지 않기 때문에 주석처리 해놓음
	while (true) { // 띄어쓰기 단위로 example.txt에서 읽어와서 출력
		fin >> s1;
		if (!fin)
			break;
		cout << s1 << endl;

		fin.close();
	}
	*/		/*
}
*/

// 출력값 길이 설정, unsetf, ios 불러오기
/*
int main() {
	double d1 = 1.23456789;
	cout << d1 << endl;
	cout.width(10); // 출력값 길이 10로 지정
	cout.precision(3); // 주요 자리수 3자리만 출력
	cout << d1 << endl;
	char ch1;
	char ch2;
	// ch1, ch2 : enter “ z”. ( space + z )
	cin >> ch1;
	cout << "(" << ch1 << ")" << endl;
	cin.ignore(); // enter가 다음 cin으로 들어가지 않도록 해줌
	cin.unsetf(ios::skipws); // space도 입력으로 생각하게 함 
	cin >> ch2;
	cout << "(" << ch2 << ")" << endl;
	return 0;
}
*/

//집주소 string
/*
#include <string>
int main() {
	string city, area, building, street;
	cout << "시 : ";
	cin >> city;


	cout << "구 : ";
	cin >> area;


	cout << "로 : ";
	cin >> street;


	cout << "건물명 : ";
	cin >> building;
	cout << endl;

	string adress = city + area + street + building;
	cout << "집 주소 : " << adress;
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


// func의 포인터 가져오기
/*
int sum(int x, int y) { return x + y; }
int mult(int x, int y) { return x * y; }
// 함수 func의 포인터와 파라미터 x, y를 받아와서 함수 func의 실행값을 리턴해주는 함수
int evaluate(int (*func)(int, int), int x, int y)
{
	return func(x, y);
}
int main() {
	int(*func)(int, int);
	func = sum; // sum 함수 주소값 대입
	cout << func(10, 20) << endl;
	func = mult; // mult 함수 주소값 대입
	cout << func(10, 20) << endl;
	cout << evaluate(&sum, 100, 200) << endl;
	cout << evaluate(&mult, 100, 200) << endl;
	return 0;
}
*/

// vector의 활용
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
	// 인덱스 0 1 2
	vector<int> vec{ 10, 20, 30 };
	print(vec);
	vec[0] = 100; // vector 인덱스 0번에 직접 대입
	vec.at(1) = 200; // vector의 at() 함수 이용	
	print(vec);
	vec.push_back(400); // vector의 push_back() 함수 이용
	print(vec);
	vec.pop_back(); // vector의 pop_back() 함수 이용
	print(vec);
	cout << endl;
	// 범위기반 for문을 이용한 vector 원소값 바꾸기 (슬라이드 p.26 참고)
	for (int &elem : vec) {
		cout << "enter an element of vector v: ";
		cin >> elem;
	}
	cout << endl << "[ vector v ]" << endl;
	// 범위기반 for문을 이용한 화면 출력하기 (슬라이드 p.26 참고)
	for (int elem : vec)
		cout << elem << "\t";
	cout << endl;
	return 0;
}
*/

// 벡터 사용하기
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
			return false;// num을 i로 나눈 나머지가 0이면 false 리턴
	}
	return true;
}
vector<int> primes(int lower, int upper) {
	vector<int> v;
	for (int i = lower; i <= upper; i++) {
		if (is_prime(i) == true)
			v.push_back(i);// 소수이면(is_prime이 참이면) 뒤에 push
	}
	return v;
}
int main() {
	int lower = 10, upper = 100;
	vector <int> vec = primes(lower, upper); // 벡터 vec 선언 및 primes로 대입
	for (int elem : vec)
		cout << elem << setw(5);
	cout << endl;
	return 0;
}
*/

// 제곱 구하는 함수 포인터
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
	cout << "제곱값> " << a;
	return 0;
}
*/

//pointer로 string값 바꾸기
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
	cout << "기본값 출력> " << str << endl;
	change(&str);
	cout << "변환된 값 출력> " << str << endl;
	return 0;
}
*/


//vector 역순 만들기
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
	

	cout << "기본 Vector 값:" << endl;
	for (int i = 0; i < vec.size(); i++) 
		cout << " " << vec[i];
	cout << endl;

	reverse(vec);

	cout << "함수 실행 후 Vector 값:" << endl;
	for (int i = 0; i < vec.size(); i++) 
		cout << " " << vec[i];
	


	return 0;

}
*/

// 최고 점수 출력 프로그램
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



//using Matrix 사용법
/*
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
using Matrix = vector<vector<int>>;

// 배열의 경우 주소값(시작주소, 끝주소)을 전달
void print(int* begin, int* end) {
	for (int* curr = begin; curr < end; curr++) //수업시간에 배운 주소값을 기준으로 for문 작성
		cout << setw(4) << *curr;
	// while문 구현 부분 - 수업시간에 배운 주소값을 기준으로 while문 작성
	// int* curr = begin;
	// while (curr < end) {
	// cout << setw(4) << *curr;
	// curr++;
	// }
	cout << endl;
}
// (+, -) for pointer: 주소값을 증가/감소 (다음 변수 위치)
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


// 소수 구하기
/*

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
//소수 : 1과 자기자신을 제외하고는 약수가 없는 1보다 큰 정수
bool is_prime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false; // n을 i로 나눈 나머지가 0이면 false를 리턴
		return true;
}
vector<int> primes(int low, int high) {
	vector<int> result;
	for (int i = low; i <= high; i++)
		if (is_prime(i))
			result.push_back(i);// 소수이면 (is_prime이 참이면) 뒤에 push
		return result;
}
void print(const vector<int>& v) {
	for (int elem : v) //vector index가 아닌 원소를 이용한 for문
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

// 정적/ 동적 배열

/*
#include <iostream>
#include <vector>
using namespace std;
//정적 배열(static array):프로그램 실행중 크기가 고정되어 변경 불가
//동적 배열(dynamic array): 프로그램 실행중(run time) 할당/해제가 가능
int main() {
	const int size = 3;
	int list[size] = { 10, 20, 30 };
	int length = 3;
	cin >> length; // 키보드로부터 배열의 크기를 입력받음
	int* list2 = new int[length]; //동적 배열 선언
		// double* list2 = new double[length]
	int* begin = list2;
	int* end = list2 + length;
	for (int* curr = begin; curr != end; curr++)
		cin >> *curr;
	for (int* curr = begin; curr != end; curr++)
		cout << *curr << '\t';
	cout << endl;
	delete[] list2; //할당 해제
	return 0;
}
*/


// 숫자 동적으로 할당받고 평균 구하는 프로그램
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


// 동적 배열
/*
#include <iostream>
#include <vector>
using namespace std;
void print(int** m, int nRow, int nCol) {
	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j < nCol; j++)
			cout << m[i][j] << '\t';//2중 for문과 index를 이용하여 배열 원소 출력 - 구분자 : '\t'
		cout << endl;
	}
}
int main() {
	int nRow = 2, nCol = 2;
	int** matrix2;
	matrix2 = new int *[nRow]; // 동적배열 선언(행기준)
		for (int i = 0; i < nRow; i++)
			matrix2[i] = new int [nCol]; // 동적배열 선언(열기준)
			matrix2[0][0] = 1; matrix2[0][1] = 2;
	matrix2[1][0] = 3; matrix2[1][1] = 4;
	print(matrix2, nRow, nCol);
	for (int i = 0; i < nRow; i++)
		delete[] matrix2[i];
	delete[] matrix2;
	return 0;
}

*/

//2차원 벡터
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

// 단어 찾기
/*
#include <iostream>
#include <string>

using namespace std;

int main() {
	string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향사랑";
	string input;

	cout << "키워드 : ";
	cin >> input;
	cout << "검색결과 : ";

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
			if (j % 10 == 0)                     // 10일때 줄바꿈!!!
				cout << endl;
		}
	}
	cout << endl;
}
*/


// 중간 1번
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
void swap(int* a, int* b);// 주어짐
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
	// 보너스 문제를 안 풀시에는 작성하지 않아도 됨
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



//하노이탑
/*
#include <cmath>
void hanoi(int n, int from, int by, int to) {
	if (n == 1)                             //재귀함수 탈출 조건(마지막 남은 원판이 1개일 때 목적지로 마지막 기둥 옮김)
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
	cin >> n;                      // 사용자가 입력할 원판 갯수
	int k = pow(2, n) - 1;         // 최소 이동횟수 k 계산
	cout << k << endl;
	hanoi(n, 1, 2, 3);
}
*/



