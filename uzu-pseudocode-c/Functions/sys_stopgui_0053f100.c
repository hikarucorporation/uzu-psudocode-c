// Function : sys_stopgui
// Namespace: 
// Entry    : 0053f100
// Prototype: undefined sys_stopgui(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, undefined * param_14)
// Body     : 0053f100 - 0053f25b


void sys_stopgui(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,char *param_10,undefined8 param_11,undefined *param_12,
                char *param_13,undefined *param_14)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined8 extraout_RDX;
  undefined8 uVar10;
  undefined8 extraout_RDX_00;
  undefined8 unaff_RBX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar12;
  
  plVar4 = (long *)pd_getcanvaslist();
  if (plVar4 != (long *)0x0) {
    uVar10 = extraout_RDX;
    do {
      canvas_vis(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4,param_10,uVar10,
                 param_12,param_13,param_14,(char)unaff_RBX);
      plVar4 = (long *)plVar4[0x1b];
      uVar10 = extraout_RDX_00;
    } while (plVar4 != (long *)0x0);
  }
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar7 = *plVar4;
  piVar8 = *(int **)(lVar7 + 0x38);
  if (-1 < piVar8[5]) {
    socket_close(piVar8[5]);
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar7 = *plVar4;
    piVar8 = *(int **)(lVar7 + 0x38);
    iVar2 = *piVar8;
    *(byte *)(piVar8 + 0x12) = *(byte *)(piVar8 + 0x12) | 4;
    if (iVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x38);
      lVar3 = *(long *)(lVar7 + 8);
      lVar5 = 0;
      iVar9 = iVar2;
      do {
        if (*(int *)(lVar3 + lVar5) == piVar8[5]) {
          uVar11 = extraout_XMM0_Da;
          uVar12 = extraout_XMM0_Db;
          if (iVar9 != 1) {
            memmove((void *)(lVar3 + lVar5),(void *)(lVar3 + lVar5 + 0x18),
                    (ulong)(iVar2 - 1) * 0x18 - lVar5);
            plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
            lVar7 = *(long *)(*plVar4 + 0x38);
            uVar11 = extraout_XMM0_Da_00;
            uVar12 = extraout_XMM0_Db_00;
          }
          pvVar6 = resizebytes(CONCAT44(uVar12,uVar11),param_2,param_3,param_4,param_5,param_6,
                               param_7,param_8,*(void **)(lVar7 + 8),(long)(iVar2 * 0x18),
                               (long)(iVar2 * 0x18) - 0x18);
          plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar7 = *plVar4;
          piVar8 = *(int **)(lVar7 + 0x38);
          *(void **)(piVar8 + 2) = pvVar6;
          *piVar8 = iVar2 + -1;
          goto LAB_0053f244;
        }
        iVar9 = iVar9 + -1;
        lVar5 = lVar5 + 0x18;
      } while (iVar9 != 0);
    }
    post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,param_7
         ,param_8,"warning: %d removed from poll list but not found");
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar7 = *plVar4;
    piVar8 = *(int **)(lVar7 + 0x38);
LAB_0053f244:
    piVar8[5] = -1;
  }
  *(byte *)(piVar8 + 0x12) = *(byte *)(piVar8 + 0x12) & 0xfd;
  pbVar1 = (byte *)(*(long *)(lVar7 + 0x38) + 0x48);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}


