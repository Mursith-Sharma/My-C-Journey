<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

<h1>Global Variable</h1>
<?php
$x = 5; // global variable

function myexm() 
{
  global $x; // bring global $x into local scope
  echo "<p>Variable x inside function is: $x</p>";
}
myexm();

echo "<p>Variable x outside function is: $x</p>";
?>


<h1>Global Variable</h1>
<?php
echo "This ", "string ", "was ", "made ", "with multiple parameters.";

$txt1 = "Learn PHP";
$txt2 = "W3Schools.com";
echo "<h2>$txt1</h2>";
echo "<p> output is $txt2 </p>";

echo "<br><br><br><h1>PHP echo and print Statements</h1><br><br>";             // echo inai polathan print um 2 um same

$txt1 = "Learn PHP";
$txt2 = "W3Schools.com";
echo ". $txt1 ." ;
echo '<p>Study PHP at ' . $txt2 . '</p>';

$txt1 = "Learn PHP";
$txt2 = "W3Schools.com";
print ". $txt1 ." ;
print '<p>Study PHP at ' . $txt2 . '</p>';

echo "<br><br><br><h1>PHP Integer string float </h1><br><br>";            

$x = "Hello world!";                         //  string
echo($x);
echo "<br>";

$y = 10;                                     //  integer
echo($y);
echo "<br>";

$z = 10.365;                                 //  float
echo($z);
echo "<br>";

$cars = array("Volvo","BMW","Toyota");       //  arrays
var_dump($cars);                             // var dump patri 718 vathu line il ullathu


$n = "Hello world!";
$n = null;                                  // null value 
echo ($n);
echo "<br>";
                                           //Double or Single Quotes
echo "Hello";
echo "<br>";
echo 'Hello';
echo "<br>";

$b = true;                                            // boolean
var_dump($x); 
echo "<br>";

$b = "true";                                        // string
var_dump($x); 
echo "<br>";

$x = "John";                                        // double quote
echo "The Leader is $x";
echo "<br>";

$y = "John";                                         //single quote
echo 'The Leader is $y';                            // $y print aagathu so double quote is must used.
echo "<br>"; 

$txt1 = "W3Schools.com";
echo '<h2> Study PHP at' . $txt1 . '</h2>';         //single quote
echo "<h2>Study PHP at $txt1 </h2>";                // double quote
echo "<br>"; 

echo strlen("Hello world!");                       // string leangth
echo "<br>";  

echo str_word_count("Hello world!");
echo "<br>"; 

$x = "Hello World!";                             // uppercase
echo strtoupper($x);
echo "<br>"; 

$x = "Hello World!";                           // lowercase
echo strtolower($x);
echo "<br>"; 

$x = "Hello World!";                           // string replace
echo str_replace("World", "Dolly", $x);
echo "<br>"; 

$x = "Hello World!";
echo strrev($x);                              // string reverse
echo "<br>"; 

$x = "Hello";
$y = "World";                                 // "Hello World!"
$z = $x . " " . $y;
echo $z;                                     
echo "<br>";                                

$x = "Hello World!";                          // start_position = 6 inai thandi தொடங்கும், ஆகவே இது 7வது எழுத்திலிருந்து தொடங்கும்.
echo substr($x, 6, 5);                        // length = 5 → அடுத்த 5 எழுத்துக்களை மட்டும் எடுக்க வேண்டும் என்று கூறுகிறது.
echo "<br>";  

$x = "Hello World!";
echo substr($x, 6);
echo "<br>";

$x = "Hello\nWorld";                          // new line
echo $x;
echo "<br>";

$x = "Escape php variable name \$myvar";        //variables
echo $x;
echo "<br>";

$x = "We are the so-called \"Vikings\" from the north.";        //double quote
echo $x;
echo "<br>";

$x = "\110\145\154\154\157";                   //octal value
echo $x;
echo "<br>";

$x = "\x48\x65\x6c\x6c\x6f";                   // hex value
echo $x;
echo "<br>";

$a = 5;                                        // data type 
$b = 5.34;
$c = "25";
var_dump($a);
var_dump($b);
var_dump($c);
echo "<br>";
 
