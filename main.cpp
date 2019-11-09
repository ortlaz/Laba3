#include <iostream>
#include <Queue.h>
#include <windows.h>

using namespace std;

double maxEl(double arr[], int sz);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Queue Q;
    int var;

    while (var){
        system("cls");

        cout<<"1.����� ������������ ������� �������\n2.�������� �������\n3.����� �������\n4.�������� �������\n5.���������� �������� � ����� �������\n0.�����\n";
        cout<<"�������� �����:";
        cin>>var;

        switch(var){
            case 1:{
                int size;
                cout<<"������� ���-�� ��������� �������:";
                cin>>size;
                double arr[size];
                for(int i=0; i<size;i++){
                    cout<<"i �������:";
                    cin>>arr[i];
                }
                cout<<"MAX:"<<maxEl(arr,size - 1)<<endl;
                system("pause");
                break;
            }
            case 2:{
                Q.createQ();
                system("pause");
                break;
            }
            case 3:{
                cout<<"�������\n";
                Q.outQ(Q.getFirst());
                system("pause");
                break;
            }
            case 4:{
                Q.erase();
                system("pause");
                break;
            }
            case 5:{
                Q.Add();
                system("pause");
                break;
            }
            case 0:{
                exit(0);
                system("pause");
                break;
            }
            default:{
                cout<<"�������� ����� �� ������!\n";
                system("pause");
                break;
            }
        }
    }

    return 0;
}

//����� ��������� � �������
double maxEl(double arr[], int sz) {
    if(!sz) return arr[0];
    else{
     return maxEl(arr+(arr[0]<arr[sz]),sz - 1);
    }
}
