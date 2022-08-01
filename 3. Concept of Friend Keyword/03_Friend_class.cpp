// Friend Class

#include<iostream>
using namespace std;

class C
{
  private:
    int c;

  public:
    C()
    {
        c = 7;
    }

    friend class D;
};

class D
{
  private:
    int d;

  public:
    D()
    {
        d = 5;
    }

    int addy()
    {
        C obj;
        
        int ans = obj.c + d;   // 7 + 5 = 12
        return ans;
    }
};

int main() {
    D obj;

    cout<< obj.addy();  // 12
    return 0;
}