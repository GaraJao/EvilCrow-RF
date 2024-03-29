const char Style[] PROGMEM = R"=====(
body {
    background-color: #333333;
    font-family: "Century Gothic", Arial;
    color: white;
    margin: 20px;
    margin-top: 80px;
}
.myButton:link, .myButton:visited {
    background: linear-gradient(#777777, #444444);
    color: white;
    padding: 4px;
    min-width: 100px;
    border-radius: 5px;
    border: 2px solid white;
    text-align: center;
    margin-right: 20px;
    text-decoration: none;
    display: inline-block;
    transition: 0.25s;
}
.myButton:hover, .myButton:active {
    background: linear-gradient(#888888, #555555);
    border: 2px solid deepskyblue;
    border-radius: 10px;
    transform:scale(1.15);
}
.submitBtn {
    background: linear-gradient(#777777, #444444);
    color: white;
    padding: 4px;
    min-width: 100px;
    border-radius: 2.5px;
    border: 2px solid white;
    text-align: center;
    transition: 0.25s;
}
.submitBtn:hover, .submitBtn:active {
    background: linear-gradient(#888888, #555555);
    border: 2px solid deepskyblue;
}
.console{
    width: 99%;
    background-color: black;
    color: white;
    font-family: monospace;
    padding: 5px;
    border: 0px;
}

.datagrid table { 
  border-collapse: collapse; 
  text-align: left; 
  width: 100%; 
} 
.datagrid {
  font: normal 12px/150% Courier New, Courier, monospace; background: #fff; 
  overflow: hidden; 
  border: 0px solid #8C8C8C; 
  -webkit-border-radius: 10px; 
  -moz-border-radius: 10px; 
  border-radius: 10px; 
  margin-top: 15px;
}
.datagrid table td, .datagrid table th { 
    padding: 7px 7px; 
}
.datagrid table thead th {
  background:-webkit-gradient( linear, left top, left bottom, color-stop(0.05, #363636), color-stop(1, #000000) );
  background:-moz-linear-gradient( center top, #363636 5%, #000000 100% );
  background-color:#363636; 
  color:#FFFFFF; 
  font-family: "Century Gothic", Arial;
  font-size: 24px; 
  font-weight: bold; 
  border-left: 0px solid #A3A3A3; 
} 
.datagrid table thead th:first-child { 
    border: none; 
}
.datagrid table tbody td { 
  background: #454545; 
  color: #EDEDED;
  border-left: 1px solid #000000;
  border-bottom: 1px solid #000000;
  font-size: 24px;
  font-weight: normal; 
}
.datagrid table tbody td:first-child { 
  border-left: none; 
}
.datagrid table tbody tr:last-child td { 
  border-bottom: none; 
}

#menu {
  background: #282829;
  background: linear-gradient(to bottom,  #5D5C5E,  #000000);
  color: #FFF;
  height: 65px;
  padding-left: 18px;
  border-radius: 5px;
  font-family: "Century Gothic", Arial;
  font-size: 20px;
}
#menu ul, #menu li {
  margin: 0 auto;
  padding: 0;
  list-style: none
}
#menu ul {
  width: 100%;
}
#menu li {
  float: left;
  display: inline;
  position: relative;
}
#menu a {
  display: block;
  line-height: 65px;
  padding: 0 14px;
  text-decoration: none;
  color: #FFFFFF;
  font-size: 16px;
}
#menu a.dropdown-arrow:after {
  content: "\25BE";
  margin-left: 5px;
}
#menu li a:hover {
  color: #0099CC;
  background: #F2F2F2;
}
#menu input {
  display: none;
  margin: 0;
  padding: 0;
  height: 45px;
  width: 100%;
  opacity: 0;
  cursor: pointer
}
#menu label {
  display: none;
  line-height: 45px;
  text-align: center;
  position: absolute;
  left: 35px
}
#menu label:before {
  font-size: 1.6em;
  content: "\2261"; 
  margin-left: 20px;
}
#menu ul.sub-menus{
  height: auto;
  overflow: hidden;
  width: 170px;
  background: #444444;
  position: absolute;
  z-index: 99;
  display: none;
}
#menu ul.sub-menus li {
  display: block;
  width: 100%;
}
#menu ul.sub-menus a {
  color: #FFFFFF;
  font-size: 16px;
}
#menu li:hover ul.sub-menus {
  display: block
}
#menu ul.sub-menus a:hover{
  background: #F2F2F2;
  color: #444444;
}
@media screen and (max-width: 800px){
  #menu {position:relative}
  #menu ul {background:#111;position:absolute;top:100%;right:0;left:0;z-index:3;height:auto;display:none}
  #menu ul.sub-menus {width:100%;position:static;}
  #menu ul.sub-menus a {padding-left:30px;}
  #menu li {display:block;float:none;width:auto;}
  #menu input, #menu label {position:absolute;top:0;left:0;display:block}
  #menu input {z-index:4}
  #menu input:checked + label {color:white}
  #menu input:checked + label:before {content:"\00d7"}
  #menu input:checked ~ ul {display:block}
}

.custom-select {
  position: relative;
  display: block;
  max-width: 100%;
  min-width: 180px;
  margin: 0 auto;
  border: 1px solid #737373;
  background-color: #1a1a1a;
  z-index: 10;
}
.custom-select select {
  border: none;
  outline: none;
  background: transparent;
  -webkit-appearance: none;
  -moz-appearance: none;
  appearance: none;
  border-radius: 0;
  margin: 0;
  display: block;
  width: 100%;
  padding: 12px 55px 15px 15px;
  font-size: 14px;
  color: #b8b8b8;
}
.custom-select:after {
  position: absolute;
  right: 0;
  top: 0;
  width: 50px;
  height: 100%;
  line-height: 38px;
  content: "∨";
  text-align: center;
  color: #b8b8b8;
  font-size: 24px;
  border-left: 1px solid #707070;
  z-index: -1;
}

.button-submit {
  background-color: #1a1a1a;
  //font: normal 12px/150% Courier New, Courier, monospace;
  font-family: "Century Gothic", Arial;
  border: none;
  color: white;
  padding: 15px 32px;
  text-align: center;
  text-decoration: none;
  display: inline-block;
  font-size: 20px;
  width: 100%;
  border-radius: 10px;
}

.css-input-text {
     padding: 5px;
     font-size: 16px;
     border-width: 1px;
     border-color: #595959;
     background-color: #0f0f0f;
     color: #b9b9b9;
     border-style: solid;
     border-radius: 5px;
     box-shadow: 2px 3px 3px rgba(48,48,48,.39);
     text-shadow: 0px 0px 5px rgba(66,66,66,.75);
     width: 100%;
}
 .css-input-text:focus {
     outline:none;
}

p {
  font-size: 20px;
  color: #b9b9b9;
  }


)=====";
