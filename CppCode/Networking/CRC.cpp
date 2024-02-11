#include <iostream>

class ErrorDetection {
public:
    int length, gen, msg;

    void rev(int num[], int len) {
        int temp;
        for (int i1 = 0, i2 = len - 1; i1 < len / 2; i1++, i2--) {
            temp = num[i2];
            num[i2] = num[i1];
            num[i1] = temp;
        }
        return;
    }

    void dec_to_bin(int dec, int bin_ary[]) {
        int tmp, i = 0;
        tmp = dec;
        while (tmp != 0) {
            bin_ary[i] = tmp % 2;
            tmp = tmp / 2;
            i++;
        }
        rev(bin_ary, i);
        length = i;
        for (int a = 0; a < i; a++)
            std::cout << bin_ary[a];
        std::cout << std::endl;
        return;
    }

    int sub_xor_bin(int divt[], int divr[], int len_div, int len) {
        int j = 0, k;

        while (divt[j] != 1)
            j++;
        if ((len - j) < len_div)
            return 0;
        for (int i = j, k = 0; i < (len_div + j); i++, k++) {
            if (divt[i] == divr[k])
                divt[i] = 0;
            else
                divt[i] = 1;
        }
        return 1;
    }

    void app_end(int num[], int app, int &norm) {
        length = (norm + app) - 1;
        for (int i = norm - 1; i < length; i++)
            num[i] = 0;
        std::cout << "The number after appending is: ";
        for (int i = 0; i < length; i++)
            std::cout << num[i];
        std::cout << std::endl;

        norm = length;
    }

    void division(int msg[], int &len_msg, int gn[], int len_gn) {
        int flag;
        app_end(msg, len_gn, len_msg);
        for (int i = 0; i < len_msg - 2; i++) {
            flag = sub_xor_bin(msg, gn, len_gn, len_msg);
            if (flag == 0)
                break;
        }
        std::cout << "The msg now after dividing: ";
        for (int i = 0; i < len_msg; i++)
            std::cout << msg[i];
        std::cout << std::endl;
    }
};

int main() {
    ErrorDetection ob;
    int msg_pass[20], msg_temp[20], i, length_msg, length_gen, rem[6], ori_msg_len;
    std::cout << "Enter the message to be passed(in decimal): ";
    std::cin >> ob.msg;
    std::cout << "The message in binary code: ";
    ob.dec_to_bin(ob.msg, msg_pass);
    length_msg = ob.length;
    std::cout << "Enter the generator number i.e, the divisor:(in decimal) ";
    std::cin >> ob.gen;
    std::cout << "the binary value of generator is: ";
    int genr[6];
    ob.dec_to_bin(ob.gen, genr);
    length_gen = ob.length;
    for (int j = 0; j < length_msg; j++)
        msg_temp[j] = msg_pass[j];
    ori_msg_len = length_msg;
    ob.division(msg_pass, length_msg, genr, length_gen);
    int r = ori_msg_len;
    std::cout << "The crc remainder is: ";
    for (int j = r; j < length_msg; j++) {
        std::cout << msg_pass[j];
        msg_temp[r] = msg_pass[j];
        r++;
    }
    std::cout << std::endl << "The msg to be passed: ";
    for (i = 0; i < r; i++)
        std::cout << msg_temp[i];
    std::cout << std::endl;
    return 0;
}