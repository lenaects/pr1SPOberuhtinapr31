// pr1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int search(int number) {
    int figuremin=9;
    while (number!=0) {
        int  figure = fmod(number,10);
        if (figure < figuremin) {
            figuremin = figure;
        }
        number /= 10;
    }
    return figuremin;
}
void fibonacci(int count) {
    int x = 0;
    int y = 1;

    for (int i = 0; i<count; i++) {

        cout << x<< endl;
        x = x + y;
        y = x - y; 
    }
   
}
int main()
{   setlocale(LC_ALL,"Russian");
    int code=0; 
    
    do { 
        cout << "Выберите задачу 1 или 2(ввести число 1 или 2)";    
        cin >> code;
        if( code == 1) {               
            int number;            
            std::cout << "Введите число\"number\"\n";         
            std::cin >> number;          
            int figuremin = search(number);         
            std::cout << "Наименьшая цифра:" << figuremin << std::endl;    
        }
        else if(code==2){
            int count;        
            std::cout << "Введите количество чисел фибоначчи\"count\"\n";    
            std::cin >> count;            
            fibonacci(count);
        }     
    } while (code==1||code==2);
    
  
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
