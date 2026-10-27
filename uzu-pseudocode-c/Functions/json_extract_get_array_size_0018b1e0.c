// Function : json_extract_get_array_size
// Namespace: 
// Entry    : 0018b1e0
// Prototype: undefined1[16] json_extract_get_array_size(long * param_1)
// Body     : 0018b1e0 - 0018b243


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_extract_get_array_size(json_array_s const*) */

undefined1  [16] __cdecl json_extract_get_array_size(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = param_1[1] * 0x10 + 0x10;
  if (param_1[1] == 0) {
    lVar3 = 0;
    lVar5 = 0x10;
  }
  else {
    lVar3 = 0;
    uVar4 = 0;
    plVar2 = param_1;
    do {
      puVar1 = (undefined8 *)*plVar2;
      auVar6 = json_extract_get_value_size((long *)*puVar1);
      lVar5 = lVar5 + auVar6._0_8_;
      lVar3 = lVar3 + auVar6._8_8_;
      plVar2 = puVar1 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)param_1[1]);
  }
  auVar6._8_8_ = lVar3;
  auVar6._0_8_ = lVar5;
  return auVar6;
}


