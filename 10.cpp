#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    const int M = 3, N = 4, K = 2;
    int A[M][N]{ {5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0} };
    double B[N][K]{ {1.20, 0.50}, {2.80, 0.40}, {5.00, 1.00}, {2.00, 1.50} };
    double C[M][K]{};
    for (int k = 0; k < K; k++)
    {
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }
    cout << "Матрица C: \n";
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }


    // Какой продавец выручил больше всего денег с продаж, какой меньше?
    int i = 0, j = 0;
    double min = C[i][j], max = C[i][j];
    int mai, mii;

    for (i; i < M; i++)
    {
        if (C[i][j] >= max)
        {
            max = C[i][j];
            mai = i;
        }
        if (C[i][j] <= min)
        {
            min = C[i][j];
            mii = i;
        }
    }

    cout << "Больше всего выручил продавец №" << mai + 1 << "\nМеньше всего выручил продавец №" << mii + 1 << endl;


    // Какой получил наибольшие комиссионные, какой наименьшие?
    i = 0, j = 1;
    min = C[i][j], max = C[i][j];

    for (i; i < M; i++)
    {
        if (C[i][j] >= max)
        {
            max = C[i][j];
            mai = i;
        }
        if (C[i][j] <= min)
        {
            min = C[i][j];
            mii = i;
        }
    }
    cout << "Самые большие комиссионные получил продавец №" << mai + 1 << "\nСамые маленькие комиссионные получил продавец №" << mii + 1 << endl;
    // Чему равна общая сумма денег, вырученных за проданные товары?
    i = 0, j = 0;
    double S = 0;
    for (i; i < M; i++)
    {
        S += C[i][j];
    }
    cout << "Общая сумма денег, вырученных за проданные товары: " << S << endl;

    // Сколько всего комиссионных получили продавцы?

    i = 0, j = 1;
    double Kom = 0;
    for (i; i < M; i++)
    {
        Kom += C[i][j];
    }
    cout << "Всего комиссионных получили продавцы: " << Kom << endl;

    // Чему равна общая сумма денег, прошедших через руки продавцов?
    cout << "Общая сумма денег, прошедших через руки продавцов: " << Kom + S << endl;

    return 0;
}
