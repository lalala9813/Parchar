#include <iostream>

using namespace std;

int promedio(int filas, int columnas, int suma = 0, int promedio, int matriz,int cant)
{
    for(int i=0;i<filas;i++)/*realiza la suma de los elementos de mi matriz*/
    {
        for(int j=0;j<columnas;j++)
        {
            suma=suma+matriz[i][j];

        }
    }
    promedio = suma/cant;/*con la suma ya encontrada dividimos el valor de suma entre nuestra variable cant*/
    /*cout << "\n" << "Su promedio ---> " << promedio;*/

}

int ordenar(int matriz)
{
    for(int i=0; i<filas; i++)/*ordena mi matriz*/
    {
        for(int j=0; j<columnas; j++)
        {
            for(int x=0; x<filas;x++)
            {
                for(int y=0; y<columnas; y++)
                {
                    if(matriz[i][j]>matriz[x][y])
                    {
                        mayor=matriz[i][j];
                        matriz[i][j]=matriz[x][y];
                        matriz[x][y]=mayor;
                    }

                }
            }
         }
    }


    cout<<"\n####################################################################"<<endl;
    cout<<"Mi matriz Ordenada de Mayor a Menor\n"<<endl;

    for(i=0; i<filas; i++)/*imprimo la matriz ordenada*/
    {
        for(j=0; j<columnas; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<< "\n";
    }
    /*mediana=matriz[1][1];*/
}

int minimaxi()
{
    for(i=0;i<filas;i++)/*for que se encarga de encontrar el valor maximo de mi matriz*/
    {
        for(j=0;j<columnas;j++)
        {
            if(matriz[i][j]>maxi)
            {
                maxi=matriz[i][j];
            }
        }
    }
    /*cout << "\n" <<"El valor maximo ---> " << maxi;*/

    mini=matriz[0][0];/*for que se encarga de encontrar el valor minimo de mi matriz*/
    for(i=0;i<filas;i++)
    {
        for(j=0;j<columnas;j++)
        {
            if(matriz[i][j]<mini)
            {
                mini=matriz[i][j];
            }
        }
    }
}

int imprimirMatriz()
{
    int matriz[100][100],i,j,suma=0,promedio,mini,maxi=0,x,y,mayor,menor,tam=filas*columnas,e;
    cout << "Deme el numero de filas --> ";
    cin >> filas;/*pido al usuario que ingrese el numero de filas que desea como usted pidio 3 puede poner 3*/
    cout << "Deme el numero de columnas --> ";
    cin >> columnas;/*pido al usuario que ingrese el numero de columnas que desea como usted pidio 3 puede poner 3*/

    int cant=filas*columnas;/*cree esta variable para tener el total de elementos de mi matriz*/
    int mediana;

    for(i=0;i<filas;i++)/*for que pide el numero que se quiere agregar a la matriz */
    {
        for(j=0;j<columnas;j++)
        {
            cout << "Deme un numero para la posicion " << "[" << i << "]" << "[" << j << "]" << "--> ";
            cin >> matriz[i][j];/*se alamacenan los valores en la matriz*/

        }
    }
    cout << "\nMi Matriz es esta" << "\n";
    for(i=0;i<filas;i++)/*imprime matriz*/
    {
        for(j=0;j<columnas;j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";matriz[i][j];
    }
    promedio();
    ordenar(matriz);
    minimaxi();
}

//.................................................................................................

int main()
{
    imprimirMatriz();
    /*cout << "\n" <<"El valor minimo ---> " << mini;*/
 /*#################################################################################################################*/

    //ordenar(matriz[3][3]);
    /*cout << "\nLa mediana es ---> " << mediana;*/



    int resultados[4]={promedio,mediana,mini,maxi};
    cout << "\nEl primer valor es del promedio, el segundo de la mediana, el tercero del minimo y el cuarto del maximo \n";
    cout << "\n" <<"{" << resultados[0] << "," << resultados[1] << "," << resultados[2] << "," << resultados[3] << "}" << "\n";

    return 0;

}



