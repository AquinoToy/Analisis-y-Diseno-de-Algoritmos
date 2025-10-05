@echo off
setlocal enabledelayedexpansion

:: Crear carpeta de salida si no existe
if not exist salida (
    mkdir salida
)

:: Crear archivos de resultados

echo n,f(n) > salida\Test03_2.txt
:: Recorrer cada valor de n desde numeros.txt
for /f %%n in (numeros.txt) do (
    for /f %%r in ('Codigo_03.exe %%n') do echo %%n,%%r >> salida\Test03.txt
)

echo Resultados guardados en carpeta "salida"
pause