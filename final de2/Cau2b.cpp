#include <iostream>
using namespace std;

// Lớp trừu tượng
class PTIT {
    public:
    void displayinfo() {
        cout << "I love PTIT" << endl;
    }
};
 // Lớp con kế thừa từ lớp trừu tượng
 class CAT : public PTIT {
    public:
    void show(){
        cout << "I love Cat" << endl;
    }
 

 void display(){
    cout << "I love Dog" << endl;
 }
 };
 
 int main (){
    // Không thể tạo đói tượng từ lớp tựu trường
    // PTIT*ptit = new PTIT(); // Lỗi

    CAT cat;
    cat.show();
    cat.display();
    cat.displayinfo();

    return 0;
 }