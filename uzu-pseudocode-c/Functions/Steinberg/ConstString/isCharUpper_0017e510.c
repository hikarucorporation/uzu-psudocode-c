// Function : isCharUpper
// Namespace: Steinberg:ConstString
// Entry    : 0017e510
// Prototype: ulong isCharUpper(int param_1)
// Body     : 0017e510 - 0017e533


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::isCharUpper(char) */

ulong __cdecl Steinberg::ConstString::isCharUpper(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  
  cVar1 = (char)param_1;
  if ((byte)(cVar1 + 0x9fU) < 0x1a) {
    return (ulong)CONCAT31((int3)((uint)(param_1 + -0x20) >> 8),(char)(param_1 + -0x20) == cVar1);
  }
  iVar2 = toupper(param_1);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),(char)iVar2 == cVar1);
}


