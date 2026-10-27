// Function : json_write_get_string_size
// Namespace: 
// Entry    : 0018b750
// Prototype: undefined8 json_write_get_string_size(long * param_1, long * param_2)
// Body     : 0018b750 - 0018b7ad


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_get_string_size(json_string_s const*, unsigned long*) */

undefined8 __cdecl json_write_get_string_size(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = *param_2;
  }
  else {
    lVar1 = *param_1;
    uVar3 = 0;
    do {
      uVar2 = (uint)*(char *)(lVar1 + uVar3);
      lVar4 = 2;
      if (((0x22 < uVar2) || ((0x400003700U >> ((ulong)uVar2 & 0x3f) & 1) == 0)) && (uVar2 != 0x5c))
      {
        lVar4 = 1;
      }
      lVar4 = lVar4 + *param_2;
      *param_2 = lVar4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)param_1[1]);
  }
  *param_2 = lVar4 + 2;
  return 0;
}


