#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERSION "1.1"
void print_help(char *program_name) {
    printf("Hasznalat: %s [opcio|nyelv]\n\n", program_name);
    printf("Opciók:\n");
    printf("  -h, --help      Help megjelenitese\n");
    printf("  -v, --version   Verzioszam\n");
    printf("  --stdout        Fajl helyett stdout-ra ir\n\n");

    printf("Tamogatott nyelvek:\n");
    printf("  c       C\n");
    printf("  cpp     C++\n");
    printf("  py      Python\n");
    printf("  bash    Bash\n");
    printf("  java    Java\n");
}

void print_version() {
    printf("verzio: %s\n", VERSION);
}

void output_code(const char *filename, const char *code, int stdout_mode) {
    if (stdout_mode) {
        printf("%s", code);
        return;
    }

    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Nem tudom letrehozni a fajlt!\n");
        exit(1);
    }

    fprintf(file, "%s", code);
    fclose(file);

    printf("Fajl letrehozva: %s\n", filename);
}

int main(int argc, char *argv[]) {
    int stdout_mode = 0;
    char *language = NULL;

    if (argc < 2) {
        print_help(argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--stdout") == 0) {
            stdout_mode = 1;
        }
        else if (
            strcmp(argv[i], "-h") == 0 ||
            strcmp(argv[i], "--help") == 0
        ) {
            print_help(argv[0]);
            return 0;
        }
        else if (
            strcmp(argv[i], "-v") == 0 ||
            strcmp(argv[i], "--version") == 0
        ) {
            print_version();
            return 0;
        }
        else {
            language = argv[i];
        }
    }

    if (language == NULL) {
        printf("Nincs megadva nyelv!\n");
        return 1;
    }

    if (strcmp(language, "c") == 0) {
        output_code(
            "hello_world.c",
            "#include <stdio.h>\n\n"
            "int main() {\n"
            "    printf(\"Hello, World!\\n\");\n"
            "    return 0;\n"
            "}\n",
            stdout_mode
        );
    }
    else if (strcmp(language, "cpp") == 0) {
        output_code(
            "hello_world.cpp",
            "#include <iostream>\n\n"
            "int main() {\n"
            "    std::cout << \"Hello, World!\" << std::endl;\n"
            "    return 0;\n"
            "}\n",
            stdout_mode
        );
    }
    else if (strcmp(language, "py") == 0) {
        output_code(
            "hello_world.py",
            "print(\"Hello, World!\")\n",
            stdout_mode
        );
    }
    else if (strcmp(language, "bash") == 0) {
        output_code(
            "hello_world.sh",
            "#!/bin/bash\n\n"
            "echo \"Hello, World!\"\n",
            stdout_mode
        );
    }
    else if (strcmp(language, "java") == 0) {
        output_code(
            "HelloWorld.java",
            "public class HelloWorld {\n"
            "    public static void main(String[] args) {\n"
            "        System.out.println(\"Hello, World!\");\n"
            "    }\n"
            "}\n",
            stdout_mode
        );
    }
    else {
        printf("Nem tamogatott nyelv!\n");
        return 2;
    }

    return 0;
}