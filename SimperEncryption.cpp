#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int body()
{
    string a, c, d, e, f, g, m, n, p;
    int b, o;
    int num;
    int h = 0;
    string fuhao[10] = {")", "!", "@", "#", "$", "%", "^", "&", "*", "("};
    string words[53] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", " "};
    string ascii[53] = {"97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "32"};
    int choose;
    cout << "������ģʽ��1Ϊ���ܣ�2Ϊ���ܣ�3Ϊ���ڴ˳���4Ϊ�˳���:";
    cin >> choose;
    if (choose == 1)
    {
        cout << "���������ģ���֧��Ӣ�ģ���֧�ַ��ŵ�֧�ֿո�֧��Ӣ�Ĵ�Сд��:";
        cin.get();
        getline(cin, a);
        for (int i = 0; i < a.length(); ++i)
        {
            b = static_cast<int>(a[i]);
            c = c + to_string(b) + "/";
        }
        for (int j = 0; j < c.length(); ++j)
        {
            d = c[j];
            if (d == "/")
            {
                e = e + "/";
            }
            else
            {
                num = atoi(d.c_str());
                e = e + fuhao[num];
            }
        }
        cout << e << endl;
    }
    else if (choose == 2)
    {
        cout << "����������:";
        cin >> a;
        for (int t1 = 0; t1 < a.length(); ++t1)
        {
            f = a[t1];
            if (f == "/")
            {
                g = g + "/";
            }
            else
            {
                h = 0;
                while (f != fuhao[h])
                {
                    h = h + 1;
                }
                g = g + to_string(h);
            }
        }
        for (int t3 = 0; t3 < g.length(); ++t3)
        {
            m = g[t3];
            if (m == "/")
            {
                o = 0;
                while (n != ascii[o])
                {
                    o = o + 1;
                }
                p = p + words[o];
                t3 = t3 + 1;
                m = g[t3];
                n = "";
            }
            n = n + m;
        }
        cout << p << endl;
    }
    else if (choose == 3)
    {
        cout << "�˳�����T_PLAN����������Ϊc++�������Ǽ������ļ��ܽ��������汾��Ϊ1.0������ʱ4Сʱ" << endl;
    }
    else if (choose == 4)
    {
        cout << "��л����ʹ�ã�goodbye" << endl;
        _sleep(900);
        exit(0);
    }
    else
    {
        cout << "��������" << endl;
        _sleep(800);
    }
    system("pause");
}
int main()
{
    while (1)
    {
        body();
        system("cls");
    }
    return 0;
}