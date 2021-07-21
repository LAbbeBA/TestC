#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char * argv[])
{
    
    FILE * inputFile;
    
    argc--;   argv++;

    time_t rawtime;
    struct tm * timeinfo;

    /* Récupération de la date et de l'heure */
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
     
    /* Message d'aide à l'utilisation si le paramètre a été omis */
    if (argc == 0)
    {
        printf ("Usage: sample filename...\n");
        exit (0);
    }
    
    inputFile = fopen (argv[0], "a");
    if (inputFile == NULL)
    {
        fprintf (stderr, "Cannot open file %s\n", argv[0]);
        exit (0);
    }
    
    printf ("hello world\n");
    fprintf (inputFile, "Appending a new message in the file at %s", asctime(timeinfo));

# Ajout commentaire
    fclose (inputFile);
        
    return 0;
}
