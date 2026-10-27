// Function : args_new
// Namespace: 
// Entry    : 005699c0
// Prototype: long * args_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005699c0 - 00569b1d


long * args_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long extraout_RAX;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 extraout_RDX;
  undefined4 *extraout_RDX_00;
  undefined4 *puVar9;
  undefined8 extraout_RDX_01;
  int iVar10;
  uint uVar11;
  undefined4 **ppuVar12;
  undefined4 extraout_XMM0_Da;
  float fVar13;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar15;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar16;
  undefined1 in_stack_ffffffffffffffd8;
  uint local_24;
  undefined4 *local_20;
  
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,args_class,
                  param_10,param_11,param_12,param_13,param_14);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8);
  lVar5 = canvas_getrootfor(extraout_RAX);
  plVar4[6] = lVar5;
  plVar4[9] = 0;
  if ((int)param_10 != 0) {
    iVar10 = *param_11;
    if (iVar10 == 2) {
      puVar6 = (undefined8 *)atom_getsymbol(param_11);
      *(undefined1 *)(plVar4 + 10) = *(undefined1 *)*puVar6;
      *(undefined4 *)(plVar4 + 9) = 1;
      if ((int)param_10 == 1) goto LAB_00569a5b;
      param_11 = param_11 + 4;
      iVar10 = *param_11;
    }
    if (iVar10 == 1) {
      fVar13 = (float)atom_getfloat(param_11);
      iVar10 = (int)fVar13;
      if (0 < iVar10) {
        lVar5 = plVar4[6];
        do {
          if (*(long *)(lVar5 + 0x48) == 0) break;
          iVar10 = iVar10 + -1;
          lVar5 = canvas_getrootfor(*(long *)(lVar5 + 0x48));
          plVar4[6] = lVar5;
        } while (iVar10 != 0);
        goto LAB_00569a5f;
      }
    }
  }
LAB_00569a5b:
  lVar5 = plVar4[6];
LAB_00569a5f:
  uVar15 = canvas_setcurrent(lVar5);
  ppuVar12 = &local_20;
  canvas_getargs(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_24,ppuVar12,
                 extraout_RDX,param_12,param_13,param_14);
  *(uint *)(plVar4 + 7) = local_24;
  puVar7 = getbytes((long)(int)local_24 << 4);
  plVar4[8] = (long)puVar7;
  uVar8 = (ulong)local_24;
  puVar9 = extraout_RDX_00;
  uVar14 = extraout_XMM0_Da_00;
  uVar16 = extraout_XMM0_Db_00;
  if (local_24 != 0) {
    ppuVar12 = (undefined4 **)(ulong)(local_24 - 1);
    if ((local_24 & 3) != 0) {
      uVar11 = 0;
      do {
        uVar14 = *local_20;
        uVar16 = local_20[1];
        uVar2 = local_20[2];
        uVar3 = local_20[3];
        local_20 = local_20 + 4;
        *puVar7 = uVar14;
        puVar7[1] = uVar16;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 + 1;
      } while ((local_24 & 3) != uVar11);
      uVar8 = (ulong)(local_24 - uVar11);
    }
    puVar9 = local_20;
    if (2 < local_24 - 1) {
      ppuVar12 = (undefined4 **)0x0;
      do {
        uVar15 = ((undefined8 *)((long)local_20 + (long)ppuVar12))[1];
        *(undefined8 *)((long)puVar7 + (long)ppuVar12) =
             *(undefined8 *)((long)local_20 + (long)ppuVar12);
        ((undefined8 *)((long)puVar7 + (long)ppuVar12))[1] = uVar15;
        uVar15 = ((undefined8 *)((long)(local_20 + 4) + (long)ppuVar12))[1];
        *(undefined8 *)((long)(puVar7 + 4) + (long)ppuVar12) =
             *(undefined8 *)((long)(local_20 + 4) + (long)ppuVar12);
        ((undefined8 *)((long)(puVar7 + 4) + (long)ppuVar12))[1] = uVar15;
        uVar15 = ((undefined8 *)((long)(local_20 + 8) + (long)ppuVar12))[1];
        *(undefined8 *)((long)(puVar7 + 8) + (long)ppuVar12) =
             *(undefined8 *)((long)(local_20 + 8) + (long)ppuVar12);
        ((undefined8 *)((long)(puVar7 + 8) + (long)ppuVar12))[1] = uVar15;
        puVar1 = (undefined4 *)((long)(local_20 + 0xc) + (long)ppuVar12);
        uVar14 = *puVar1;
        uVar16 = puVar1[1];
        uVar2 = puVar1[2];
        uVar3 = puVar1[3];
        puVar1 = (undefined4 *)((long)(puVar7 + 0xc) + (long)ppuVar12);
        *puVar1 = uVar14;
        puVar1[1] = uVar16;
        puVar1[2] = uVar2;
        puVar1[3] = uVar3;
        ppuVar12 = ppuVar12 + 8;
        uVar11 = (int)uVar8 - 4;
        uVar8 = (ulong)uVar11;
      } while (uVar11 != 0);
    }
  }
  uVar15 = canvas_unsetcurrent(CONCAT44(uVar16,uVar14),param_2,param_3,param_4,param_5,param_6,
                               param_7,param_8,plVar4[6],ppuVar12,puVar9,uVar8,param_13,param_14,
                               in_stack_ffffffffffffffd8);
  outlet_new(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar4,0,
             extraout_RDX_01,uVar8,param_13,param_14);
  return plVar4;
}


