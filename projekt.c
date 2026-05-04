#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Hasznalat: %s [nyelv]\n", argv[0]);
        printf("Tamogatott nyelvek:\n");
        printf("  c     - C nyelv\n");
        printf("  cpp   - C++ nyelv\n");
        printf("  py    - Python\n");
        printf("  bash  - Bash shell script\n");
        return 1;
    }

    FILE *file;

    // C nyelv
    if (strcmp(argv[1], "c") == 0) {
        file = fopen("hello_world.c", "w");
        if (file == NULL) {
            printf("Nem tudom letrehozni a fajlt!\n");
            return 1;
        }
        fprintf(file, "#include <stdio.h>\n\nint main() {\n    printf(\"Hello world\\n\");\n    return 0;\n}\n");
        fclose(file);
        printf("C fajl letrehozva.\n");
    }
    // C++ nyelv
    else if (strcmp(argv[1], "cpp") == 0) {
        file = fopen("hello_world.cpp", "w");
        if (file == NULL) {
            printf("Nem tudom letrehozni a fajlt!\n");
            return 1;
        }
        fprintf(file, "#include <iostream>\n\nint main() {\n    std::cout << \"Hello, World!\" << std::endl;\n    return 0;\n}\n");
        fclose(file);
        printf("C++ fajl letrehozva.\n");
    }
    // Python
    else if (strcmp(argv[1], "py") == 0) {
        file = fopen("hello_world.py", "w");
        if (file == NULL) {
            printf("Nem tudom letrehozni a fajlt!\n");
            return 2;
        }
        fprintf(file, "print(\"Hello, World\")\n");
        fclose(file);
        printf("Python fajl letrehozva.\n");
    }
    // Bash
    else if (strcmp(argv[1], "bash") == 0) {
        file = fopen("hello_world.sh", "w");
        if (file == NULL) {
            printf("Nem tudom letrehozni a fajlt!\n");
            return 2;
        }
        fprintf(file, "#!/bin/bash\n\necho \"Hello, World!\"\n");
        fclose(file);
        printf("Bash fajl letrehozva.\n");
    }
    else {
        printf("Nem tamogatott nyelv! Tamogatott: c, cpp, py, bash\n");
        return 3;
    }

    return 0;
}