#include <iostream>
using namespace std;

class Queues {
    private:
    static const int max = 5;
    int FRONT,REAR;
    int queues_array[15];

    public:
    Queues(){
        FRONT = -1;
        REAR = -1;
    }

    void insert (){
        int num;
        cout << "Enter a number :";
        cin >> num;
        cout << endl;

        //1.Cek Apakah Antrian Penuh
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)){
            cout << "\nQueues Overflow\n"; //1.0
            return;
        }
