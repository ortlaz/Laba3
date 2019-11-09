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

        cout<<"1.Найти максимальный элемент массива\n2.Создание очереди\n3.Вывод очереди\n4.Удаление очереди\n5.Добавление элемента в конец очереди\n0.Выход\n";
        cout<<"Выберите опцию:";
        cin>>var;

        switch(var){
            case 1:{
                int size;
                cout<<"Введите кол-во элементов массива:";
                cin>>size;
                double arr[size];
                for(int i=0; i<size;i++){
                    cout<<"i элемент:";
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
                cout<<"Очередь\n";
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
                cout<<"Выберите номер из списка!\n";
                system("pause");
                break;
            }
        }
    }

    return 0;
}

//Поиск максимума в массиве
double maxEl(double arr[], int sz) {
    if(!sz) return arr[0];
    else{
     return maxEl(arr+(arr[0]<arr[sz]),sz - 1);
    }
}
