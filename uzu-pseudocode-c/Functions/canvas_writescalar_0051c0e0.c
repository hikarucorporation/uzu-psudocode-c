// Function : canvas_writescalar
// Namespace: 
// Entry    : 0051c0e0
// Prototype: undefined canvas_writescalar(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint * param_10, int * param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0051c0e0 - 0051c36b


void canvas_writescalar(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long *param_9,uint *param_10,int *param_11,long param_12,char *param_13,
                       undefined8 param_14)

{
  int iVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_RDX;
  uint *extraout_RDX_00;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  ulong uVar14;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar15;
  undefined1 in_stack_ffffffffffffff88;
  undefined4 local_40 [2];
  undefined8 *local_38;
  
  lVar5 = param_12;
  puVar9 = param_10;
  puVar2 = (uint *)template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                       param_8,(long)param_9);
  uVar8 = 0;
  puVar3 = getbytes(0);
  uVar14 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  if (puVar2 != (uint *)0x0) {
    uVar8 = (ulong)puVar2[6];
  }
  if ((int)param_12 == 0) {
    local_40[0] = 2;
    local_38 = gensym((char *)(*param_9 + 3));
    puVar9 = (uint *)0x1;
    uVar14 = binbuf_add(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,param_11,1,(undefined8 *)local_40,lVar5,
                        param_13,param_14);
  }
  if (puVar2 == (uint *)0x0) {
    uVar14 = bug(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"canvas_writescalar"
                 ,puVar9,0,lVar5,param_13,param_14,in_stack_ffffffffffffff88);
  }
  if ((int)uVar8 < 1) {
    uVar11 = 0;
  }
  else {
    lVar13 = 0;
    uVar11 = 0;
    puVar9 = param_10;
    do {
      if (*(uint *)(*(long *)(puVar2 + 8) + lVar13) < 2) {
        lVar12 = (long)(int)uVar11;
        uVar11 = uVar11 + 1;
        puVar3 = resizebytes(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar3,
                             lVar12 * 0x10,lVar12 * 0x10 + 0x10);
        uVar14 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
        lVar5 = *(long *)(puVar2 + 8);
        if (*(int *)(lVar5 + lVar13) == 0) {
          *(undefined4 *)(puVar3 + lVar12 * 2) = 1;
          uVar14 = (ulong)*puVar9;
          *(uint *)(puVar3 + lVar12 * 2 + 1) = *puVar9;
        }
        else {
          *(undefined4 *)(puVar3 + lVar12 * 2) = 2;
          puVar3[lVar12 * 2 + 1] = *(undefined8 *)puVar9;
        }
      }
      puVar9 = puVar9 + 2;
      lVar13 = lVar13 + 0x18;
    } while (uVar8 * 0x18 != lVar13);
  }
  if (((int)param_12 != 0) && (uVar11 == 0)) {
    *(undefined4 *)puVar3 = 2;
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar14 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
    lVar5 = *plVar4 + 0xa8;
    puVar3[1] = lVar5;
    uVar11 = 1;
  }
  uVar7 = (ulong)uVar11;
  uVar15 = binbuf_add(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11,uVar11
                      ,puVar3,lVar5,param_13,param_14);
  binbuf_addsemi(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11,uVar7,
                 extraout_RDX,lVar5,param_13,param_14);
  uVar15 = freebytes(puVar3);
  if (0 < (int)uVar8) {
    uVar14 = 0;
    do {
      lVar5 = uVar14 * 3;
      iVar1 = *(int *)(*(long *)(puVar2 + 8) + uVar14 * 0x18);
      if (iVar1 == 2) {
        uVar15 = binbuf_savetext(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 *(uint **)(param_10 + uVar14 * 2),param_11,2,lVar5,param_13,
                                 param_14);
      }
      else if (iVar1 == 3) {
        puVar9 = *(uint **)(param_10 + uVar14 * 2);
        uVar7 = (ulong)*puVar9;
        puVar6 = param_10;
        puVar10 = puVar2;
        if (0 < (int)*puVar9) {
          plVar4 = *(long **)(*(long *)(puVar2 + 8) + 0x10 + uVar14 * 0x18);
          uVar11 = puVar9[1];
          lVar13 = 0;
          do {
            puVar10 = (uint *)(*(long *)(puVar9 + 2) + lVar13);
            lVar5 = 1;
            uVar15 = canvas_writescalar(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,
                                        param_8,plVar4,puVar10,param_11,1,param_13,param_14);
            lVar13 = lVar13 + (int)uVar11;
            uVar7 = uVar7 - 1;
            puVar6 = extraout_RDX_00;
          } while (uVar7 != 0);
        }
        uVar15 = binbuf_addsemi(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_11,puVar10,puVar6,lVar5,param_13,param_14);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar8);
  }
  return;
}


