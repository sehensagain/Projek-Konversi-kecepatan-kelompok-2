# Projek-Konversi-kecepatan-kelompok-2
Program ini dibuat untuk melakukan konversi kecepatan. Pengguna dapat dengan mudah mengubah nilai kecepatan dari km/jam (kilometer per jam) ke mph (mile per hour) dan sebaliknya.

<!DOCTYPE html>
<html lang="id">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Konversi KM/H ↔ MPH</title>
  <link rel="stylesheet" href="style.css">
</head>
<body>
  <h1>Konversi Kecepatan KM/H ↔ MPH</h1>

  <div class="container">
    <label for="mode">Pilih Konversi:</label>
    <select id="mode">
      <option value="kmh_mph">KM/H ke MPH</option>
      <option value="mph_kmh">MPH ke KM/H</option>
    </select>

    <input type="number" id="input" placeholder="Masukkan nilai kecepatan">
    <button id="convertBtn">Konversi</button>

    <p id="result"></p>
  </div>

  <footer>
    <p>🚗 Dibuat oleh kelompok 2 <a href="https://github.com/USERNAME" target="_blank">USERNAME</a></p>
  </footer>

  <script src="script.js"></script>
</body>
</html>
