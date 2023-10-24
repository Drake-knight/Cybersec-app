#include <iostream>
#include <string>
using namespace std;

string decrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
            result += char((int(text[i] - s - 65 + 26) % 26) + 65);
        else if (islower(text[i]))
            result += char((int(text[i] - s - 97 + 26) % 26) + 97);
        else if (text[i] == ' ')
            result += ' ';
        else
            result += text[i];
    }

    return result;
}

int main()
{
    string encrypt = "Nv'iv ef jkirexvij kf cfmv Pfl befn kyv ilcvj reu jf uf Z R wlcc tfddzkdvek'j nyrk Z'd kyzebzex fw Pfl nflcue'k xvk kyzj wifd rep fkyvi xlp Z aljk nrek kf kvcc pfl yfn Z'd wvvczex Xfkkr drbv pfl leuvijkreu Evmvi xfeer xzmv pfl lg, evmvi xfeer cvk pfl ufne Evmvi xfeer ile rifleu reu uvjvik pfl Evmvi xfeer drbv pfl tip, evmvi xfeer jrp xffuspv Evmvi xfeer kvcc r czv reu ylik pfl Nv'mv befne vrty fkyvi wfi jf cfex Pfli yvrik'j svve rtyzex slk pfl'iv kff jyp kf jrp zk Zejzuv nv sfky befn nyrk'j svve xfzex fe Nv befn kyv xrdv reu nv'iv xfeer gcrp zk Reu zw pfl rjb dv yfn Z'd wvvczex Ufe'k kvcc dv pfl'iv kff sczeu kf jvv Evmvi xfeer xzmv pfl lg, evmvi xfeer cvk pfl ufne Evmvi xfeer ile rifleu reu uvjvik pfl Evmvi xfeer drbv pfl tip, evmvi xfeer jrp xffuspv Evmvi xfeer kvcc r czv reu ylik pfl Evmvi xfeer xzmv pfl lg, evmvi xfeer cvk pfl ufne Evmvi xfeer ile rifleu reu uvjvik pfl Evmvi xfeer drbv pfl tip, evmvi xfeer jrp xffuspv Evmvi xfeer kvcc r czv reu ylik pfl Nv'mv befne vrty fkyvi wfi jf cfex Pfli yvrik'j svve rtyzex slk pfl'iv kff jyp kf jrp zk Zejzuv nv sfky befn nyrk'j svve xfzex fe Nv befn kyv xrdv reu nv'iv xfeer gcrp zk Z aljk nrek kf kvcc pfl yfn Z'd wvvczex Xfkkr drbv pfl leuvijkreu Evmvi xfeer xzmv pfl lg, evmvi xfeer cvk pfl ufne Evmvi xfeer ile rifleu reu uvjvik pfl Evmvi xfeer drbv pfl tip, evmvi xfeer jrp xffuspv Evmvi xfeer kvcc r czv reu ylik pfl";

    cout << "Encrypted Text: " << encrypt << endl;

    for (int s = 0; s < 26; s++)
    {
        cout << "Shift " << s << ": " << decrypt(encrypt, s) << endl
             << endl;
    }

    return 0;
}
