// Function : message_output
// Namespace: 
// Entry    : 00564d70
// Prototype: undefined message_output(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 00564d70 - 00564e56


void message_output(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint *in_R8;
  uint *in_R9;
  uint uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  uint auStack_228 [128];
  
  if (*(undefined8 **)(param_9 + 0x60) == (undefined8 *)0x0) {
    outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x18));
    return;
  }
  lVar7 = *(long *)(param_9 + 0x40);
  if (*(long *)(param_9 + 0x48) == 0) {
    message_send(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 *(undefined8 **)(param_9 + 0x60),(int)lVar7,*(uint **)(param_9 + 0x50),in_R8,in_R9)
    ;
    return;
  }
  uVar9 = (int)lVar7 + 1;
  if ((int)uVar9 < 0x80) {
    puVar4 = auStack_228 + (long)(int)uVar9 * -4 + 0x80;
    puVar3 = puVar4;
    puVar8 = puVar4;
  }
  else {
    puVar4 = getbytes((ulong)uVar9 << 4);
    param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    lVar7 = *(long *)(param_9 + 0x40);
    puVar3 = auStack_228 + 0x80;
    puVar8 = auStack_228 + 0x80;
  }
  if (0 < lVar7) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_9 + 0x50) + lVar5);
      param_1 = *puVar1;
      uVar2 = puVar1[1];
      *(undefined8 *)((long)puVar4 + lVar5) = param_1;
      ((undefined8 *)((long)puVar4 + lVar5))[1] = uVar2;
      lVar6 = lVar6 + 1;
      lVar7 = *(long *)(param_9 + 0x40);
      lVar5 = lVar5 + 0x10;
      puVar8 = puVar3;
    } while (lVar6 < lVar7);
  }
  puVar1 = *(undefined8 **)(param_9 + 0x60);
  puVar8[-2] = 0x564e2d;
  puVar8[-1] = 0;
  message_send(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar1,
               (int)lVar7,puVar4,in_R8,in_R9);
  if (0x7f < (int)uVar9) {
    puVar8[-2] = 0x564e42;
    puVar8[-1] = 0;
    freebytes(puVar4);
  }
  *(undefined8 *)(param_9 + 0x48) = 0;
  return;
}


