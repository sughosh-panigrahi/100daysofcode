#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    source = fopen(sourceFile, "r");

    if(source == NULL)
    {
        printf("Source file not found!");
        return 1;
    }

    destination = fopen(destFile, "w");

    if(destination == NULL)
    {
        printf("Cannot create destination file!");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully to %s", destFile);

    fclose(source);
    fclose(destination);

    return 0;
}
