//week01-2.cpp
#include <iostream>

int main(){
	int N;
	std::cin>> N;///c++輸入資料 標準::輸入 送到右邊N
	int b = N, ans = 0;
	while(N>0){
		ans = ans*10 + N%10;
		N = N /10 ;
	}
	///c++ 輸入資料，將右邊整數送左邊輸出
	std::cout << b << ans << b+ans;
	///漏了+漏了=漏了跳行
	///std::cout << b << "+"<<ans<<"="<<b+ans<<std::endl;
	///std::cout << b << "+"<<ans<<"="<<b+ans<<"\n";
	///printf("%d+%d=%d\n",b,ans,b+ans);
	}
