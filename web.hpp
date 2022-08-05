String html()
{
    String HTML = "<!DOCTYPE html>\n";
    HTML += "<html lang=\"es-MX\">\n";

    HTML += "<head>\n";
    HTML += "\t<meta charset=\"UTF-8\">\n";
    HTML += "\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
    HTML += "\t<title>OLED</title>\n";
    HTML += "\t<style>\n";
    HTML += "\t\t* {\n";
    HTML += "\t\t\talign-items: center;\n";
    HTML += "\t\t\tbackground-color: #111216;\n";
    HTML += "\t\t\tcolor: #ccc;\n";
    HTML += "\t\t\tfont-family: Arial, Helvetica, sans-serif;\n";
    HTML += "\t\t\tmargin: 2vh 0;\n";
    HTML += "\t\t\tpadding: 0.2em;\n";
    HTML += "\t\t}\n";

    HTML += "\t\th1 {\n";
    HTML += "\t\t\ttext-align: center;\n";
    HTML += "\t\t\tmargin-top: 20vh;\n";
    HTML += "\t\t}\n";

    HTML += "\t\tform {\n";
    HTML += "\t\t\tdisplay: flex;\n";
    HTML += "\t\t\tflex-direction: column;\n";
    HTML += "\t\t\tmargin-top: 10vh;\n";
    HTML += "\t\t}\n";

    HTML += "\t\tinput {\n";
    HTML += "\t\t\tborder: 1px solid #fcc22f;\n";
    HTML += "\t\t\tcolor: #fff;\n";
    HTML += "\t\t\tcursor: text;\n";
    HTML += "\t\t\toutline: none;\n";
    HTML += "\t\t\tfont-size: 1.2em;\n";
    HTML += "\t\t\twidth: 98vw;\n";
    HTML += "\t\t}\n";

    HTML += "\t\tbutton {\n";
    HTML += "\t\t\tbackground-color: #212126;\n";
    HTML += "\t\t\tborder: 0;\n";
    HTML += "\t\t\tcursor: pointer;\n";
    HTML += "\t\t\twidth: 20vw;\n";
    HTML += "\t\t}\n";
    
    HTML += "\t</style>\n";
    HTML += "</head>\n";

    HTML += "<body>\n";
    HTML += "\t<h1>Controlador de pantalla OLED</h1>\n";
    HTML += "\t<form action=\"/go\", method=\"post\">\n";
    HTML += "\t\t<input type=\"text\" name=\"msg\" placeholder=\"Mensaje para la pantalla OLED\">\n";
    HTML += "\t\t<button type=\"submit\"> Enviar </button>\n";
    HTML += "\t</form>\n";
    HTML += "</body>\n";

    HTML += "</html>\n";
    return HTML;
}