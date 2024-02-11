#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TOT_FRAMES 500
#define FRAMES_SEND 10

class sel_repeat {
private:
    int fr_send_at_instance, sw, rw;
    int arr[TOT_FRAMES], send[FRAMES_SEND], rcvd[FRAMES_SEND];
    char rcvd_ack[FRAMES_SEND];

public:
    void input() {
        int n, m, i, t = 0;
        std::cout << "Enter the no. of bits for the sequence no. : ";
        std::cin >> n;
        m = pow(2, n);
        fr_send_at_instance =(m / 2);
        for(i = 0; i < TOT_FRAMES; i++) {
            arr[i] = t;
            t =(t + 1) % m;
        }
        for(i = 0; i < fr_send_at_instance; i++) {
            send[i] = arr[i];
            rcvd[i] = arr[i];
            rcvd_ack[i] = 'n';
        }
        rw = sw = fr_send_at_instance;
        sender(m);
    }

    void sender(int m) {
        for(int i = 0; i < fr_send_at_instance; i++)
            if(rcvd_ack[i] == 'n') std::cout << "SENDER : Frame " << send[i] << " is sent\n";
        receiver(m);
    }

    void receiver(int m) {
        time_t t;
        int f, j, f1, a1;
        char ch;
        srand((unsigned)time(&t));
        for(int i = 0; i < fr_send_at_instance; i++) {
            if(rcvd_ack[i] == 'n') {
                f = rand() % 10;        // if f=5 frame is discarded for some reason
                if(f != 5) {            // else frame is correctly recieved
                    for(int j = 0; j < fr_send_at_instance; j++)
                        if(rcvd[j] == send[i]) {
                            std::cout << "reciever:Frame" << rcvd[j] << "recieved correctly\n";
                            rcvd[j] = arr[rw];
                            rw =(rw + 1) % m;
                            break;
                        }
                    int j;
                    if(j == fr_send_at_instance)
                        std::cout << "reciever:Duplicate frame" << send[i] << "discarded\n";
                    a1 = rand() % 5;    // if al==3 then ack is lost
                    if(a1 == 3) {       // else recieved
                        std::cout << "(acknowledgement " << send[i] << " lost)\n";
                        std::cout << "(sender timeouts-->Resend the frame)\n";
                        rcvd_ack[i] = 'n';
                    } else {
                        std::cout << "(acknowledgement " << send[i] << " recieved)\n";
                        rcvd_ack[i] = 'p';
                    }
                } else {
                    int ld = rand() % 2;// if = 0 then frame damaged
                    if(ld == 0) {       // else frame lost
                        std::cout << "RECEIVER : Frame " << send[i] << " is damaged\n";
                        std::cout << "RECEIVER : Negative Acknowledgement " << send[i] << " sent\n";
                    } else {
                        std::cout << "RECEIVER : Frame " << send[i] << " is lost\n";
                        std::cout << "(SENDER TIMEOUTS-->RESEND THE FRAME)\n";
                    }
                    rcvd_ack[i] = 'n';
                }
            }
        }
        for(int j = 0; j < fr_send_at_instance; j++)
            if(rcvd_ack[j] == 'n') break;
        int i = 0;
        for(int k = j; k < fr_send_at_instance; k++) {
            send[i] = send[k];
            if(rcvd_ack[k] == 'n') rcvd_ack[i] = 'n';
            else rcvd_ack[i] = 'p';
            i++;
        }
        if(i != fr_send_at_instance)
            for(int k = i; k < fr_send_at_instance; k++) {
                send[k] = arr[sw];
                sw =(sw + 1) % m;
                rcvd_ack[k] = 'n';
            }
        std::cout << "Want to continue [y/n] ";
        std::cin >> ch;
        std::cout << "\n";
        if(ch == 'y') sender(m);
        else exit(0);
    }
};

int main() {
    sel_repeat sr;
    sr.input();
}