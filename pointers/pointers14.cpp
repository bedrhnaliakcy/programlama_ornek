#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string ad[10]={};
	string g_ad[10];
	while(1){
	if(strcmp(ad,g_ad)==0){
		cout << g_ad << "  ad� dizilerde var";
		break;
	}
	else cout << g_ad <<" diziler icerisinde bulunmamaktad�r.";
}
	system("PAUSE");
    return 0;
}
