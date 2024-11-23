# Electrical and Communication Diagram

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
Diagram Fuel Engine Remote Control (FERC) ini menunjukkan pengendalian jarak jauh sistem mesin berbahan bakar yang terintegrasi. Baterai utama Li-Po 25,2V mengalirkan daya melalui regulator buck boost untuk menyediakan tegangan 12V, 7,4V, dan 3,3V ke berbagai komponen. Mikrokontroler STM32 berperan sebagai pusat kendali, menerima sinyal dari modul LoRa untuk mengontrol penginjeksian bahan bakar, pengoperasian mesin, dan propeller melalui ESC. Servo digunakan untuk manuver, dan fitur keselamatan berupa PCB darurat siap memutus daya jika terjadi kegagalan. Komunikasi dilakukan melalui receiver yang menerima input dari transmitter, sedangkan Mini PC, GPS, dan kamera mendukung fungsi tambahan untuk monitoring dan navigasi.