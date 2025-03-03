#include<iostream>

using namespace std;

//Write function count() here.


int count(int arr[], int size) {
    set<int> unique_numbers(arr, arr + size); // ใช้ set เพื่อเก็บค่าที่ไม่ซ้ำกัน
    return unique_numbers.size(); // คืนค่าจำนวนสมาชิกที่ไม่ซ้ำกัน
}


int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
