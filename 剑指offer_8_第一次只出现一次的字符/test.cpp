#include<iostream>

#include<string>

using namespace std;

class Solution {
public:
	int FirstNotRepeatingChar(string str) {
		int array[26] = { 0 };
		int i = 0;
		int temp = 0;
		for (i = 0; i < str.size(); ++i){
			temp = str[i] - 'a';
			if (array[temp] <= 1){
				++array[temp];
			}
		}
		int minpos = 0;
		for (i = 0; i < 26; ++i){
			if (array[i] == 1){
				int temp = str.find('a' + array[i], 0);
			}
			if (temp < minpos){
				minpos = temp;
			}
		}
		return minpos;
	}
};

int main(){
	Solution s;
	cout<<s.FirstNotRepeatingChar("hhello world")<<endl;
	system("pause");
	return 0;
}