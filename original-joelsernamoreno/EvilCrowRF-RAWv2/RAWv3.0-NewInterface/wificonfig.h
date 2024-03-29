const char WiFiConfig[] PROGMEM = R"=====(
<html>
        <head>
                <title>Wi-Fi Config</title>
                <meta charset="utf-8">
                <link rel="stylesheet" href="style.css">
                <script src="lib.js"></script>
        </head>
        <body>
<nav id='menu'>
  <input type='checkbox' id='responsive-menu' onclick='updatemenu()'><label></label>
  <ul>
    <li><a href='/'>Home</a></li>
    <li><a class='dropdown-arrow'>Config</a>
      <ul class='sub-menus'>
        <li><a href='/txconfig'>RAW TX Config</a></li>
        <li><a href='/txbinary'>Binary TX Config</a></li>
        <li><a href='/rxconfig'>RX Config</a></li>
        <li><a href='/btnconfig'>Button TX Config</a></li>
      </ul>
    </li>
    <li><a class='dropdown-arrow'>RX Log</a>
      <ul class='sub-menus'>
        <li><a href='/viewlog'>RX Logs</a></li>
        <li><a href='/delete'>Delete Logs</a></li>
        <li><a href='/downloadlog'>Download Logs</a></li>
        <li><a href='/cleanspiffs'>Clean SPIFFS</a></li>
      </ul>
    </li>
    <li><a href='/txtesla'>Tesla Charge</a></li>
    <li><a href='/jammer'>Simple Jammer</a></li>
    <li><a class='dropdown-arrow'>ECRF Config</a>
      <ul class='sub-menus'>
        <li><a href='/wificonfig'>WiFi Config</a></li>
        <li><a href='/update'>OTA Firmware</a></li>
      </ul>
    </li>
  </ul>
</nav>
<br>
                <br>
    <FORM action="/setwificonfig" method="post" id="config" target="iframe">
          <p>Wi-Fi Mode: </p>
          <label class="custom-select" for="styledSelect1">
          <select name="mode" form="config" id="styledSelect1">
            <option value="1">AP</option> 
            <option value="2">STATION</option> 
          </select>
          </label>
          <hr>
        <p>SSID: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="ssid"></textarea>
          <hr>
          <p>Password: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="password"></textarea>
          <hr>
          <p>Channel: </p><textarea class="css-input-text" form="config" rows="1" cols="50" name="channel"></textarea>
          <hr>
          <INPUT type="radio" name="configmodule" value="3" hidden="1" checked="checked">
          <INPUT class="button-submit" type="submit" value="Apply">
      </form>
      <FORM action="/deletewificonfig" method="post" id="config" target="iframe">
          <INPUT type="radio" name="configmodule" value="0" hidden="1" checked="checked">
          <INPUT class="button-submit" type="submit" value="Delete Config">
      </form>
<br>
<hr>
<br>
<iframe style="visibility: hidden;" src="http://" )+local_IPstr+"/wificonfig" name="iframe"></iframe>
</body>
</html>
)=====";
