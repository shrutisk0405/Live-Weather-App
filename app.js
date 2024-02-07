const API_KEY = `04e6b5d2a6e1204cb84b8334f42cb4f8`;
const form = document.querySelector("form");
const search = document.querySelector("#search");
const weather = document.querySelector("#weather");

const getWeather = async (city) => {
  const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${API_KEY}&units=metric`;
  try {
    const response = await fetch(url);
    const data = await response.json();

    if (data.cod === "404") {
      weather.innerHTML = `<h2> City Not Found </h2>`;
      return;
    }

    showWeather(data);
  } catch (error) {
    console.error("Error fetching weather data:", error);
  }
};

const showWeather = (data) => {
  weather.innerHTML = `
        <div>
            <img src="https://openweathermap.org/img/wn/${data.weather[0].icon}@2x.png" alt="">
        </div>
        <div>
            <h2>${data.main.temp} ℃</h2>
            <h4>${data.weather[0].main}</h4>
        </div>
    `;
};

form.addEventListener("submit", function (event) {
  getWeather(search.value);
  event.preventDefault();
});
