#include <iostream>
#include <math.h>

class sender {
public:
    int size, sf, sn, t, a[500], w, ff;

    sender() {}           // default constructor
    
    sender(int x, int aa) { // parameterised constructor 
        ff = aa;                                  // ff and aa = total no of frames
        size = pow(2, x) - 1;                     // size of sliding window
        sn = 0;                                   // next frame to sent
        sf = 0;                                   // first outstanding frame
        w = 0;                                    // count of frames
        t = 5;                                    // timer(decremented by 1 after a frame in sent)
        for(int i = 0; i < aa; i = i + size + 1) // to assign sequence no to frames 
            for(int j = 0; j <= size; j++)
                if(i + j < aa)
                    a[i + j] = j;
    }

    void reqstsend() { // to send frames
        if(w < ff) { // check whether the no. of frame sent is less than total no of frames
            if(t <= 0) { // check for time out
                std::cout << std::endl << "timer out" << std::endl;
                timeout();
            } else if((sn - sf) >= size || sf == sn + 1) {
                std::cout << std::endl << "window is full" << std::endl;
                t--;
            } else if(sn == size) { // special case when sn==size sn should be =0
                std::cout << std::endl << "frame F" << sn << " sent..." << std::endl;
                sn = 0;
                t--;
                w++;
            } else { // normal sending
                std::cout << std::endl << "frame F" << sn << " sent..." << std::endl;
                sn++;
                t--;
                w++;
            }
        } else
            std::cout << std::endl << " ***all frames sent***" << std::endl;
    }

    void arivack(int y) { // recieving acknowledgement
        sf = y;
        t = 5;
    }

    void timeout() {
        sn = sf;
        t = 5;
        w = w - 5;
    }

    void sdisplay() { // displaying frames initially
        std::cout << std::endl
             << "frames :- ";
        for(int i = 0; i < ff; i++)
            std::cout << " " << a[i] << " ";
        std::cout << std::endl
             << std::endl
             << "sn = " << sn << std::endl
             << "sf = " << sf << std::endl;
    }
}; // class sender ends

class reciever {
public:
    int rn, b[500], c;
    sender *s;

    reciever(sender *y, int q) {
        rn = 0; // next expected frame
        c = 0; // coounter
        for(int i = 0; i < q; i++)
            b[i] = 0;
        s = y;
    }

    void arivnot(int x) {
        if(rn == x) { // recieve in order
            if(rn != s->size) { // recieving frames
                b[c] = rn;
                c++;
                rn++;
            } else { // special case when rn =size, then rn should be = 0
                b[c] = rn;
                c++;
                rn = 0;
            }
        }
    }

    void sendack(int z) {
        std::cout << std::endl << "acknowledgement A" << z << " sent" << std::endl;
        s->arivack(z);
    }

    void rdisplay() {
        std::cout << std::endl << "frames recieved :- ";
        for(int i = 0; i < c; i++)
            std::cout << " " << b[i] << " ";
        std::cout << std::endl << "rn = " << rn << std::endl;
    }
}; // class reciever end

int main() {
    int m, x = 3, h, y;
    std::cout << std::endl << "enter the value of m  i.e  no of bits allowed for sequence no. :--> ";
    std::cin >> m;
    std::cout << "size of sliding window =" << pow(2, m) - 1 << std::endl;
    std::cout << "enter the total no of frames you want to send " << std::endl;
    std::cin >> h;
    sender pqr(m, h), *g = &pqr;
    reciever rec(g, h), *r = &rec;
    while(x != 0) {
        int counter = 0;
        if(counter == 0) {
            std::cout << std::endl << "1 --> go to sender" << std::endl << "0 --> exit" << std::endl << "enter code :--> ";
            std::cin >> x;
            counter++;
        } else {
            std::cout << std::endl << "1 --> go to sender" << std::endl << "2 --> go to reciever" << std::endl << "0 --> exit" << std::endl << "enter code :--> ";
            std::cin >> x;
        }
        switch(x) {
            case 0:
                break;
            case 1: {
                while(y != 3) {
                    pqr.sdisplay();
                    std::cout << std::endl << "1 --> send frame" << std::endl << "2 --> send frame(lost or incorrect)" << std::endl << "3 --> go back" << std::endl << " :--> ";
                    std::cin >> y;
                    switch(y) {
                        case 1: {
                            pqr.reqstsend();
                            if(pqr.sn == 0)
                                r->arivnot(pqr.size);
                            else
                                r->arivnot(pqr.sn - 1);
                            break;
                        }
                        case 2: {
                            pqr.reqstsend();
                            break;
                        }
                        case 3:
                            break;
                        default: {
                            std::cout << std::endl << "!!! error in code !!!" << std::endl;
                            break;
                        }
                    }
                    y = 0;
                    break;
                }
            }
            case 2: {
                while(y != 2) {
                    r->rdisplay();
                    std::cout << std::endl
                        << "1 --> send acknowledgement" << std::endl
                        << "2 --> go back" << std::endl
                        << " :--> ";
                    std::cin >> y;
                    switch(y) {
                    case 1:
                        r->sendack(rec.rn);
                        break;
                    case 2:
                        break;
                    default:
                        std::cout << std::endl
                            << "!!! error in code !!!" << std::endl;
                        break;
                    }
                };
                y = 0;
                break;
            }
            default: {
                std::cout << std::endl << "!!! error in code !!!" << std::endl;
                break;
            }
        }
    }
    return 0;
}