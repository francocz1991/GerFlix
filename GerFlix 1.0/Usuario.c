
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{

    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};

    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }

}

void mostrarListaUsuarios(eUsuario usuario[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        if(usuario[i].estado==1)
        {
            printf("Usuario: %s --> IDserie: %d\n",usuario[i].nombre,usuario[i].idSerie);
        }
    }
}

void mostrarUsuarioConSuSerie(eUsuario usuario[], int cantidadUsuario, eSerie serie[], int cantidadSerie)
{
    int i;
    int j;

    for(i=0;i<cantidadUsuario;i++)
    {
        if(usuario[i].estado==0)
        {
            break;
        }
        for(j=0;j<cantidadSerie;j++)
        {
            if(usuario[i].idSerie==serie[j].idSerie)
            {
                printf("%s --> %s\n",usuario[i].nombre,serie[j].nombre);
                j==0;
                break;
            }
        }

    }
}

void mostrarSerieConUsuarios(eSerie serie[], int cantidadSerie, eUsuario usuario[], int cantidadUsuario)
{
    int i;
    int j;

    for(i=0;i<cantidadSerie;i++)
    {
        if(serie[i].estado==0)
        {
            break;
        }
        for(j=0;j<cantidadUsuario;j++)
        {
            if(serie[i].idSerie==usuario[j].idSerie)
            {
                printf("%s --> %s\n",serie[i].nombre,usuario[j].nombre);

            }
        }

    }
}



