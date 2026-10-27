// Function : json_hexadecimal_value
// Namespace: 
// Entry    : 00189080
// Prototype: undefined8 json_hexadecimal_value(long param_1, ulong param_2, ulong * param_3)
// Body     : 00189080 - 001890e7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_hexadecimal_value(char const*, unsigned long, unsigned long*) */

undefined8 __cdecl json_hexadecimal_value(long param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_2 < 0x11) {
    *param_3 = 0;
    uVar4 = 1;
    if (param_2 != 0) {
      uVar3 = 0;
      uVar2 = 0;
      do {
        *param_3 = uVar2 << 4;
        uVar1 = json_hexadecimal_digit((int)*(char *)(param_1 + uVar3));
        if (0xf < uVar1) {
          return 0;
        }
        uVar2 = (ulong)uVar1 | *param_3;
        *param_3 = uVar2;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2);
    }
  }
  return uVar4;
}


