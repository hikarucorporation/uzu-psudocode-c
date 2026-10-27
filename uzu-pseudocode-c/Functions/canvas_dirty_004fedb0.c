// Function : canvas_dirty
// Namespace: 
// Entry    : 004fedb0
// Prototype: undefined canvas_dirty(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004fedb0 - 004fee5e


void canvas_dirty(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,char *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 in_stack_ffffffffffffffd8;
  
  lVar2 = param_9;
  do {
    lVar3 = lVar2;
    if (*(long *)(lVar3 + 0x48) == 0) break;
    lVar2 = *(long *)(lVar3 + 0x48);
  } while (*(long *)(lVar3 + 0xe0) == 0);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(long *)(*(long *)(*plVar4 + 0x48) + 0x30) == 0) {
    uVar1 = *(uint *)(lVar3 + 0xe8);
    uVar6 = (uint)(long)param_1;
    if (uVar6 != (uVar1 >> 2 & 1)) {
      uVar5 = (uVar1 & 0xfffffffb) + (uVar6 & 1) * 4;
      *(short *)(lVar3 + 0xe8) = (short)uVar5;
      if ((uVar1 & 1) != 0) {
        canvas_reflecttitle(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                            param_5,param_6,param_7,param_8,lVar3,param_10,
                            (ulong)(uVar1 & 0xfffffffb),(ulong)uVar5,param_13,param_14,
                            in_stack_ffffffffffffffd8);
      }
    }
    if (uVar6 == 0) {
      canvas_undo_cleardirty(param_9);
      return;
    }
  }
  return;
}


