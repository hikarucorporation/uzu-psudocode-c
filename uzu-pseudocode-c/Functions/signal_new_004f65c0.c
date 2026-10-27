// Function : signal_new
// Namespace: 
// Entry    : 004f65c0
// Prototype: int * signal_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, ulong param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004f65c0 - 004f6798


int * signal_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int param_9,ulong param_10,long param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 in_stack_ffffffffffffffc8;
  
  fVar10 = (float)param_1;
  uVar9 = param_10;
  if (fVar10 < DAT_005d9038) {
    param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"signal_new",
                  param_10,param_11,param_12,param_13,param_14,in_stack_ffffffffffffffc8);
  }
  if ((param_9 == 0) || (param_11 != 0)) {
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar3 = (long *)(*(long *)(*plVar3 + 0x40) + 0x128);
    iVar6 = 0;
    piVar4 = (int *)*plVar3;
  }
  else {
    uVar2 = (int)param_10 * param_9;
    if ((int)uVar2 < 1) {
      iVar6 = 0;
    }
    else {
      iVar6 = -1;
      uVar9 = (ulong)uVar2;
      uVar7 = uVar2;
      do {
        iVar6 = iVar6 + 1;
        uVar7 = (int)uVar7 >> 1;
        uVar8 = (uint)uVar9;
        uVar9 = (ulong)uVar7;
      } while (1 < uVar8);
    }
    uVar7 = 1 << ((byte)iVar6 & 0x1f);
    uVar2 = (uint)((int)uVar7 < (int)uVar2) + iVar6;
    iVar6 = 1 << ((byte)uVar2 & 0x1f);
    if (0x20 < (int)uVar2) {
      bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"signal buffer too large",
          uVar9,(ulong)uVar7,(ulong)uVar2,param_13,param_14,in_stack_ffffffffffffffc8);
    }
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar3 = (long *)(*(long *)(*plVar3 + 0x40) + (long)(int)uVar2 * 8 + 0x20);
    piVar4 = (int *)*plVar3;
  }
  if (piVar4 == (int *)0x0) {
    piVar4 = getbytes(0x48);
    if (iVar6 != 0) {
      pvVar5 = getbytes((long)iVar6 << 2);
      *(void **)(piVar4 + 2) = pvVar5;
    }
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar1 = *(long *)(*plVar3 + 0x40);
    *(undefined8 *)(piVar4 + 0xe) = *(undefined8 *)(lVar1 + 0x10);
    *(int **)(lVar1 + 0x10) = piVar4;
  }
  else {
    *plVar3 = *(long *)(piVar4 + 0xc);
  }
  if (param_11 == 0) {
    if (param_9 == 0) {
      piVar4[2] = 0;
      piVar4[3] = 0;
      piVar4[8] = 1;
      piVar4[9] = 0;
    }
    else {
      piVar4[8] = 0;
      piVar4[9] = 0;
    }
  }
  else {
    *(long *)(piVar4 + 2) = param_11;
    piVar4[8] = 0;
    piVar4[9] = 1;
  }
  *piVar4 = param_9;
  piVar4[5] = (int)param_10;
  piVar4[0x10] = iVar6;
  piVar4[4] = (int)fVar10;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(int *)(*(long *)(*plVar3 + 0x40) + 0x134) != 0) {
    post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,param_7
         ,param_8,"new %lx: %lx");
  }
  return piVar4;
}


