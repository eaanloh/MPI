/** Read value from text file and compute sum using MPI */

#include <stdio.h>
#include <mpi.h>

void main(int argc, char** argv) {

    int myRank, totalRank, nameLen;
    char processor_name[MPI_MAX_PROCESSOR_NAME];

    // First call MPI_Init
    MPI_Init(&argc, &argv);
    // Get my rank and the number of ranks
    MPI_Comm_rank(MPI_COMM_WORLD, &myRank);
    MPI_Comm_size(MPI_COMM_WORLD, &totalRank);
    // Get the processor name
    MPI_Get_processor_name(processor_name, &nameLen);

    printf("Processor %d of %d: Hello world from processor %s!\n", myRank, totalRank, processor_name);

    // Call finalize at the end
    MPI_Finalize();

}