$x = 59;                                       //Check if the type of a variable is integer aah enpathai true or false il tharum
var_dump(is_int($x));                          // same like is_float() , is_double()
$x = 59.85;
var_dump(is_int($x));
echo "<br>";

###########################################################################################################

$a = 5;                   // Integer          // find integer
$b = 5.34;                // Float
$c = "25 kilometers";     // String
$d = "kilometers 25";    // String
$e = "hello";            // String
$f = true;               // Boolean
$g = NULL;              // NULL
echo "<br>";

$a = (int) $a;
$b = (int) $b;
$c = (int) $c;
$d = (int) $d;
$e = (int) $e;
$f = (int) $f;
$g = (int) $g;
echo "<br>";

var_dump($a);
var_dump($b);
var_dump($c);
var_dump($d);
var_dump($e);
var_dump($f);
var_dump($g);
echo "<br>";

// int(5)                       Answers
// int(5)
// int(25)
// int(0)
// int(0)
// int(1)
// int(0)

###########################################################################################################

//   same like answers float but 5.34 mattum sariyaga print aagum

###########################################################################################################

$a = 5;       // Integer                   // find boolean
$b = 5.34;    // Float
$c = 0;       // Integer
$d = -1;      // Integer
$e = 0.1;     // Float
$f = "hello"; // String
$g = "";      // String
$h = true;    // Boolean
$i = NULL;    // NULL
echo "<br>";

$a = (bool) $a;
$b = (bool) $b;
$c = (bool) $c;
$d = (bool) $d;
$e = (bool) $e;
$f = (bool) $f;
$g = (bool) $g;
$h = (bool) $h;
$i = (bool) $i;
echo "<br>";

var_dump($a);
var_dump($b);
var_dump($c);
var_dump($d);
var_dump($e);
var_dump($f);
var_dump($g);
var_dump($h);
var_dump($i);
echo "<br>";

###########################################################################################################
                              
// bool(true)                            // answer
// bool(true)       
// bool(false)
// bool(true)
// bool(true)
// bool(true)
// bool(false)
// bool(true)
// bool(false)
 
$a = 5;       // Integer                      // find array
$b = 5.34;    // Float
$c = "hello"; // String
$d = true;    // Boolean
$e = NULL;    // NULL
echo "<br>";

$a = (array) $a;
$b = (array) $b;
$c = (array) $c;
$d = (array) $d;
$e = (array) $e;
echo "<br>";

var_dump($a);
var_dump($b);
var_dump($c);
var_dump($d);
var_dump($e);
echo "<br>";

###########################################################################################################

// stntex =>>    define(name, value);

define("god", "Welcome to W3Schools.com!");               // define
echo god; 
echo "<br>";

const god2="Welcome to W3Schools.com!";                   // const
echo god2;                                                //const - cannot be created inside another block scope   
echo "<br>";                                              // define - can be created inside another block scope
 
define("cars", [ "supra", "BMW","Toyota"]);               // const array
echo cars[2];
echo "<br>"; 

echo(rand(10, 100));                                     // random aaha numbers uruvakkum (rendom passwd)
echo "<br>"; 

$cars = array("Volvo", "BMW", "Toyota");                 // array use pannal ivvaru code panna vendum
var_dump($cars);

$cars = ["Volvo", "BMW", "Toyota"];                      // array use pannamal ivvaru code pannalam. so ivvirandu muraiyilum array mantioon panlam
var_dump($cars);

###########################################################################################################

// Assignment Operators 

// x += y	   or     x = x + y	Addition	
// x -= y	   or     x = x - y	Subtraction	
// x *= y    or   	x = x * y	Multiplication	
// x /= y	   or     x = x / y	Division	
// x %= y	   or     x = x % y	Modulus

// Comparison Operators

// ==	      Equal         	$x == $y	  
// ===	    Identical	      $x ===  
// !=      	Not equal	      $x != $y	 
// <>	      Not equal      	$x <> $y	  	
// !==	    Not identical	  $x !== $y	 	  
// <=>	    Spaceship	      $x <=> $y

