#include <bits/stdc++.h>
using namespace std;
// Tên chương trình
#define NAME "template"
// Số test kiểm tra
const int NTEST = 100;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

// Viết lại hàm random để sử dụng cho thuận tiện. Hàm random này sinh ngẫu nhiên số trong phạm vi long long, số sinh ra >= l và <= h.
long long Rand(long long l, long long h) {
    assert(l <= h);
    return l + rd() * 1LL * rd() % (h - l + 1);
}

void Maketest(){
    ofstream cout((NAME".inp"));
    int a = Rand(1, 2e9), b = Rand(1,2e9);
    cout<< a<<" "<<b; 
}

int main()
{
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
        ofstream inp((NAME".inp"));
        // Code phần sinh test ở đây
        inp.close();
        // Nếu dùng Linux thì "./" + Tên chương trình
        system((NAME".exe"));
        system((NAME"_trau.exe"));
        // system(NAME".exe <"NAME".inp >"NAME".ans");
        // system(NAME"_trau.exe < "NAME".inp >"NAME".ans");
        // Nếu dùng linux thì thay fc bằng diff
        if (system(("fc "NAME".out "NAME".ans")) != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}