ESP8266WebServer server(80);
Adafruit_SSD1306 display(128, 64);

void setHTML()
{
    server.send(200, "text/html", html());
}

void PrintOLED ()
{
	String form = "";
    form += server.arg("msg");
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setCursor(0, 0);
    display.println(form);
    display.display();
    setHTML();
}

void ServerBegin()
{
    WiFi.begin(ssid(), passw());
    while (WiFi.status() != WL_CONNECTED)
        delay(3000);
    server.on("/", setHTML);
    server.on("/go", PrintOLED);
    server.begin();
}

void DisplayBegin()
{
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setCursor(0, 0);
    display.println(" ");
    display.display();
}

void PrintBegin ()
{
    Serial.println("Servicios iniciados\n");
    Serial.println("Red:\t\t" + ssid());
    Serial.println("IP:\t\t" + WiFi.localIP().toString());
    Serial.println("\nServidor iniciado");
}