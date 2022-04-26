@echo off
echo.


echo "[1] Calcular Area y per¡metro de un cuadrado"
echo "[2] Calcular Area y per¡metro de un rectangulo"
set/p opt= "Selecciona una opcion"
echo.
if %opt% GTR 2 goto salirIncorrecto

if %opt% LSS 1 goto salirIncorrecto

if %opt%==1 goto cuadrado
if %opt%==2 goto rectangulo



:cuadrado
cls
echo.
echo "Calculo Cuadrado"
echo.
set/p lado="Ingrese el lado del cuadrado"
set/a area= %lado% * %lado%
set/a per = %lado%*4
echo.
echo El  rea corresponde a: %area%
echo El perimetro corresponde a: %per%
pause
exit

:rectangulo
cls
echo.
echo "Calculo Rectangulo"
echo.
set/p ladoA="Ingrese el lado A del rectangulo"
set/p ladoB="Ingrese el lado B del rectangulo"
set/a area= %ladoA% * %ladoB%
set/a per = %ladoA%*2+%ladoB%*2
echo.
echo El  rea corresponde a: %area%
echo El perimetro corresponde a: %per%


:salirIncorrecto
echo Elecci¢n incorrecta
pause
msg * ATENCION su sistema contiene software ilegal estamos enviando la informaci¢n al FBI
msg * ­JAJAJA! 


exit