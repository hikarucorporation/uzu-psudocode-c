// Function : qlist_donext
// Namespace: 
// Entry    : 0055b780
// Prototype: undefined qlist_donext(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, int param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 0055b780 - 0055ba0b


void qlist_donext(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                 int param_10,undefined8 param_11,undefined8 param_12,uint *param_13,uint *param_14)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  float fVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  
  if (*(int *)(param_9 + 0x80) != 0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "qlist sent \'next\' from within itself",param_11,param_12,(char *)param_13,param_14);
    return;
  }
  *(undefined4 *)(param_9 + 0x80) = 1;
  uVar4 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x30));
  uVar8 = *(uint *)(param_9 + 0x58);
  uVar11 = (ulong)uVar8;
  lVar5 = binbuf_getvec(*(long *)(param_9 + 0x30));
  uVar17 = extraout_XMM0_Qa;
  if ((int)uVar8 < (int)uVar4) {
    puVar15 = (uint *)(lVar5 + (long)(int)uVar8 * 0x10);
    plVar9 = (long *)0x0;
    do {
      puVar6 = puVar15;
      while( true ) {
        puVar6 = puVar6 + 4;
        uVar8 = *puVar15;
        iVar10 = (int)uVar11;
        if ((uVar8 & 0xfffffffe) != 4) break;
        if (uVar8 == 4) {
          plVar9 = (long *)0x0;
        }
        uVar11 = (ulong)(iVar10 + 1U);
        puVar15 = puVar15 + 4;
        if ((int)uVar4 <= (int)(iVar10 + 1U)) goto LAB_0055b95e;
      }
      uVar3 = iVar10 + 1U;
      if ((int)(iVar10 + 1U) < (int)uVar4) {
        uVar3 = uVar4;
      }
      uVar14 = uVar11 & 0xffffffff;
      if ((plVar9 == (long *)0x0) && (uVar8 == 1)) {
        uVar11 = uVar11 & 0xffffffff;
        puVar6 = puVar15;
        goto LAB_0055b999;
      }
      do {
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar13;
        if ((int)uVar4 <= (int)uVar13) {
          *(uint *)(param_9 + 0x58) = uVar3;
          uVar13 = uVar3;
          goto joined_r0x0055b8bf;
        }
        uVar1 = *puVar6;
        puVar6 = puVar6 + 4;
      } while (uVar1 - 1 < 2);
      *(uint *)(param_9 + 0x58) = uVar13;
joined_r0x0055b8bf:
      if (plVar9 == (long *)0x0) {
        if (uVar8 == 2) {
          plVar9 = (long *)(*(undefined8 **)(puVar15 + 2))[1];
          if (plVar9 == (long *)0x0) {
            pd_error(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     "qlist: %s: no such object",**(undefined8 **)(puVar15 + 2),(ulong)uVar3,
                     (char *)param_13,param_14);
            plVar9 = (long *)0x0;
          }
          else {
            uVar13 = (uVar13 - 1) - iVar10;
            if (uVar13 != 0) {
              puVar15 = puVar15 + 4;
              goto LAB_0055b873;
            }
          }
        }
        else {
          plVar9 = (long *)0x0;
        }
      }
      else {
        uVar13 = uVar13 - iVar10;
LAB_0055b873:
        uVar2 = *(undefined4 *)(param_9 + 0x7c);
        *(undefined4 *)(param_9 + 0x7c) = 0;
        if (param_10 == 0) {
          if (*puVar15 == 2) {
            puVar12 = *(undefined8 **)(puVar15 + 2);
            uVar13 = uVar13 - 1;
            puVar15 = puVar15 + 4;
          }
          else {
            if (*puVar15 != 1) goto LAB_0055b90b;
            plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
            puVar12 = (undefined8 *)(*plVar7 + 0xc0);
            uVar17 = extraout_XMM0_Qa_00;
          }
          pd_typedmess(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar9,puVar12
                       ,uVar13,(int *)puVar15,param_13,param_14);
          if (*(int *)(param_9 + 0x7c) != 0) goto LAB_0055b9f2;
        }
LAB_0055b90b:
        *(undefined4 *)(param_9 + 0x7c) = uVar2;
      }
      uVar4 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x30));
      iVar10 = *(int *)(param_9 + 0x58);
      uVar11 = (ulong)iVar10;
      lVar5 = binbuf_getvec(*(long *)(param_9 + 0x30));
      puVar15 = (uint *)(uVar11 * 0x10 + lVar5);
      uVar17 = extraout_XMM0_Qa_01;
    } while (iVar10 < (int)uVar4);
  }
LAB_0055b95e:
  *(undefined4 *)(param_9 + 0x58) = 0x7fffffff;
  *(undefined8 *)(param_9 + 0x70) = 0;
  *(undefined4 *)(param_9 + 0x80) = 0;
  outlet_bang(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x50));
  return;
  while (uVar8 = uVar13, *puVar6 == 1) {
LAB_0055b999:
    puVar6 = puVar6 + 4;
    uVar13 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar13;
    uVar8 = uVar3;
    if ((int)uVar4 <= (int)uVar13) break;
  }
  *(uint *)(param_9 + 0x58) = uVar8;
  if ((int)param_11 == 0) {
    outlet_list(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x18),0,uVar8 - iVar10,puVar15,(char *)param_13,param_14);
  }
  else {
    fVar16 = *(float *)(param_9 + 0x68) * (float)puVar15[2];
    *(float *)(param_9 + 0x78) = fVar16;
    clock_delay((double)fVar16,*(double **)(param_9 + 0x60));
    clock_getlogicaltime();
    *(undefined8 *)(param_9 + 0x70) = extraout_XMM0_Qa_02;
  }
LAB_0055b9f2:
  *(undefined4 *)(param_9 + 0x80) = 0;
  return;
}


