//Ħ˹���뷭���� ս��һά���߲ʵ� 2024.9.15

#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;
void input(vector<char>& ch);
void inpup(vector<string>& ch);
void inpus(string& str);
void show1(vector<string>& arr);
void show(vector<char>& arr);

int main()
{
	vector<char> sp;    //Ħ˹���ո�  Spacekey
	string sl;          //Ħ˹��б�� /��Slash
	vector <string> cd; //Ӣ��-->Ħ˹����ĸ����

	int op;
	while (1)
	{
		cout << "*****************************************" <<endl;
		cout << "��Ӧ����: \n1��Ħ��˹����->Ӣ��(�ո����)\n2��Ħ��˹����->Ӣ��( / ����)\n3��Ӣ��->Ī��˹���룺\n";
		cout << "*****************************************" <<endl;
		cout << "�������Ӧ��������:" << endl;
		cin >> op;
		system("pause");//�����������������ʧ
		system("cls");//��������ֹ ���˵���������
		if (op == 1)
			input(sp);
		else if (op == 2)
		{
			cout << "��������Ҫת���ĵ���(ÿ����/����)" << endl;
			cin >> sl;
			inpus(sl);  //�������뺯����б��/ ��
			cout << endl;
		}
		else if (op == 3)
			inpup(cd);

		else
		{
			cout << "��ָ���������1��2��3��ѡ��" << endl;
			break;
		}
		sl.clear();
		cd.clear();
	}
	return 0;
}


void input(vector<char>& ch)   //���뺯�����ո�
{
	cout << "������Ħ��˹����(���� ��end������ ��ÿ�ε������ÿո����):\n";
	string str = "";
	int bol = 0;
	string strend = "end";
	while (str != strend)
	{
		cin >> str;
		if (str == ".-")
			ch.push_back('a');
		else if (str == "-...")
			ch.push_back('b');
		else if (str == "-.-.")
			ch.push_back('c');
		else if (str == "-..")
			ch.push_back('d');
		else if (str == ".")
			ch.push_back('e');
		else if (str == "..-.")
			ch.push_back('f');
		else if (str == "--.")
			ch.push_back('g');
		else if (str == "....")
			ch.push_back('h');
		else if (str == "..")
			ch.push_back('i');
		else if (str == ".---")
			ch.push_back('j');
		else if (str == "-.-")
			ch.push_back('k');
		else if (str == ".-..")
			ch.push_back('l');
		else if (str == "--")
			ch.push_back('m');
		else if (str == "-.")
			ch.push_back('n');
		else if (str == "---")
			ch.push_back('o');
		else if (str == ".--.")
			ch.push_back('p');
		else if (str == "--.-")
			ch.push_back('q');
		else if (str == ".-.")
			ch.push_back('r');
		else if (str == "...")
			ch.push_back('s');
		else if (str == "-")
			ch.push_back('t');
		else if (str == "..-")
			ch.push_back('u');
		else if (str == "...-")
			ch.push_back('v');
		else if (str == ".--")
			ch.push_back('w');
		else if (str == "-..-")
			ch.push_back('x');
		else if (str == "-.--")
			ch.push_back('y');
		else if (str == "--..")
			ch.push_back('z');
		else if (str == ".----")
			ch.push_back('1');
		else if (str == "..---")
			ch.push_back('2');
		else if (str == "...--")
			ch.push_back('3');
		else if (str == "....-")
			ch.push_back('4');
		else if (str == ".....")
			ch.push_back('5');
		else if (str == "-....")
			ch.push_back('6');
		else if (str == "--...")
			ch.push_back('7');
		else if (str == "---..")
			ch.push_back('8');
		else if (str == "----.")
			ch.push_back('9');
		else if (str == "-----")
			ch.push_back('0');
		else if (str == "..--..")
			ch.push_back('?');
		else if (str == "-..-.")
			ch.push_back('/');
		else if (str == "-....-")
			ch.push_back('-');
		else if (str == ".-.-.-")
			ch.push_back('.');
		else if (str == "-.--.-")
		{
			if (bol == 0)
			{
				ch.push_back('(');
				bol = 1;
			}
			else
			{
				ch.push_back(')');
				bol = 0;
			}
		}

		if (str == strend)
			show(ch);
	}
}

