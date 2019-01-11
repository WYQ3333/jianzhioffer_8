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
		int minpos = str.size();
		for (i = 0; i < 26; ++i){
			int cur = 0;
			if (array[i] == 1){
				char ch = 'a' + i;
				cur = str.find(ch, 0);
				if (cur < minpos){
					minpos = cur;
				}
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