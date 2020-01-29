# UltrasonicSensor
<t><b>An Arduino library that lets you easily use a digital ultrasonic distance sensor.</t></b>
<b><t>What is Ultrasonic Sensor?</t></b><br>
<p>An Ultrasonic sensor is a device that can measure the distance to an object by using sound waves. It measures distance by sending out a sound wave at a specific frequency and listening for that sound wave to bounce back. By measuring the time between the sending out and return, the sensor can calculate the distance to this object.
</p>
<b><t>When do we use this Sensor?</t></b><br>
<p>Basically, this sensor is the easiest and fastest way to get your project communicating with the outside world, and really feel what's going on out there.</p>
<p> Since the sensor can measure the distance to close objects without touching them, it is very useful for robotics, for example if you want your robot not to get stuck into things.</p>
<p>Other uses of the sensor are: as a button that does not need to be pressed to activate it, for motion detection, for measuring other water / liquid levels in the tank, or even for measuring distance, instead of using a ruler.</p>
<b><t>How to use it</t></b><br>
# <b>Creat a new sensor</b0>
<p> After including the 'Sensors' library, you can creat ultrasonic sensor like so:</br>
<pre><code>UltrasonicSensor MySensor(TrigPin, EchoPin);</code></pre></br>
This will make a new ultrasonic sensor named 'MySensor'. Insted of TrigPin end EchoPin write the number of the pins in the arduino which the 'trig' pin and the 'echo' pin in the sensor will be connected to, for example:
<pre><code>UltrasonicSensor MyOtherSensor(5,6);</code></pre>
# <b>Get a distance value from the sensor</b><br>
There are 2 optiones of getting this date from the sensor, the basic way is:</br>
<pre><code>float distance;
distance = MySensor.Get();</code></pre></br>
If, for some reason, you want more accurate information from the sensor, you can use the 'GetAvg' method, which checks the distance many times, then gives you the average of them:
<pre><code>distance = MySensor.GetAvg();</code></pre></br>
As a Default, 'GetAvg()' checks the distance 5 times befor returns the average, however you can control the number of distance-checks that will be made by the sensor:
<pre><code>distance = MySensor.GetAvg(8);
//8 checks will be made# </code></pre>
# <b>A simpler way to chek if you are about to crash into somthing</b></br>
Instead of examining the danger of collision the long way, for example:</br>
<pre><code>if(MySensor.Get() < 20.5)//if the distance is less then 20.5 sm
{
   *do somthing*
}</code></pre></br>
You can use the shorter way to check it:
<pre><code>if(MySensor.Blocked())
{
   *do somthing*
}
//'Blocked(number)' will chek if the sensor is blocked after getting the average distance</code></pre></br>
</br></br>
The default distance, which if the distance measured is less than the sensor is considered blocked, is 10 sm. However, you can change it, like so:
<pre><code>MySensor.StoppingDistance = 18;
//will set the default distance to 18 sm</code></pre>
