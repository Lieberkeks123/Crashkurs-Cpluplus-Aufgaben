using namespace std;

#include "rect.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>

Rect::Rect(int w, int h) // keine Default-Werte
{
    m_width = w;
    m_height = h;
    cout << "Rect " << w << " x " << h <<  endl << area() << endl << endl;
    draw();
}
void Rect::draw(){
    for (int y=0; y<m_height; y++){
        for (int x=0; x<m_width; x++){
            cout << "*";
        }
    cout << endl;
    }
}

void vektorfüllen(int var){
    var = 1;
}

int main()
{
    int var = 0;
    vektorfüllen(var);
    }




    srand (time(NULL));

    Rect(5, 6);


    int k = 0;
    int rows, cols;
    do{
    rows = rand() % 10;
    cols = rand() % 10;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i)
        matrix[i] = new int[cols];

    for(int i=0;i<rows; i++){
            for(int j = 0; j<cols; j++){
                matrix[i][j] = i;
        }
    }

    for(int i=0;i<rows; i++){
            for(int j = 0; j<cols; j++){
                cout << "[ " << matrix[i][j] << " ]";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i)
        delete [] matrix[i];
    delete [] matrix;
    k++;
    }while(k<=3);





    return 0;
}
