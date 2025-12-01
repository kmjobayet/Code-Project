#include <stdio.h>
#include <zip.h>

int main() {
    int err;
    zip *z = zip_open("archive.zip", 0, &err);
    if (z == NULL) {
        fprintf(stderr, "Error opening ZIP file\n");
        return 1;
    }
    int num_files = zip_get_num_entries(z, 0);
    for (int i = 0; i < num_files; i++) {
        struct zip_stat st;
        zip_stat_index(z, i, 0, &st);
        printf("File: %s\n", st.name);
        zip_file *f = zip_fopen_index(z, i, 0);
        if (f) {
            char buffer[1024];
            int len;
            while ((len = zip_fread(f, buffer, sizeof(buffer))) > 0) {
                fwrite(buffer, 1, len, stdout);
            }
            zip_fclose(f);
        }
    }
    zip_close(z);
    return 0;
}