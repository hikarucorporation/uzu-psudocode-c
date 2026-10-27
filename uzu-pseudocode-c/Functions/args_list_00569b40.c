// Function : args_list
// Namespace: 
// Entry    : 00569b40
// Prototype: undefined args_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, undefined8 * param_12, uint * param_13, uint * param_14)
// Body     : 00569b40 - 00569e96


void args_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
              undefined8 param_10,uint param_11,undefined8 *param_12,uint *param_13,uint *param_14)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  bool bVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar19;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 local_48 [2];
  long local_40;
  
  if (param_11 == 0) {
    piVar5 = *(int **)(param_9 + 0x40);
    if (piVar5 != (int *)0x0) {
      if (*(int *)(param_9 + 0x48) == 0) {
        plVar9 = *(long **)(param_9 + 0x18);
        plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
        outlet_list(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,plVar9,*plVar11 + 0xc0,
                    *(undefined4 *)(param_9 + 0x38),piVar5,(char *)param_13,param_14);
        return;
      }
      plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar13 = *plVar9;
      uVar4 = *(uint *)(param_9 + 0x38);
      uVar10 = (ulong)uVar4;
      if (uVar10 == 0) {
        outlet_anything(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18),
                        (undefined8 *)(lVar13 + 0xc0),0,piVar5,param_13,param_14);
        return;
      }
      if (-1 < (int)uVar4) {
        uVar16 = 0xffffffff;
        bVar12 = false;
        uVar18 = extraout_XMM0_Da_00;
        uVar20 = extraout_XMM0_Db_00;
        do {
          uVar14 = (uint)uVar16;
          uVar15 = uVar14 + 1;
          uVar16 = (ulong)uVar15;
          if ((int)uVar15 < (int)uVar4) {
            piVar7 = piVar5 + 4 + (long)(int)uVar15 * 4;
            lVar17 = 0;
            do {
              if ((-2 - uVar14) + uVar4 + (int)lVar17 == 0) break;
              if ((*piVar7 == 2) &&
                 (cVar3 = *(char *)(param_9 + 0x50), puVar8 = (undefined8 *)atom_getsymbol(piVar7),
                 uVar18 = extraout_XMM0_Da_03, uVar20 = extraout_XMM0_Db_03,
                 cVar3 == *(char *)*puVar8)) {
                *(undefined4 *)(param_9 + 0x4c) = 1;
                uVar16 = (ulong)((uVar14 - (int)lVar17) + 2);
                goto LAB_00569dc9;
              }
              lVar17 = lVar17 + -1;
              piVar7 = piVar7 + 4;
            } while ((uVar10 - (long)(int)uVar15) + lVar17 != 0);
            uVar16 = uVar10;
          }
LAB_00569dc9:
          uVar15 = ~uVar14 + (int)uVar16;
          if (bVar12) {
            plVar9 = *(long **)(param_9 + 0x18);
            puVar8 = (undefined8 *)atom_getsymbol(piVar5 + (long)(int)uVar14 * 4);
            piVar7 = piVar5 + (long)(int)uVar14 * 4 + 4;
            uVar18 = extraout_XMM0_Da_01;
            uVar20 = extraout_XMM0_Db_01;
          }
          else if ((*piVar5 == 2) &&
                  (cVar3 = *(char *)(param_9 + 0x50), puVar8 = (undefined8 *)atom_getsymbol(piVar5),
                  uVar18 = extraout_XMM0_Da_04, uVar20 = extraout_XMM0_Db_04,
                  cVar3 == *(char *)*puVar8)) {
            plVar9 = *(long **)(param_9 + 0x18);
            puVar8 = (undefined8 *)atom_getsymbol(piVar5);
            uVar15 = uVar15 - 1;
            piVar7 = piVar5 + 4;
            uVar18 = extraout_XMM0_Da_05;
            uVar20 = extraout_XMM0_Db_05;
          }
          else {
            plVar9 = *(long **)(param_9 + 0x18);
            piVar7 = piVar5;
            puVar8 = (undefined8 *)(lVar13 + 0xc0);
          }
          outlet_anything(CONCAT44(uVar20,uVar18),param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar9,puVar8,uVar15,piVar7,param_13,param_14);
          bVar12 = true;
          uVar18 = extraout_XMM0_Da_02;
          uVar20 = extraout_XMM0_Db_02;
        } while ((int)uVar16 < (int)uVar4);
      }
    }
  }
  else if ((*(long *)(param_9 + 0x30) != 0) &&
          (piVar5 = *(int **)(*(long *)(param_9 + 0x30) + 0x10), piVar5 != (int *)0x0)) {
    local_48[0] = 2;
    puVar8 = param_12;
    piVar7 = (int *)binbuf_getvec((long)piVar5);
    local_40 = atom_getsymbol(piVar7);
    uVar19 = binbuf_clear(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar5);
    uVar19 = binbuf_add(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,1,
                        (undefined8 *)local_48,puVar8,(char *)param_13,param_14);
    binbuf_add(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,param_11,
               param_12,puVar8,(char *)param_13,param_14);
    if (*(int *)(param_9 + 0x38) != 0) {
      freebytes(*(void **)(param_9 + 0x40));
    }
    *(uint *)(param_9 + 0x38) = param_11;
    puVar8 = getbytes((long)(int)param_11 << 4);
    *(undefined8 **)(param_9 + 0x40) = puVar8;
    uVar4 = param_11 - 1;
    if ((param_11 & 3) != 0) {
      uVar14 = 0;
      do {
        uVar19 = *param_12;
        uVar6 = param_12[1];
        param_12 = param_12 + 2;
        *puVar8 = uVar19;
        puVar8[1] = uVar6;
        puVar8 = puVar8 + 2;
        uVar14 = uVar14 + 1;
      } while ((param_11 & 3) != uVar14);
      param_11 = param_11 - uVar14;
    }
    if (2 < uVar4) {
      lVar13 = 0;
      do {
        uVar19 = ((undefined8 *)((long)param_12 + lVar13))[1];
        *(undefined8 *)((long)puVar8 + lVar13) = *(undefined8 *)((long)param_12 + lVar13);
        ((undefined8 *)((long)puVar8 + lVar13))[1] = uVar19;
        puVar1 = (undefined8 *)((long)param_12 + lVar13 + 0x10);
        uVar19 = puVar1[1];
        puVar2 = (undefined8 *)((long)puVar8 + lVar13 + 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar19;
        puVar1 = (undefined8 *)((long)param_12 + lVar13 + 0x20);
        uVar19 = puVar1[1];
        puVar2 = (undefined8 *)((long)puVar8 + lVar13 + 0x20);
        *puVar2 = *puVar1;
        puVar2[1] = uVar19;
        puVar1 = (undefined8 *)((long)param_12 + lVar13 + 0x30);
        uVar19 = puVar1[1];
        puVar2 = (undefined8 *)((long)puVar8 + lVar13 + 0x30);
        *puVar2 = *puVar1;
        puVar2[1] = uVar19;
        lVar13 = lVar13 + 0x40;
        param_11 = param_11 - 4;
      } while (param_11 != 0);
    }
  }
  return;
}


