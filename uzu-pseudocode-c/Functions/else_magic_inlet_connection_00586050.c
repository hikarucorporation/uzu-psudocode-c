// Function : else_magic_inlet_connection
// Namespace: 
// Entry    : 00586050
// Prototype: undefined8 else_magic_inlet_connection(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 00586050 - 00586102


undefined8
else_magic_inlet_connection
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          undefined8 param_10,int param_11,long param_12)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  long local_a0 [3];
  long local_88;
  long local_80;
  int local_6c;
  
  uVar3 = linetraverser_start(local_a0,param_10);
  puVar1 = linetraverser_next(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_a0
                             );
  if (puVar1 != (undefined8 *)0x0) {
    if (param_12 == 0) {
      uVar3 = extraout_XMM0_Qa;
      do {
        if ((local_88 == param_9) && (local_6c == param_11)) {
          return 1;
        }
        puVar1 = linetraverser_next(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    local_a0);
        uVar3 = extraout_XMM0_Qa_02;
      } while (puVar1 != (undefined8 *)0x0);
    }
    else {
      uVar3 = extraout_XMM0_Qa;
      do {
        if (((local_88 == param_9) && (local_6c == param_11)) &&
           (lVar2 = outlet_getsymbol(local_80), uVar3 = extraout_XMM0_Qa_01, lVar2 == param_12)) {
          return 1;
        }
        puVar1 = linetraverser_next(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    local_a0);
        uVar3 = extraout_XMM0_Qa_00;
      } while (puVar1 != (undefined8 *)0x0);
    }
  }
  return 0;
}


