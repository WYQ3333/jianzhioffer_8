#include<iostream>

#include<string>

using namespace std;

class Solution {
public:
	int FirstNotRepeatingChar(string str) {
		int array[26] = { 0 };
		int i = 0;
		for (i = 0; i < str.size(); ++i){
			int temp = (str[i] - 'a');
			if (array[temp]>1){
				continue;
			}
			++array[temp];
		}
		char c;
		for (i = 0; i < 26; ++i){
			if (array[i] == 1){
				c = array[i];
			}
		}
		int result = str.find(c, 0);
		return result;
	}
};

int main(){
	Solution s;
	cout<<s.FirstNotRepeatingChar("hello world")<<endl;
	system("pause");
	return 0;
}