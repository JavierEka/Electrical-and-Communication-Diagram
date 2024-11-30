#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nama[50];
    char nrp[15];
    char jurusan[50];
} Mahasiswa;

int cek_nama_sama(Mahasiswa data_mahasiswa[], int jumlah, const char *nama) {
    for (int i = 0; i < jumlah; i++) {
        if (strcmp(data_mahasiswa[i].nama, nama) == 0) {
            return 1;
        }
    }
    return 0;
}

int cek_nrp_sama(Mahasiswa data_mahasiswa[], int jumlah, const char *nrp) {
    for (int i = 0; i < jumlah; i++) {
        if (strcmp(data_mahasiswa[i].nrp, nrp) == 0) {
            return 1;
        }
    }
    return 0;
}

int validasi_nrp(const char *nrp) {
    if (strlen(nrp) != 10) {
        return 0; 
    }
    char dua_digit[3];
    strncpy(dua_digit, nrp, 2);
    dua_digit[2] = '\0';
    int angka = atoi(dua_digit); 
    return (angka == 20 || angka == 50); 
}

void cari_kelompok(Mahasiswa data_mahasiswa[], int jumlah) {
    int sudah_diproses[5] = {0};

    for (int i = 0; i < jumlah; i++) {
        if (sudah_diproses[i]) {
            continue; 
        }

        char nrp_awal[5];
        strncpy(nrp_awal, data_mahasiswa[i].nrp, 4);
        nrp_awal[4] = '\0';

        int count = 0;

        for (int j = 0; j < jumlah; j++) {
            if (!sudah_diproses[j] && strncmp(data_mahasiswa[j].nrp, nrp_awal, 4) == 0) {
                count++;
            }
        }

        if (count > 1) {
            printf("\nMahasiswa dengan jurusan yang sama : ");

            for (int j = 0; j < jumlah; j++) {
                if (!sudah_diproses[j] && strncmp(data_mahasiswa[j].nrp, nrp_awal, 4) == 0) {
                    printf("%s ", data_mahasiswa[j].nama);
                    sudah_diproses[j] = 1; 
                }
            }
        }
    }
}

int main() {
    Mahasiswa data_mahasiswa[5];
    int jumlah = 0;

    printf("Masukkan data mahasiswa (maksimum %d mahasiswa):\n", 5);

    while (jumlah < 5) {
        Mahasiswa mhs;

        printf("\nNama: ");
        scanf(" %[^\n]s", mhs.nama);

        if (cek_nama_sama(data_mahasiswa, jumlah, mhs.nama)) {
            printf("Nama '%s' sudah ada!\n", mhs.nama);
            continue;
        }

        printf("NRP: ");
        scanf(" %s", mhs.nrp);

        if (cek_nrp_sama(data_mahasiswa, jumlah, mhs.nrp)) {
            printf("NRP '%s' sudah ada!\n", mhs.nrp);
            continue;
        }

        if (!validasi_nrp(mhs.nrp)) {
            printf("NRP Tidak Valid!\n");
            continue;
        }

        printf("Jurusan: ");
        scanf(" %[^\n]s", mhs.jurusan);

        data_mahasiswa[jumlah] = mhs;
        jumlah++;
    }

    cari_kelompok(data_mahasiswa, jumlah);

    return 0;
}

