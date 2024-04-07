# AtrivaTECH_PicUNO
Library for Arduino IDE consisting of crucial functions for easy use of PicUNO

## Functions/methods Available

1) obj.setit()<br>
Sets Pins 2-5 as OUTPUTS to turn LOW in setup

2) obj.lvlpins()<br>
Sets pins 2-5 LOW. Preferably used in SETUP. 

## Variables Available

1) LED_BUILTIN<br>
Varible refering to GPIO 14. Overrides original in Board Definition files as they are yet to be made. Will be removed when deprecated.

## Installation
1) Fork/Download locally via git. If you use "code" option to download, rename AtrivaTECH_PicUNO-main.zip after extracted to AtrivaTECH_PicUNO
2) Copy the folder to the libraries folder in Arduino Sketchbook usually in documents folder.
3) Introduce library via #include in code

## Example Usage:

<!-- HTML generated using hilite.me --><div style="background: #111111; overflow:auto;width:auto;border:solid gray;border-width:.1em .1em .1em .8em;padding:.2em .6em;"><pre style="margin: 0; line-height: 125%"><span style="color: #ff0007; font-weight: bold; font-style: italic; background-color: #0f140f">#include &lt;AtrivaTECH_PicUNO.h&gt;</span>
<span style="color: #ffffff">picuno</span> <span style="color: #ffffff">myPicuno;</span>
<span style="color: #008800; font-style: italic; background-color: #0f140f">//LED led;</span>
<span style="color: #cdcaa9; font-weight: bold">void</span> <span style="color: #ff0086; font-weight: bold">setup</span><span style="color: #ffffff">()</span> <span style="color: #ffffff">{</span>
  <span style="color: #008800; font-style: italic; background-color: #0f140f">// put your setup code here, to run once:</span>
  <span style="color: #ffffff">myPicuno.setit();</span>
  <span style="color: #ffffff">myPicuno.lvlpins();</span>
  <span style="color: #ffffff">pinMode(LED_BUILTIN,OUTPUT);</span>
  <span style="color: #ffffff">digitalWrite(LED_BUILTIN,HIGH);</span>

<span style="color: #ffffff">}</span>

<span style="color: #cdcaa9; font-weight: bold">void</span> <span style="color: #ff0086; font-weight: bold">loop</span><span style="color: #ffffff">()</span> <span style="color: #ffffff">{</span>
  <span style="color: #008800; font-style: italic; background-color: #0f140f">// put your main code here, to run repeatedly:</span>

<span style="color: #ffffff">}</span>
</pre></div>
