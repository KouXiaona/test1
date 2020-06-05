#include<iostream>
using namespace std;

void test1(){
	int x = 0; int y = 0; int k = 0;
	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
	{
		k++;
		cout << k << endl;

	}
}

void test2(){
	 printf("%s , %5.3s\n", "computer", "computer"); 
}



void test3()
{
	int n; int p=0;
	while (cin>>n){
		int a[100];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		for (int j = 0; j < n; j++)
		{
				
			if (a[j] < a[j + 1]){
				continue;
			}
			else
				p++;

			if (a[j] > a[j + 1]){
				continue;
			}
			else
				p++;

			
		}
		cout << p << endl;

	}
}



void test4()
{
	int n = 0,m=0;
	int h = 0;
	while (cin >> n){
		int k = 0;
		int a[100];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			k++;
		}
		k = (k + 1) / 2;//数组的一半
		//cout << k << endl;
		for (int j = 0; j < n; j++)
		{
			m = 0;
			for (int p = 1; p <= n - j; p++)
			{
				if (a[j] == a[j + p])
				{
					m = m + 1;
					if (m >= k)
					{
						//cout << a[j] << endl;
						h = a[j];
						break;

					}
					else
						continue;
				}
				else
					continue;
				
				
				break;
			}
			break;
		}
		if (m >= k)
		{
			cout << h << endl;
		

		}
		else if (m < k)
			cout << 0 << endl;
		
	}
}


int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	system("pause");
	return 0;
}