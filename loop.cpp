// #include <iostream>
// using namespace std;

// int main() {

//     int number = 1;

//     while (number <= 5) {
//         cout << number << endl;
//         number++;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
void register(string name, int age,char gender) {
    cout << "Student: " << name << " Age: " << age << ", Gender: " << gender   << endl;
}
int main() {
    register("eyob", 20 , 'M');
    return 0;
}