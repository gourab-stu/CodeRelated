// array_operations.cpp
// program to perform various actions with a menu driven options

#include <iostream>

using namespace std;

class array_op
{
private:
    int size;
    int arr[100];

public:
    array_op()
    {
        cout << "Enter the size of the array: ";
        cin >> size;
        if (size == 0)
            exit(0);
        cout << "Enter the elements: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "arr[" << i << "]=";
            cin >> arr[i];
        }
    }
    int evens()
    {
        int even_elements = 0;
        cout << "The even elements are: " << endl;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << "arr[" << i << "]=" << arr[i] << endl;
                even_elements++;
            }
        }
        if (even_elements == 0)
            cout << endl
                 << "\t***No even elements entered***" << endl;
        return even_elements;
    }
    int odds()
    {
        int odd_elements = 0;
        cout << "The odd elements are: " << endl;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cout << "arr[" << i << "]=" << arr[i] << endl;
                odd_elements++;
            }
        }
        if (odd_elements == 0)
            cout << endl
                 << "\t***No odd elements entered***" << endl;
        return odd_elements;
    }
    int sum()
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum = sum + arr[i];
        }
        return sum;
    }
    double avg()
    {
        double avg = double(sum()) / size;
        return avg;
    }
    int max()
    {
        int i = 0, max = arr[i];
        for (i = 0; i < size; i++)
        {
            if (max < arr[i])
                max = arr[i];
        }
        return max;
    }
    int min()
    {
        int i = 0, min = arr[i];
        for (int i = 0; i < size; i++)
        {
            if (min > arr[i])
                min = arr[i];
        }
        return min;
    }
    int rm_duplicates(int rm_elements = 0)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    for (int k = 0; k < size; k++)
                    {
                        arr[j] = arr[j + 1];
                    }
                    rm_elements++;
                    j--;
                    size--;
                }
            }
        }
        return rm_elements;
    }
    void reverse()
    {
        int temp, a = size;
        for (int i = 0; i < size / 2; i++)
        {
            temp = arr[i];
            arr[i] = arr[--a];
            arr[a] = temp;
        }
    }
    int insert(int element, int position)
    {
        int s = 0;
        for (int i = 0; i < size; i++)
        {
            if ((i + 1) == position)
            {
                size++;
                for (int j = size; j >= i; j--)
                {
                    arr[j + 1] = arr[j];
                }
                arr[i] = element;
                s++;
            }
        }
        return s;
    }
    int remove(int position)
    {
        int s = 0;
        for (int i = 0; i < size; i++)
        {
            if ((i + 1) == position)
            {
                size--;
                for (int j = i; j < size; j++)
                {
                    arr[j] = arr[j + 1];
                }
                s++;
            }
        }
        return s;
    }
    int search(int element)
    {
        int i, location = 0;
        for (i = 0; i < size; i++)
        {
            if (arr[i] == element)
            {
                location = 1;
                break;
            }
        }
        if (location == 1)
            return i + 1;
        else
            return location;
    }
    int op_menu()
    {
        int a;
        cout << "\t**********MENU**********" << endl;
        cout << "\t1. Show the even valued elements" << endl;
        cout << "\t2. Show the odd valued elements" << endl;
        cout << "\t3. Calculate the sum and average of all the elements" << endl;
        cout << "\t4. Show the maximum and minimum element of the array" << endl;
        cout << "\t5. Remove duplicate elements from the array" << endl;
        cout << "\t6. Print the array in reverse order" << endl;
        cout << "\t7. Insert an element in the array" << endl;
        cout << "\t8. Delete an element from the array" << endl;
        cout << "\t9. Search an element from the array" << endl;
        cout << "\t10. Re-enter array" << endl;
        cout << "\t11. Exit now" << endl;
        cout << "Enter choice: ";
        cin >> a;
        return a;
    }
    void display()
    {
        cout << "The new array is" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "arr[" << i << "]=" << arr[i] << endl;
        }
    }
};

int main()
{
beginning:
    array_op ob;
    int pos, n, r;
    switch (ob.op_menu())
    {
    case 1:
        cout << ob.evens() << " elements found";
        break;

    case 2:
        cout << ob.odds() << " elements found";
        break;

    case 3:
        cout << "Sum of all the array elements is " << ob.sum() << endl;
        cout << "Average of all the array elements is " << ob.avg() << endl;
        break;

    case 4:
        cout << "The maximum element is " << ob.max() << endl;
        cout << "The minimum element is " << ob.min() << endl;
        break;

    case 5:
        cout << "Removed " << ob.rm_duplicates() << " elements" << endl;
        ob.display();
        break;

    case 6:
        ob.reverse();
        ob.display();
        break;

    case 7:
        cout << "Enter the position to insert element: ";
        cin >> pos;
        cout << "Enter the element: ";
        cin >> n;
        cout << ob.insert(n, pos) << " element inserted successfully" << endl;
        ob.display();
        break;

    case 8:
        cout << "Enter the position to delete element: ";
        cin >> pos;
        cout << ob.remove(pos) << " element deleted successfully" << endl;
        ob.display();
        break;

    case 9:
        cout << "Enter the element to search: ";
        cin >> n;
        r = ob.search(n);
        if (r == 0)
            cout << "Element not found";
        else
            cout << "Element found at location " << r;
        break;

    case 10:
        goto beginning;
        break;

    case 11:
        exit(0);
        break;

    default:
        cout << "\t--------Select a valid option--------";
        break;
    }
    return 0;
}