// ++$x	  Pre-increment	       
// $x++	  Post-increment	   
// --$x	  Pre-decrement	     
// $x--  	Post-decrement

if (5 > 3)                                          // if
{
  echo "Have a good day!";
}
echo "<br>"; 


$t = 14;                                             // if else 
if ($t == 14) 
{
  echo "Have a good day!";
}
echo "<br>"; 


$t = 10 ;                                          // nested if else
if ($t < "10") 
{ echo "Have a good morning!"; } 
elseif ($t < 20) 
{ echo "Have a good day!"; } 
else 
{ echo "Have a good night!"; }
echo "<br>"; 

$a = 13;                                          // short hand
$b = $a < 10 ? "Hello" : "Good Bye";                       // ? enpathu if enavum ( true ) , : enpathu else enavum ( false ) eduththukkollum
echo $b;
echo "<br>"; 


$s = 13;                                           // nested if
if ( 10 < $s)
{
     echo "13 number is - >";
   if( 7 > $s)
      echo "false";

   if( 23 > $s)
      echo "true";
}
echo "<br>"; 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

$pwd = 20;                                        // password valid 
if (8 <= $pwd && $pwd <= 16)
  echo "password success";
else 
  echo "password not valid";
echo "<br>"; 


$pd = "hhddu&*6hddu&*6ddu&*6";                                  // password length inai kandpidiththal
$ln = strlen($pd);
if (8 <= $ln)
  {
    if($ln <= 16)
    echo "password success ";
    else 
    echo "password too long";
  }
else
    echo "password too short";
echo "<br>"; 

$favcolor = "red";

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

switch ($favcolor)                                  
{                                                    //Switch
  case "red":
    echo "Your favorite color is red!";
    break;
  case "blue":
    echo "Your favorite color is blue!";
    break;
  case "green":
    echo "Your favorite color is green!";
    break;
  default:
    echo "Your favorite color is neither red, blue, nor green!";
}
echo "<br>"; 

$d = 4;

switch ($d) {
  case 6:
    echo "Today is Saturday";
    break;
  case 0:
    echo "Today is Sunday";
    break;
  default:
    echo "Looking forward to the Weekend";
}
echo "<br>";

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

$i = 1;                                                  // while loob
while ($i < 6) 
{
  echo $i;
  $i++;
} 
echo "<br>";

$i = 1;
while ($i < 6) 
{
  if ($i == 3) break;                                   // $i 3 aagumpothu break aaga vendum
  echo $i;
  $i++;
} 
echo "<br>";

$i = 1;                                                 // alternative syntex
while ($i < 6):
  echo $i;
  $i++;
endwhile;
echo "<br>";

$i = 10;                                                  // i = i + 1 --->  10 +20 = 30
$i += 20;
echo $i;
echo "<br>";

$i = 0;                                                   //
while ($i < 100) 
{
  $i+=10;
  echo "$i<br>";
}
echo "<br>";

$i = 1;                                                   // do while print panniyapinthan condition cheak pannum
do {
  echo $i;
  $i++;
} while ($i < 6);
echo "<br>";


for ($x = 0; $x <= 10; $x++)                               // foor loob ///////////////////////////////////////////////
{
  echo "The number is: $x <br>";
}
echo "<br>";

$i = 0;                                                   // add 0 to 50 numbers
for ($x = 0; $x <= 50; $x++) 
{
  $i += $x;
}
echo $i;
echo "<br>";

for ($x = 0; $x <= 8; $x++) {                              //half pyramit using for loob
  for($y = 0; $y <=$x; $y++){
     echo "*";
  }
  echo"<br>";
}
echo "<br>";

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

function myMessage() {                                     // function call
  echo "Hello world!";
}
myMessage();
echo "<br>";

function familyName($fname) {                              // function argument
  echo "$fname Refsnes.<br>";
}
familyName("Jani");
familyName("Hege");
familyName("Stale");
familyName("Kai Jim");
familyName("Borge");
echo "<br>";

