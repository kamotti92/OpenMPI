#include "mpi.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int n, myid, numprocs, i;
	int name_len;
	char processor_name[MPI_MAX_PROCESSOR_NAME];

	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD,&numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD,&myid);
	MPI_Get_processor_name(processor_name, &name_len);
	printf("Hello World %d by %s\n",myid,processor_name);
	MPI_Finalize();
}