void inpup(vector<string>& ch)  //���뺯�� ��Ӣ��-->Ħ˹��
{
	string temp;
	cout << "��������Ҫת��������(Ӣ��):\n";
	cin >> temp;
	char tem[sizeof(temp)];
	memset(tem, '0', sizeof(tem));
	strcpy_s(tem, temp.c_str());
	for (int i = 0; i < temp.length(); i++)
	{
		if (tem[i] == 'a')
			ch.push_back(".-");
		else if (tem[i] == 'b')
			ch.push_back("-...");
		else if (tem[i] == 'c')
			ch.push_back("-.-.");
		else if (tem[i] == 'd')
			ch.push_back("-..");
		else if (tem[i] == 'e')
			ch.push_back(".");
		else if (tem[i] == 'f')
			ch.push_back("..-.");
		else if (tem[i] == 'g')
			ch.push_back("--.");
		else if (tem[i] == 'h')
			ch.push_back("....");
		else if (tem[i] == 'i')
			ch.push_back("..");
		else if (tem[i] == 'j')
			ch.push_back(".---");
		else if (tem[i] == 'k')
			ch.push_back("-.-");
		else if (tem[i] == 'l')
			ch.push_back(".-..");
		else if (tem[i] == 'm')
			ch.push_back("--");
		else if (tem[i] == 'n')
			ch.push_back("-.");
		else if (tem[i] == 'o')
			ch.push_back("---");
		else if (tem[i] == 'p')
			ch.push_back(".--.");
		else if (tem[i] == 'q')
			ch.push_back("--.-");
		else if (tem[i] == 'r')
			ch.push_back(".-.");
		else if (tem[i] == 's')
			ch.push_back("...");
		else if (tem[i] == 't')
			ch.push_back("-");
		else if (tem[i] == 'u')
			ch.push_back("..-");
		else if (tem[i] == 'v')
			ch.push_back("...-");
		else if (tem[i] == 'w')
			ch.push_back(".--");
		else if (tem[i] == 'x')
			ch.push_back("-..-");
		else if (tem[i] == 'y')
			ch.push_back("-.--");
		else if (tem[i] == 'z')
			ch.push_back("--..");
		else if (tem[i] == '1')
			ch.push_back(".----");
		else if (tem[i] == '2')
			ch.push_back("..---");
		else if (tem[i] == '3')
			ch.push_back("...--");
		else if (tem[i] == '4')
			ch.push_back("....-");
		else if (tem[i] == '5')
			ch.push_back(".....");
		else if (tem[i] == '6')
			ch.push_back("-....");
		else if (tem[i] == '7')
			ch.push_back("--...");
		else if (tem[i] == '8')
			ch.push_back("---..");
		else if (tem[i] == '9')
			ch.push_back("----.");
		else if (tem[i] == '0')
			ch.push_back("-----");
		else if (tem[i] == '?')
			ch.push_back("..--..");
		else if (tem[i] == '/')
			ch.push_back("-..-.");
		else if (tem[i] == '-')
			ch.push_back("-....-");
		else if (tem[i] == '.')
			ch.push_back(".-.-.-");
		else if (tem[i] == '(' || tem[i] == ')')
			ch.push_back("-.--.-");
		else
			ch.push_back("  ���ô��ַ��޷�ת����  ");
	}
	show1(ch);
}

void show1(vector<string>& arr)//��Ӣ��-->Ħ˹ ��show��ʾ������
{
	vector<string>::iterator it;
	for (it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << '/';
	}
	cout << endl;
}

void show(vector<char>& arr)    //���ո� ��show��ʾ������
{
	if (arr.empty()) cout << "����������ȷ���롿\n";
	vector<char>::iterator it;
	for (it = arr.begin(); it < arr.end(); it++)  //�ո��������õ���������
	{
		cout << *it;            //����ָ�����
	}
	cout << endl;
}

void inpus(string& str)  //���뺯���� б��/ ��
{
	unsigned int s1 = 0, s2 = 0, index = 0;
	char x = 0;
	int bol = 0;
	unsigned int end = str.size();
	string temp = "";
	while (index < end)
	{
		s1 = index;
		while (index < end && str[index] != '/')
		{
			index++;
		}
		s2 = index;
		temp = str.substr(s1, s2 - s1);
		if (temp == ".-")
			cout << 'a';
		else if (temp == "-...")
			cout << 'b';
		else if (temp == "-.-.")
			cout << 'c';
		else if (temp == "-..")
			cout << 'd';
		else if (temp == ".")
			cout << 'e';
		else if (temp == "..-.")
			cout << 'f';
		else if (temp == "--.")
			cout << 'g';
		else if (temp == "....")
			cout << 'h';
		else if (temp == "..")
			cout << 'i';
		else if (temp == ".---")
			cout << 'j';
		else if (temp == "-.-")
			cout << 'k';
		else if (temp == ".-..")
			cout << 'l';
		else if (temp == "--")
			cout << 'm';
		else if (temp == "-.")
			cout << 'n';
		else if (temp == "---")
			cout << 'o';
		else if (temp == ".--.")
			cout << 'p';
		else if (temp == "--.-")
			cout << 'q';
		else if (temp == ".-.")
			cout << 'r';
		else if (temp == "...")
			cout << 's';
		else if (temp == "-")
			cout << 't';
		else if (temp == "..-")
			cout << 'u';
		else if (temp == "...-")
			cout << 'v';
		else if (temp == ".--")
			cout << 'w';
		else if (temp == "-..-")
			cout << 'x';
		else if (temp == "-.--")
			cout << 'y';
		else if (temp == "--..")
			cout << 'z';
		else if (temp == ".----")
			cout << '1';
		else if (temp == "..---")
			cout << '2';
		else if (temp == "...--")
			cout << '3';
		else if (temp == "....-")
			cout << '4';
		else if (temp == ".....")
			cout << '5';
		else if (temp == "-....")
			cout << '6';
		else if (temp == "--...")
			cout << '7';
		else if (temp == "---..")
			cout << '8';
		else if (temp == "----.")
			cout << '9';
		else if (temp == "-----")
			cout << '0';
		else if (temp == "..--..")
			cout << '?';
		else if (temp == "-..-.")
			cout << '/';
		else if (temp == "-....-")
			cout << '-';
		else if (temp == ".-.-.-")
			cout << '.';
		else if (temp == "-.--.-")
		{
			if (bol == 0)
			{
				cout << '(';
				bol = 1;
			}
			else
			{
				cout << ')';
				bol = 0;
			}
		}
		else
		{
			cout << " ���˴��������󣡡�  ";
		}
		index++;
	}
}