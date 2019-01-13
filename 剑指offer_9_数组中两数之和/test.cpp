#include<iostream>
using namespace std;
#include<vector>


//输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，
//如果有多对数字的和等于S，输出两个数的乘积最小的

class Solution1 {
public:
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
		vector<int> result;
		int i = 0;
		int j = 0;
		for (i = 1; i < array.size(); ++i){
			for (j = 0; j < i; ++j){
				if (sum == (array[i] + array[j])){
					result.push_back(array[j]);
					result.push_back(array[i]);
					return result;
				}
			}
		}
	}
};





int main(){
	vector<int> array = { 2, 3, 3, 4, 4, 4, 56, 7 };
	vector<int> arraynum = { 0, 0 };
	int sum = 8;
	Solution1 s1;
	arraynum = s1.FindNumbersWithSum(array, sum);
	int i = 0;
	for (i = 0; i < arraynum.size(); ++i){
		cout << arraynum[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}