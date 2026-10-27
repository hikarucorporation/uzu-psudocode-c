// Function : canvas_deletelinesforio
// Namespace: 
// Entry    : 004ffbc0
// Prototype: undefined canvas_deletelinesforio(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, long param_11, long param_12, undefined8 param_13, undefined8 param_14)
// Body     : 004ffbc0 - 004ffcf4


void canvas_deletelinesforio
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long *param_10,long param_11,long param_12,undefined8 param_13,
               undefined8 param_14)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  long lVar4;
  long local_130;
  long *local_128;
  undefined4 local_120;
  int local_11c;
  long *local_118;
  long local_110;
  long local_108;
  int local_fc;
  undefined8 local_c8;
  undefined4 local_c0;
  char local_b8 [136];
  
  local_128 = (long *)0x0;
  local_c8 = 0;
  local_120 = 0;
  local_c0 = 0;
  local_130 = param_9;
  puVar1 = linetraverser_next(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              &local_130);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = extraout_XMM0_Qa;
    lVar4 = param_12;
    do {
      if (((local_128 == param_10) && (local_110 == param_12)) ||
         ((local_118 == param_10 && (local_108 == param_11)))) {
        if ((*(byte *)(param_9 + 0xe8) & 8) == 0) {
          lVar2 = glist_getcanvas(param_9);
          uVar3 = extraout_XMM0_Qa_01;
          if ((*(byte *)(lVar2 + 0xe8) & 2) != 0) {
            sprintf(local_b8,"l%p",puVar1);
            param_12 = lVar4;
            uVar3 = glist_getcanvas(param_9);
            lVar4 = param_12;
            uVar3 = pdgui_vmess(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,0,"crs",uVar3,"delete",local_b8,param_14,(char)param_12);
          }
        }
        uVar3 = obj_disconnect(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (long)local_128,local_11c,local_118,local_fc);
      }
      puVar1 = linetraverser_next(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  &local_130);
      uVar3 = extraout_XMM0_Qa_00;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


