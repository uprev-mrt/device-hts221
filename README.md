<!DOCTYPE html>
<html>
<head>
  <title>HTS221 Device</title>
</head>
<body>
<div class="content">
<h1>HTS221 Device</h1>
<ul>
  <li> Generated with <a href="https://github.com/uprev-mrt/mrtutils/wiki/mrt-device">MrT Device Utility</a> </li>
  <li> Bus:  I2C</li>
  <li>Datasheet: <a href="https://www.st.com/content/ccc/resource/technical/document/datasheet/4d/9a/9c/ad/25/07/42/34/DM00116291.pdf/files/DM00116291.pdf/jcr:content/translations/en.DM00116291.pdf">https://www.st.com/conte...</a> </li>
  <li> DigiKey: <a href="https://www.digikey.com/products/en?KeyWords=497-15382-1-ND">497-15382-1-ND</a></li>
  <li> I2C Address: 0xBE</li>
</ul>
<hr/>
<h2>Description: </h2>
<p>Humidity and Temperature Sensor</p>

<br/>


<hr class="section">
<h2 class="right"> Register Map</h2>
<hr class="thick">

<table class="fields">
    <tr>
        <th>Name</th>
        <th>Address</th>
        <th>Type</th>
        <th>Access</th>
        <th>Default</th>
        <th>Description</th>
    </tr>
    <tr>
        <td><a href="#register_who_am_i_detail">WHO_AM_I</a></td>
        <td>0x0F</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0xBC</td>
        <td>Id Register</td>
    </tr>
    <tr>
        <td><a href="#register_av_conf_detail">AV_CONF</a></td>
        <td>0x10</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x1B</td>
        <td>Humidity and temperature resolution mode</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl1_detail">CTRL1</a></td>
        <td>0x20</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Control register 1</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl2_detail">CTRL2</a></td>
        <td>0x21</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Control register 2</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl3_detail">CTRL3</a></td>
        <td>0x22</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Control register 3</td>
    </tr>
    <tr>
        <td><a href="#register_status_detail">STATUS</a></td>
        <td>0x27</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>Status register</td>
    </tr>
    <tr>
        <td><a href="#register_humidity_out_detail">HUMIDITY_OUT</a></td>
        <td>0x28</td>
        <td>int16_t</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Relative humidity data</td>
    </tr>
    <tr>
        <td><a href="#register_temp_out_detail">TEMP_OUT</a></td>
        <td>0x2A</td>
        <td>int16_t</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Temperature data</td>
    </tr>
    <tr>
        <td><a href="#register_h0_rh_x2_detail">H0_rH_x2</a></td>
        <td>0x30</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>Calibration data</td>
    </tr>
    <tr>
        <td><a href="#register_h1_rh_x2_detail">H1_rH_x2</a></td>
        <td>0x31</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>Calibration data</td>
    </tr>
    <tr>
        <td><a href="#register_t0_degc_x8_detail">T0_DEGC_x8</a></td>
        <td>0x32</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>Calibration data</td>
    </tr>
    <tr>
        <td><a href="#register_t1_degc_x8_detail">T1_DEGC_x8</a></td>
        <td>0x33</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>Calibration data</td>
    </tr>
    <tr>
        <td><a href="#register_t1t0_msb_detail">T1T0_MSB</a></td>
        <td>0x35</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>Calibration data</td>
    </tr>
    <tr>
        <td><a href="#register_h0_t0_out_detail">H0_T0_OUT</a></td>
        <td>0x36</td>
        <td>int16_t</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Calibration data</td>
    </tr>
    <tr>
        <td><a href="#register_h1_t0_out_detail">H1_T0_OUT</a></td>
        <td>0x3A</td>
        <td>int16_t</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Calibration data</td>
    </tr>
    <tr>
        <td><a href="#register_t0_out_detail">T0_OUT</a></td>
        <td>0x3C</td>
        <td>int16_t</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Calibration data</td>
    </tr>
    <tr>
        <td><a href="#register_t1_out_detail">T1_OUT</a></td>
        <td>0x3E</td>
        <td>int16_t</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Calibration data</td>
    </tr>

</table>



<hr class="section">
<h2 class="right"> Registers</h2>
<hr class="thick">



<div id="register_who_am_i_detail" class="packet">
<h2>WHO_AM_I </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0F]</b></li>
    <li class="note">  Default: <b>[0xBC]</b></li>
</ul>

<p>Id Register</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>
<div id="register_av_conf_detail" class="packet">
<h2>AV_CONF </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x10]</b></li>
    <li class="note">  Default: <b>[0x1B]</b></li>
</ul>

<p>Humidity and temperature resolution mode</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>
<div id="register_ctrl1_detail" class="packet">
<h2>CTRL1 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x20]</b></li>
    <li class="note">  Default: <b>[0x00]</b></li>
