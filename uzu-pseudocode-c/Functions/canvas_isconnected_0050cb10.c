// Function : canvas_isconnected
// Namespace: 
// Entry    : 0050cb10
// Prototype: undefined8 canvas_isconnected(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long param_10, int param_11, long param_12, int param_13)
// Body     : 0050cb10 - 0050cb80


undefined8
canvas_isconnected(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,int param_11,long param_12,int param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  long local_a0;
  long local_98;
  int local_8c;
  long local_88;
  int local_6c;
  
  uVar2 = linetraverser_start(&local_a0,param_9);
  do {
    puVar1 = linetraverser_next(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                &local_a0);
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    uVar2 = extraout_XMM0_Qa;
  } while ((((local_98 != param_10) || (local_8c != param_11)) || (local_88 != param_12)) ||
          (local_6c != param_13));
  return 1;
}


