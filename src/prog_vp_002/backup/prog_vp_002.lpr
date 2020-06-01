{%RunFlags MESSAGES+}
program prog_vp_002;
{*
  prog_vp_002
  Función con bucle for que suma los n primeros numeros.
*}
function suma_n_enteros( n : integer ) : integer;
var
   suma, i : integer;
begin
    suma := 0;
    for i := 1 to n do
    begin
         suma := suma + i;
    end;
    suma_n_enteros := suma;
end;

var
   suma, n : integer;
begin
     n := 50;
     suma := suma_n_enteros(n);
     WriteLn('La suma de los ',n,' primeros enteros es ',suma);
end.

