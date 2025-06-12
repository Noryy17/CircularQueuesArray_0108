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

        //2. Cek Antrian Apakah Kosong
        if (FRONT == -1){
            FRONT == 0; //2.a
            REAR == 0; //2.b

        }
        else {
            // Jika Rear berada di posisi terakhir array, kembali ke awal array
            if (REAR == max -1)
            REAR = 0;
            else
            REAR = REAR + 1;

        }
        queues_array[REAR] = num;
    }

    void remove (){
        //Cek apakah antrian kosong
        if (FRONT == -1){
            cout << "Queues Underflow\n";
            return;
        }
        cout << "\nThe Element deleted from the queue is : " << queues_array[FRONT] << "\n";

        //Cek Jika Antrian hanya memiliki satu element
        if (FRONT == REAR){
            FRONT = -1;
            REAR = -1;
        }
        else{
            //Jika Element yang dihapus berada di posisi terakhir aray,kembali ke awal array
            if (FRONT == max -1)
            FRONT = 0;
            else
            FRONT = FRONT + 1;
        }
    }

    void display (){
        int front_posisition = FRONT;
        int rear_posisition = REAR;

        // Cek Apakah Antrian Kosong
        if (FRONT == -1){
            cout << "Queues is Empty\n";
            return;
        }
        cout << "\n Element in the game are.....\n";

        //Jika front posision iterassi dari dari front hingga rear
        if (front_posisition <= rear_posisition){
            while (front_posisition <= rear_posisition){
                cout << queues_array[front_posisition] << " ";
                front_posisition++;
            }
            cout << endl;
        }
       