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
    <p>🚗 Dibuat oleh kelompok 2 <a href="https://github.com/sehensagain" target="_blank">sehensagain</a></p>
  </footer>

  <script src="script.js"></script>
</body>
</html>
body {
  font-family: Arial, sans-serif;
  background: linear-gradient(135deg, #1e3c72, #2a5298);
  color: white;
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  height: 100vh;
  margin: 0;
}

h1 {
  margin-bottom: 20px;
}

.container {
  background-color: rgba(255, 255, 255, 0.1);
  padding: 20px 40px;
  border-radius: 10px;
  box-shadow: 0 0 15px rgba(0, 0, 0, 0.3);
  text-align: center;
}

select, input, button {
  margin-top: 10px;
  padding: 10px;
  border-radius: 5px;
  border: none;
  font-size: 16px;
}

input {
  width: 100%;
}

button {
  background-color: #4CAF50;
  color: white;
  cursor: pointer;
  transition: 0.3s;
}

button:hover {
  background-color: #45a049;
}

#result {
  margin-top: 20px;
  font-size: 18px;
  font-weight: bold;
}

footer {
  position: absolute;
  bottom: 10px;
  font-size: 14px;
}

footer a {
  color: #fff;
  text-decoration: none;
}

document.getElementById("convertBtn").addEventListener("click", convert);

function convert() {
  const mode = document.getElementById("mode").value;
  const value = parseFloat(document.getElementById("input").value);
  const resultElement = document.getElementById("result");

  if (isNaN(value)) {
    resultElement.innerText = "⚠ Masukkan angka yang valid!";
    return;
  }

  let result;
  if (mode === "kmh_mph") {
    result = value * 0.621371;
    resultElement.innerText = ${value} km/h = ${result.toFixed(2)} mph;
  } else {
    result = value / 0.621371;
    resultElement.innerText = ${value} mph = ${result.toFixed(2)} km/h;
  }
}