function familyNme($fnme, $year) {
  echo "$fnme Refsnes. Born in $year <br>";
}
familyNme("Hege","1975");
familyNme("Stale","1978");
familyNme("Kai Jim","1983");
echo "<br>";
 
function sum($x, $y) {                                      // returning function
  $z = $x + $y;
  return $z;
}
echo sum(5,10) . "<br>";
echo sum(7,13) . "<br>";
echo sum(2,4)  . "<br>";
echo "<br>";

function add_five(&$value) {                                // function variable pass
  $value += 5;
}
$num = 2;
add_five($num);
echo $num;
echo "<br>";

function sumMyNumbers(...$x) {                              // multiple argument sent pannal
  $n = 0;                                                  // ...$x என்பது variadic parameter. ...$x என்பதன் மூலம்:எத்தனை values வேண்டுமானாலும் function-க்கு அனுப்பலாம்
  $len = count($x);                                       // அந்த values எல்லாம் ஒரு array ஆக function-க்குள் கிடைக்கும்
  for($i = 0; $i < $len; $i++) {                          // 5, 2, 6, 2, 8, 7 intha numbers ellame ...$x ku argument aaga anuppi athil array aaga semikkapadukirathu
    $n += $x[$i];                                         //count ittal eththanai argument entru enni athai $len kkul anuppum
  }                                                       // $n += $x[$i]  --->   $n = $n + $x[$i];
  return $n;
}
$a = sumMyNumbers(5, 2, 6, 2, 8, 7);
echo $a;
echo "<br>";
                                                          // $i = 0
                                                          // $x[0] = 5
                                                          // $n = $n + $x[0] = 0 + 5 = 5
                                                          // $x[1] = 2                   ivvaru serkkappattu iruthiyil 30 aakirathu


function myFamily($lastname, ...$firstname) {              // "Jane", "John", "Joey" ithu 3 um ...$firstname kku argument aaga pass aagum
  $txt = "";
  $len = count($firstname);                               // ..$firstname intha multi argument final than kodukka vendum 1st il kodukka koodathu
  for($i = 0; $i < $len; $i++) {
    $txt = $txt."Hi, $firstname[$i] $lastname.<br>";
  }
  return $txt;
}
$a = myFamily("Doe", "Jane", "John", "Joey", "123 ");
echo $a;
echo "<br>";

// function addNumbers(int $a, int $b) {                         ithil integer 5 um , string add aahi 10 output varukirathu ithu sometimes bugs aaha maarividum bcz ithu 2 umveru veru data type
//   return $a + $b;                                             so intha error i thavirkka strict type use pannuvom
// }
// echo addNumbers(5, "5 days"); 
// echo "<br>";
//////////////////////////////////////////////////////////////

// declare(strict_types=1);                                       strict requirement idumpothu athan data type um mantion panna vendum
// function addNumbers(int $a, int $b) {                          so int + string add aagathu so intha code wrong
//   return $a + $b;
// }
// echo addNumbers(5, "5 days"); 
echo "<br>";


function myTest() {                                           // local scope aanathu function kkul iruppathai maththiram print pannum
  $x = 5; // local scope                                     
  echo "<p>Variable x inside function is: $x</p>";
}
myTest();
echo "<p>Variable x outside function is: $x</p>";
echo "<br>";


$x = 5; // global scope                                         // global scope function kku veliye iruppathai maththiram print pannum
function my() {
  echo "<p>Variable x inside function is: $x</p>";               
} 
my();
echo "<p>Variable x outside function is: $x</p>";
echo "<br>";

$x = 5;
function Test() {                                              // avvaru function kkul iruppathai print panna vendumaanal function kkul global varible i mantion panna vendum
  global $x;
  echo "<p>Variable x inside function is: $x</p>";
}
Test();
echo "<p>Variable x outside function is: $x</p>";
echo "<br>";


$x = 5;                                                         // same like
function myfunction() {                               
  echo $GLOBALS['x'];
}
myfunction();
echo "<br>";


