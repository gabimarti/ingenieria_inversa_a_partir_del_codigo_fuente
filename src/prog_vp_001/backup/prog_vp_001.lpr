program prog_vp_001;
{*
  prog_vp_001
  impresion texto "hola mundo" y suma de dos enteros.
*}
var
   str: string;
   a, b, c: integer;
begin
     str := 'Hola mundo';
     a := 65;
     b := 66;
     c := a + b;
     WriteLn(str);
     WriteLn('La suma de a('+a+') + b('+b+') es = c('+c+')');
end.

