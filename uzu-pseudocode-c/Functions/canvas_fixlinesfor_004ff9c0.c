// Function : canvas_fixlinesfor
// Namespace: 
// Entry    : 004ff9c0
// Prototype: undefined canvas_fixlinesfor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 004ff9c0 - 004ffaa5


void canvas_fixlinesfor(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  long local_130;
  long local_128;
  undefined4 local_120;
  long local_118;
  uint local_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  char local_b8 [136];
  
  local_128 = 0;
  local_c8 = 0;
  local_120 = 0;
  local_c0 = 0;
  local_130 = param_9;
  puVar1 = linetraverser_next(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              &local_130);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = extraout_XMM0_Qa;
    do {
      if ((local_128 == param_10) || (local_118 == param_10)) {
        sprintf(local_b8,"l%p",puVar1);
        uVar2 = glist_getcanvas(param_9);
        uVar2 = pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,0,"crs iiii",uVar2,"coords",local_b8,(ulong)local_d8,
                            (char)local_d4);
      }
      puVar1 = linetraverser_next(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  &local_130);
      uVar2 = extraout_XMM0_Qa_01;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