</ul>

<p>Control register 1</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>
<div id="register_ctrl2_detail" class="packet">
<h2>CTRL2 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x21]</b></li>
    <li class="note">  Default: <b>[0x00]</b></li>
</ul>

<p>Control register 2</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>
<div id="register_ctrl3_detail" class="packet">
<h2>CTRL3 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x22]</b></li>
    <li class="note">  Default: <b>[0x00]</b></li>
</ul>

<p>Control register 3</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>
<div id="register_status_detail" class="packet">
<h2>STATUS </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x27]</b></li>
    <li class="note">  Default: <b>[0x00]</b></li>
</ul>

<p>Status register</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>
<div id="register_humidity_out_detail" class="packet">
<h2>HUMIDITY_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x28]</b></li>
</ul>

<p>Relative humidity data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>
<div id="register_temp_out_detail" class="packet">
<h2>TEMP_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x2A]</b></li>
</ul>

<p>Temperature data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>
<div id="register_h0_rh_x2_detail" class="packet">
<h2>H0_rH_x2 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x30]</b></li>
</ul>

<p>Calibration data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>
<div id="register_h1_rh_x2_detail" class="packet">
<h2>H1_rH_x2 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x31]</b></li>
</ul>

<p>Calibration data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>
<div id="register_t0_degc_x8_detail" class="packet">
<h2>T0_DEGC_x8 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x32]</b></li>
</ul>

<p>Calibration data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>
<div id="register_t1_degc_x8_detail" class="packet">
<h2>T1_DEGC_x8 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x33]</b></li>
</ul>

<p>Calibration data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>
<div id="register_t1t0_msb_detail" class="packet">
<h2>T1T0_MSB </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x35]</b></li>
</ul>

<p>Calibration data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>
<div id="register_h0_t0_out_detail" class="packet">
<h2>H0_T0_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x36]</b></li>
</ul>

<p>Calibration data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>
<div id="register_h1_t0_out_detail" class="packet">
<h2>H1_T0_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x3A]</b></li>
</ul>

<p>Calibration data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>
<div id="register_t0_out_detail" class="packet">
<h2>T0_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x3C]</b></li>
</ul>

<p>Calibration data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>
<div id="register_t1_out_detail" class="packet">
<h2>T1_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x3E]</b></li>
</ul>

<p>Calibration data</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
</table>

</div>
</body>
<style>
table.fixed { table-layout:auto; }
table.fixed td { overflow:visible; }

table.fields{
  table-layout:auto;
}

body {
  padding:0;
}

.content{
  padding-top: 0;
  padding-left: 1%;
  padding-right: 1%;
  background-color: #fff;
}

@media print {
  .packet {
    page-break-inside: avoid;
    padding-top: 4px;
  }
  .content{
    width: 100%;
  }
  body{
    background-color: #fff;
  }
}

@media screen {
  .content{
    width: 50%;
    margin-left: auto;
    margin-right: auto;
    margin-top: 0;
    padding-top: 4px;
    box-shadow: 5px 10px #AAA;
  }

  body{
    background-color: #ccc;
    padding: 0;
  }
}

html *{
  font-size: 1em ;
   color: #000 ;
  font-family: Arial ;
}

hr.section {
  border-style: solid;
  border-width: 2px;
  opacity: 1;
}


hr.thick {
  border-style: solid;
  border-width: 1px;
  border-color: #94b2d3;
  opacity: 1;
}

hr {
  opacity: 0.5;
}

table {
  border-collapse: collapse;
}

td {
  border: 1px solid #000000;
  text-align: left;
  padding: 5px;
  vertical-align: top;
}

.smallCell
{
    width: 1px;
    white-space: nowrap;
}

td.zero{
  background-color: #ce927e;
}

td.one{
  background-color: #98cd98;
}

td.empty{
  background-color: #cccccc;
}

td.field{
  width: 1px;
  white-space: nowrap;
  text-align: center;
}

.desc{
  font-size: 1.2em;
}

th {
  border: 1px solid #000000;
  text-align: left;
  padding: 5px;
  background-color: #94b2d3;
}

li.val{
  opacity: 0.6;
}

h1{
  font-size: 2.0em;
}

h2 
{
  font-size: 1.3em;
}

h2.right{
  text-align: center;
  font-size: 1.3em;
}

h3
{
  font-size: 1.8em;
  color: #003366;
}

h4 
{
  font-size: 1.1em;
  color: #003366;
}


.note{
  font-style: italic;
  opacity: 0.6;
}

a{
  text-decoration:none;
}

a:link {
  color: blue;
}

/* visited link */
a:visited {
  color: blue;
}

table.fixed tr td:last-child{
    width:1%;
    white-space:nowrap;
}
</style>
</html>