## 🛠️ Arduino IDE Setup (Digispark / Digistump AVR)

Follow the steps below to configure the Arduino IDE for Digispark boards.

---

### 1️⃣ Install Arduino IDE
Download and install the Arduino IDE from:
- https://www.arduino.cc/en/software

---

### 2️⃣ Add Digistump Board URL
1. Open **Arduino IDE**
2. Go to **File → Preferences**
3. In **Additional Boards Manager URLs**, add the following URL:**https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json**
4. Click **OK**

---

### 3️⃣ Install Digistump AVR Boards
1. Go to **Tools → Board → Boards Manager**
2. Search for **Digistump AVR Boards**
3. Click **Install**
4. Wait until installation completes

---

### 4️⃣ Select Board and Clock Speed
1. Go to **Tools → Board**
2. Select **Digispark (Default – 16.5 MHz)**
3. Set the clock speed to:**16.5 MHz**
4. 
---

### 5️⃣ Uploading the Code (Important ⚠️)
Digispark boards require a special upload process:

1. **Do NOT connect** the Digispark board yet
2. Click **Upload** in Arduino IDE
3. When prompted, **connect the Digispark board**
4. Wait for upload to complete

---

## ▶️ Execution
Once uploaded successfully, the program will **run automatically** on the Digispark board.

---

## 📌 Notes
- Use a **good quality USB cable**
- Avoid USB hubs if upload fails
- Run Arduino IDE as **Administrator** (Windows)

---

## ⚠️ Disclaimer
This project is intended for **educational purposes only**.  
Use responsibly and ethically.



