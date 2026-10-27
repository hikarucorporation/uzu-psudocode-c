// Function : json_extract_get_object_size
// Namespace: 
// Entry    : 0018b0f0
// Prototype: undefined1[16] json_extract_get_object_size(long * param_1)
// Body     : 0018b0f0 - 0018b179


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_extract_get_object_size(json_object_s const*) */

undefined1  [16] __cdecl json_extract_get_object_size(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar4 = param_1[1] * 0x18 + 0x10;
  if (param_1[1] == 0) {
    lVar1 = 0;
    lVar4 = 0x10;
  }
  else {
    lVar1 = 0;
    uVar3 = 0;
    plVar2 = param_1;
    do {
      plVar2 = (long *)*plVar2;
      auVar5 = json_extract_get_string_size(*plVar2);
      auVar6 = json_extract_get_value_size((long *)plVar2[1]);
      lVar4 = auVar5._0_8_ + lVar4 + auVar6._0_8_;
      lVar1 = auVar5._8_8_ + lVar1 + auVar6._8_8_;
      plVar2 = plVar2 + 2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)param_1[1]);
  }
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = lVar4;
  return auVar5;
}


