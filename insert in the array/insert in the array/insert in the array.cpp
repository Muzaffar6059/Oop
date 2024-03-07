//#include<iostream>
//using namespace std;
//
//int main() {
//	const int size = 13;
//	int arr[size] = { 1,3,4,5,6,456,86,34,97,23,0,0,12};
//	int num;
//
//	//cout << "Enter the a number you wanna insert: " << endl;
//	//cin >> num;
//
//	int j = 0;
//	for (int i = 0; i < size; i++, j++)
//	{
//		if (arr[i]==0 && arr[j++]==0)
//		{
//			cout << "There is a space in the array:" << endl;
//
//		}
//	}
//	//cout << "there is a no space:" << endl;
//
//
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, tot;
    cout << "Enter the Size for Array: ";
    cin >> tot;
    cout << "Enter " << tot << " Array Elements: ";
    for (i = 0; i < tot; i++)
        cin >> arr[i];
    cout << "\nEnter Element to Insert: ";
    cin >> elem;
    cout << "At What Position ? ";
    cin >> pos;
    //for (i = tot; i >= pos; i--) {

    //    arr[i] = arr[i - 1];
    //}
    //arr[i] = elem;
    //tot++;
    int j = tot;
    for (; j >= pos; j--)
    {
        arr[j] = arr[j - 1];
        if (j == pos) {
            arr[j] = elem;
            j++;
        }

    }
    cout << "\nThe New Array is:\n";
    for (i = 0; i < tot; i++)
        cout << arr[i] << "  ";
    cout << endl;
    return 0;
}