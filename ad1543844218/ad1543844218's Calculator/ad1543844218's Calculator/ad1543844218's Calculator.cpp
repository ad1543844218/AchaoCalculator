#include<iostream>
#include<fstream>
#include<time.h>


using namespace std;
void main()
{
	int a, b, c, d, i, m, n, x;
	float p, q;
	ofstream subject;
	subject.open("subject.txt");
	srand(unsigned(time(NULL)));
	cout << "请输入出题数：" << endl;
	cin >> x;
	for (i = 0; i <= x; i++)    //出题数x 外循环
	{
		a = rand() % 100+1;
		b = rand() % 100+1;
		c = rand() % 5;
		switch (c)
		{
		case 0:cout << a << "+" << b << "=" << endl;
			subject << a << "+" << b << "=" << a + b << endl;

			break;
		case 1:if (a < b)
		{
			d = a;
			a = b;
			b = d;
		}
			   cout << a << "-" << b << "=" << endl;
			   subject << a << "-" << b << "=" << a - b << endl;
			   break;
		case 2:cout << a << "*" << b << "=" << endl;
			subject << a << "*" << b << "=" << a * b << endl;
			break;
		case 3:
			while (b == 0)
			{
				b = rand() % 100;
			}
			while (a / b != (double)a / b||a/b==0)
			{
				a++;
			}
			cout << a << "/" << b << "=" << endl;
			subject << a << "/" << b << "=" << a / b << endl;
			break;
		case 4:
			a = rand() % 100;
			b = rand() % 100;
			m = rand() % 100;
			n = rand() % 100;
			c = rand() % 4;
			while (b == 0)
			{
				b = rand() % 100;
			}
			while (n == 0)
			{
				n = rand() % 100;
			}
			if (a > b)
			{
				d = a;
				a = b;
				b = d;
			}
			if (m > n)
			{
				d = m;
				m = n;
				n = d;
			}
			switch (c)
			{
			case 0:
				while (a/b != (double)a / b||a/b==0)
				{
					a++;
				}
				cout << a << "/" << b << "+" << m << "*" << n << "=" << endl;
				subject << a << "/" << b << "+" << m << "*" << n << "=" << a / b + m * n << endl;
				break;
			case 1:
				p = (float)a / (float)b;
				q = (float)m / (float)n;
				if (p < q)
				{
					d = a;
					a = m;
					m = d;
					d = b;
					b = n;
					n = d;
				}
				while (m / n != (double)m/n||m/n==0)
				{
					m++;
				}
				cout << a << "*" << b << "-" << m << "/" << n <<"="<< endl;
				subject << a << "*" << b << "-" << m << "/" << n <<"="<<a*b-m/n<< endl;
				break;
			case 2:
				while (a / b != (double)a / b||a/b==0)
				{
					a++;
				}
				cout << a << "/" << b << "*" << m << "-" << n << "=" << endl;
				subject << a << "/" << b << "*" << m << "-" << n << "=" << a / b * m - n << endl;
				break;
			case 3:
				a = rand() % 100+1;
				b = rand() % 100+1;
				m = rand() % 100+1;
				n = rand() % 100+1;
				c = rand() % 4;
				while (m == 0)
				{
					m = rand() % 100;
				}
				while (a / b != (double)a / b||a/b==0)
				{
					a++;
				}
				cout << a << "/" << b << "+" << m << "*" << n << "=" << endl;
				subject << a << "/" << b << "+" << m << "*" << n << "=" << a / b + m * n << endl;
				break;
			}
		}
	}

}
