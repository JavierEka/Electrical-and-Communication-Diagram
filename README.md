![image](https://github.com/user-attachments/assets/7f036c5d-70e8-4da1-aca3-5c212dbf0139)# Electrical and Communication Diagram

## Fuel Engine Remote Control (FERC)

### Electrical Diagram
![alt text](images/FERC%20ED.drawio.png)
### Communication Diagram
![alt text](images/FERC%20CD.drawio.png)
### Deskripsi
Diagram ini menunjukkan sistem Engine Remote Control (ERC) berbasis STM32, didukung baterai utama 25,2V yang dialirkan melalui regulator (buck boost) untuk kebutuhan tegangan 12V, 7,4V, dan 5V. Komponen seperti GPS, kamera, servo, ESC, dan thruster terhubung melalui STM32 untuk pengontrolan. Sistem komunikasi melibatkan LoRa dan CANBUS, sementara receiver menghubungkan transmitter dengan servo. Baterai cadangan 16,8V mendukung PCB darurat dan motor ESC. Regulator UBEC memastikan pasokan aman ke perangkat seperti lampu dan PC mini. Diagram menekankan alur energi dan sinyal untuk mengoperasikan sistem dengan efisien.

## Electrical Remote Control (ERC)

### Electrical Diagram
![alt text](images/ERC%20ED.drawio.png)
### Communication Diagram
![alt text](images/ERC%20CD.drawio.png)
### Deskripsi
Diagram Fuel Engine Remote Control (FERC) ini menunjukkan pengendalian jarak jauh sistem mesin berbahan bakar yang terintegrasi. Baterai utama Li-Po 25,2V mengalirkan daya melalui regulator buck boost untuk menyediakan tegangan 12V, 7,4V, dan 5V ke berbagai komponen. Mikrokontroler STM32 berperan sebagai pusat kendali, menerima sinyal dari modul LoRa untuk mengontrol penginjeksian bahan bakar, pengoperasian mesin, dan propeller melalui ESC. Servo digunakan untuk manuver, dan fitur keselamatan berupa PCB darurat siap memutus daya jika terjadi kegagalan. Komunikasi dilakukan melalui receiver yang menerima input dari transmitter, sedangkan Mini PC, GPS, dan kamera mendukung fungsi tambahan untuk monitoring dan navigasi.

#Contoh Program Untuk Mengecek Jurusan
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
