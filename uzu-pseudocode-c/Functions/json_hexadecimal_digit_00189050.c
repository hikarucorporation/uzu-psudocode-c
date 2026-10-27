// Function : json_hexadecimal_digit
// Namespace: 
// Entry    : 00189050
// Prototype: int json_hexadecimal_digit(int param_1)
// Body     : 00189050 - 0018907d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_hexadecimal_digit(char) */

int __cdecl json_hexadecimal_digit(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)param_1;
  if ((byte)(cVar1 - 0x30U) < 10) {
    return param_1 + -0x30;
  }
  if ((byte)(cVar1 + 0x9fU) < 6) {
    return param_1 + -0x57;
  }
  iVar2 = -1;
  if ((byte)(cVar1 + 0xbfU) < 6) {
    iVar2 = param_1 + -0x37;
  }
  return iVar2;
}