$x = 5;
$y = 10;
function mine() {
  $GLOBALS['y'] = $GLOBALS['x'] + $GLOBALS['y'];                 // global use pannal variable declar pannavendum (global $x;) ivvaru
}                                                                // but GLOBALS kku ['x'] ivvaruthan variable declar pannuvom
echo $y;
echo "<br>";

function messi() {                                              // ithil 0 1 2 vara kaaranam loob run aagavillai ( full reason in my notebook)
  static $x = 0;
  echo $x;
  $x++;
}
messi();
echo "<br>";
messi();
echo "<br>";
messi();
echo "<br>";

function addf(&$value) {                                    // & vara kaaranam point pannuvathatku (reference pannuvathatku)
  $value += 5;
}
$num = 2;
addf($num);
echo $num;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// PHP Superglobals
// $GLOBALS
// $_SERVER
// $_REQUEST
// $_POST
// $_GET
 
$x = 100;                                                        // GLOBALS
echo $GLOBALS["x"];
echo $x;
echo "<br>";

function myfun() {
  $GLOBALS["x"] = 100;
}
myfun();
echo $x;
echo "<br>";

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

$cars = array("Volvo", "BMW", "Toyota");                 // array use pannal ivvaru code panna vendum
var_dump($cars);
echo "<br>";

$cars = ["Volvo", "BMW", "Toyota"];                      // array use pannamal ivvaru code pannalam. so ivvirandu muraiyilum array mantioon panlam
var_dump($cars);
echo "<br>";

$arr = [10,20,30,40];                                    // array ilullavatrai ovvontraga print panna
echo $arr[2];
echo " Answer"."<br>";
for($i=0 ; $i<5; $i++)
printf("%d <br> ",$arr[$i]);    // or -->>   echo "<br>",$arr[$i]. "<br>";
echo "<br>";

$dummy =[10,30,50,70];
$yepp =["Volvo",20, 0.23, "BMW",0xff, "Toyota",true ,$dummy];          //ivvaru array il innoru array inaium mantion pannalam , 0xff thu hexadecimal value
for ($i = 0; $i<8; $i++){
echo $yepp[$i]."<br>";
}
echo "<br>";

$dumm =[10,30,50,70];
$yep =["Volvo",20, 0.23, "BMW",0xff, "Toyota",true ,$dumm]; 
var_dump($yep);
echo "<br>";

$dum =[10,30,50,70];
$yeb =["Volvo",20, 0.23, "BMW",0xff, "Toyota",true ,$dum];         // gettype use pannuvathal data type inai ariyalam but ithu perithaga use pannuvathillai
for($i=0;$i<8;$i++){
echo gettype ($yeb[$i]) . "<br>";
}
echo "<br>";

// 🎯 echo vs var_dump
// Function	             Shows	                       Useful For
// echo	             Just the value	             Display simple output
// var_dump	         Type + Value + Length	     Debugging and inspection

$car = array("Volvo", "BMW", "Toyota");                            // array edit or replace usinindex
$cars[2] = "Ninja";
var_dump($car);
echo "<br>";

$cars[0] = "Volvo";                                                // puthithaga data inai add pannalam
$cars[1] = "BMW";
$cars[2] = "Toyota";
array_push($cars, "Ford");
var_dump($cars);

$car = array("brand"=>"Ford", "model"=>"Mustang", "year"=>1964);
var_dump($car);
echo "<br>";

//Answer here                                                       
// array(3)                             # var_dump aanathu output il athan data type ,length , index pontravatrai print pannum 
// {                                      ithil index ( [0] ) ivvaru continiue aagum intha index aanathu default aaga iruk0,1,2 ena varum
//   [0]=>                                but ithatku pathilaga naam key kodukkalam athaippatri paarpom
//   string(5) "Volvo"
//   [1]=>
//   string(3) "BMW"
//   [2]=>
//   string(6) "Toyota"
// }
echo "<br>";


$car = array("brand"=>"Ford", "model"=>"Mustang", "year"=>1964);      // default aaga varum index kku pathilaka naam key set pannalam
var_dump($car);
echo "<br>";

