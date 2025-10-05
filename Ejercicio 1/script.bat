@echo off
setlocal enabledelayedexpansion

:: Crear carpeta de salida si no existe
if not exist salida (
    mkdir salida
)

:: Crear archivos de resultados
echo n,f(n) > salida\Test01.txt
echo n,f(n) > salida\Test02.txt
echo n,f(n) > salida\Test03.txt
echo n,f(n) > salida\Test04.txt
echo n,f(n) > salida\Test05.txt

:: Recorrer cada valor de n desde numeros.txt
for /f %%n in (numeros.txt) do (
    for /f %%r in ('Codigo_01.exe %%n') do echo %%n,%%r >> salida\Test01.txt
    for /f %%r in ('Codigo_02.exe %%n') do echo %%n,%%r >> salida\Test02.txt
    for /f %%r in ('Codigo_03.exe %%n') do echo %%n,%%r >> salida\Test03.txt
    for /f %%r in ('Codigo_05.exe %%n') do echo %%n,%%r >> salida\Test05.txt
)

echo Resultados guardados en carpeta "salida"
pause