// array(3) 
// {
//   ["brand"]=>                    brand enpathu key aagum
//   string(4) "Ford"
//   ["model"]=>
//   string(7) "Mustang"
//   ["year"]=>
//   int(1964)
// }
echo "<br>";

/////////////////////////////////////////////////////

$dumpp = [10,20,30];
$ar = ["one" => "Ford", 
        "two" => "Mustang", 
        "three" => "1964",
        "four" => 012,
        "five" => true,
        "six" => "3.4",
            4 => 0xff,
            9 => $dumpp,];

echo $ar["one"]."<br>";
echo $ar[4]."<br>";
echo $ar["five"]."<br>"."<br>"."<br>";

var_dump($ar);
echo "<br>";

/////////////////////////////////////////////////////

$cars = array("Volvo", "BMW", "Toyota");                          //// array edit or replace usin key value
$cars[1] = "Ford";
var_dump($cars);
echo "<br>";

$car = array("brand"=>"Ford", "model"=>"Mustang", "year"=>1964);          //foreach method moolam ilaguvaka call panlam ( $x => $y )     key => value
foreach ($car as $x => $y) 
{
  echo "$x: $y <br>";
}
echo "<br>";

$car = array("brand"=>"Ford", "model"=>"Mustang", "year"=>1964);
foreach ($car as $x => $y) 
{
  echo "$x $y <br>";
}
echo "<br>";

// $cars = ["Volvo", "BMW", "Toyota"];                       2 methods of array create
// $cars = array("Volvo", "BMW", "Toyota");
echo "<br>";

// $myArr = [];                             declar emty arry
// $myArr[0] = "apples";                    declar using index
// $myArr[1] = "bananas";
// $myArr["fruit"] = "cherries";            declar using key
echo "<br>";

$cars = array("Volvo", "BMW", "Toyota");                             // update & change array
foreach ($cars as &$x) {                                             // & use pannal code il migavum avathanamaga code pannavendum
  $x = "Ford";
}
unset($x);
var_dump($cars);
echo "<br>";

$cars = array("Volvo", "BMW", "Toyota");                              // array delete 
array_splice($cars, 1, 2);                                            // "Volvo", "BMW", "Toyota"
var_dump($cars);                                          // 1,2 entral     0  ,   1   ,    2      ithil 1 il irunthu 2 element pogum 
echo "<br>";                                             // athavathu 1 il bmw ullathu athilirunthu 2 element entral bmw & toyota delete aagum

$cars = array("Volvo", "BMW", "Toyota");                             // array delete mthod  2
unset($cars[1]);
var_dump($cars);
echo "<br>"; 

$cars = array("brand" => "Ford", "model" => "Mustang", "year" => 1964);            //$cars ilulla array inai delete pannamal athilulla datavinai 
$newarray = array_diff($cars, ["Mustang", 1964]);                                  // copy pannumpothu "Mustang", "year" => 1964 enum datainai aliththuvittu newarray il puthithaga add pannuhirathu
var_dump($newarray);
echo "<br>"; 

$cars = array (                                                     // 2d array
  array("Volvo",22,18),
  array("BMW",15,13),
  array("Saab",5,2),
  array("Land Rover",17,15)
);
echo $cars[0][0].": In stock: ".$cars[0][1].", sold: ".$cars[0][2].".<br>";
echo $cars[1][0].": In stock: ".$cars[1][1].", sold: ".$cars[1][2].".<br>";
echo $cars[2][0].": In stock: ".$cars[2][1].", sold: ".$cars[2][2].".<br>";
echo $cars[3][0].": In stock: ".$cars[3][1].", sold: ".$cars[3][2].".<br>";
echo "<br>"; 
 
$str = "The rain in SPAIN falls mainly on the plains.";                       // pregex enpathu data inai marge panni parrppathatku pala vidayangalukku use agum
$pattern = "/ain/i";                                                          //already signup panniya website il login pannumpothu database ilulla signup details um login details um correct aah ena parkum
echo preg_match_all($pattern, $str);
echo "<br>"; 
echo "<br>"; 

////////////////////////////////////////////////////////////////////////////////////////////












?>


</body>
</html>