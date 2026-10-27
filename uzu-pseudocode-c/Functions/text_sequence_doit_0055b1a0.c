// Function : text_sequence_doit
// Namespace: 
// Entry    : 0055b1a0
// Prototype: undefined text_sequence_doit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, long param_11, int * param_12, char * param_13, uint * param_14)
// Body     : 0055b1a0 - 0055b75c


void text_sequence_doit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                       undefined8 param_10,long param_11,int *param_12,char *param_13,uint *param_14
                       )

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  uint *extraout_RDX;
  uint *extraout_RDX_00;
  uint *extraout_RDX_01;
  uint *extraout_RDX_02;
  uint *extraout_RDX_03;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  char *pcVar17;
  uint *puVar18;
  uint uVar19;
  long lVar20;
  int *__src;
  undefined8 *puVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Db_03;
  undefined8 uVar23;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar25;
  undefined4 uVar26;
  int aiStack_68 [2];
  long local_60;
  ulong local_58;
  long local_50;
  uint local_48;
  uint local_44;
  int *local_40;
  undefined4 local_38;
  bool local_31;
  
  local_44 = (uint)param_10;
  local_50 = param_11;
  puVar3 = (undefined4 *)
           text_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13,param_14);
  uVar22 = extraout_XMM0_Da;
  uVar24 = extraout_XMM0_Db;
  if (puVar3 == (undefined4 *)0x0) {
LAB_0055b241:
    *(undefined4 *)(param_9 + 0x78) = 0x7fffffff;
    *(undefined2 *)(param_9 + 0xb1) = 0;
    outlet_bang(CONCAT44(uVar24,uVar22),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x70));
    return;
  }
  lVar4 = binbuf_getvec((long)puVar3);
  uVar2 = binbuf_getnatom(puVar3);
  uVar23 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  uVar9 = *(uint *)(param_9 + 0x78);
  uVar22 = extraout_XMM0_Da_00;
  uVar24 = extraout_XMM0_Db_00;
  if ((int)uVar2 <= (int)uVar9) goto LAB_0055b241;
  lVar12 = (long)(int)uVar9;
  puVar18 = (uint *)(ulong)uVar9;
  local_60 = lVar4;
  if (*(long *)(param_9 + 0xa8) == 0) {
    lVar20 = lVar12 * 0x10;
    if (*(int *)(lVar4 + lVar20) == 2) {
      if (*(long *)(lVar4 + 8 + lVar20) != *(long *)(param_9 + 0x88)) goto LAB_0055b1fb;
      iVar11 = -uVar9;
      puVar18 = (uint *)(lVar20 + lVar4);
      do {
        puVar18 = puVar18 + 4;
        uVar19 = uVar2;
        if (uVar2 + iVar11 == 1) goto LAB_0055b6dd;
        iVar11 = iVar11 + -1;
      } while ((*puVar18 & 0xfffffffe) != 4);
      uVar19 = -iVar11;
LAB_0055b6dd:
      puVar10 = (uint *)(ulong)uVar19;
      *(undefined1 *)(param_9 + 0xb0) = 1;
      iVar11 = 1;
      local_31 = true;
      local_38 = 0;
      puVar18 = (uint *)(ulong)(uVar9 + 1);
      puVar13 = puVar10;
    }
    else {
      if (((*(int *)(lVar4 + lVar20) != 1) || (*(int *)(param_9 + 0x90) == 0)) ||
         (*(char *)(param_9 + 0xb0) != '\0')) goto LAB_0055b1fb;
      uVar19 = *(int *)(param_9 + 0x90) + uVar9;
      if ((int)uVar19 < (int)uVar9) {
        uVar19 = uVar9;
      }
      piVar6 = (int *)(lVar20 + lVar4);
      puVar13 = (uint *)0x0;
      do {
        uVar16 = uVar19;
        if ((uint *)(lVar12 - (int)uVar19) == puVar13) goto LAB_0055b71a;
        if (*piVar6 != 1) {
          uVar16 = uVar9 - (int)puVar13;
          goto LAB_0055b71a;
        }
        puVar13 = (uint *)((long)puVar13 + -1);
        piVar6 = piVar6 + 4;
      } while (uVar9 - uVar2 != (int)puVar13);
      uVar16 = uVar2;
LAB_0055b71a:
      *(undefined1 *)(param_9 + 0xb0) = 1;
      iVar11 = 0;
      local_31 = true;
      local_38 = 0;
      puVar10 = (uint *)(ulong)uVar16;
      puVar13 = (uint *)(lVar12 - (int)uVar19);
    }
  }
  else {
LAB_0055b1fb:
    puVar13 = (uint *)(lVar12 * 0x10 + lVar4);
    do {
      puVar10 = (uint *)(ulong)uVar9;
      uVar19 = *puVar13;
      if ((uVar19 & 0xfffffffe) == 4) {
        *(undefined1 *)(param_9 + 0xb0) = 0;
        local_31 = uVar19 != 5;
        puVar13 = (uint *)CONCAT71((int7)((ulong)puVar13 >> 8),1);
        local_38 = (int)puVar13;
        iVar11 = 1;
        goto LAB_0055b283;
      }
      uVar9 = uVar9 + 1;
      puVar13 = puVar13 + 4;
    } while (uVar2 != uVar9);
    *(undefined1 *)(param_9 + 0xb0) = 0;
    iVar11 = 1;
    local_31 = true;
    local_38 = (int)CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
    puVar10 = (uint *)(ulong)uVar2;
  }
LAB_0055b283:
  uVar9 = (int)puVar10 - (int)puVar18;
  uVar16 = iVar11 + (int)puVar10;
  pcVar17 = (char *)(ulong)uVar16;
  uVar19 = 0x7fffffff;
  if ((int)uVar16 < (int)uVar2) {
    uVar19 = uVar16;
  }
  *(uint *)(param_9 + 0x78) = uVar19;
  uVar2 = uVar9 + 1;
  if ((int)uVar9 < 99) {
    piVar15 = aiStack_68 + (long)(int)uVar2 * -4;
    piVar6 = piVar15;
    if (0 < (int)uVar9) goto LAB_0055b348;
    uVar14 = (ulong)uVar9;
    __src = piVar15;
    if ((char)local_38 == '\0') goto LAB_0055b481;
LAB_0055b2ce:
    uVar19 = (uint)uVar14;
    if (*(long *)(param_9 + 0x60) == 0) {
      uVar9 = 0;
      if (uVar19 == 0) goto joined_r0x0055b628;
      local_40 = __src;
      puVar21 = *(undefined8 **)(param_9 + 0xa8);
      if (puVar21 == (undefined8 *)0x0) {
        if (*__src == 2) {
          puVar21 = *(undefined8 **)(__src + 2);
          if (puVar21 != (undefined8 *)0x0) {
            piVar6 = __src + 4;
            plVar7 = (long *)puVar21[1];
            uVar9 = uVar19 - 1;
            goto joined_r0x0055b6b3;
          }
          puVar21 = (undefined8 *)0x0;
        }
        else {
          puVar21 = (undefined8 *)0x0;
          piVar15[-2] = 0x55b713;
          piVar15[-1] = 0;
          bug(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"text sequence 2",
              pcVar17,uVar14 & 0xffffffff,puVar10,(char *)puVar18,param_14,(char)*piVar15);
        }
      }
      else {
        plVar7 = (long *)puVar21[1];
        uVar9 = uVar19;
joined_r0x0055b6b3:
        if (plVar7 != (long *)0x0) {
          if (local_31 != false) {
            puVar21 = (undefined8 *)0x0;
          }
          *(undefined8 **)(param_9 + 0xa8) = puVar21;
          if (((int)uVar9 < 1) || (*piVar6 != 2)) {
            piVar15[-2] = 0x55b6d9;
            piVar15[-1] = 0;
            pd_list(plVar7,0,uVar9,piVar6);
            __src = local_40;
            uVar9 = uVar19;
          }
          else {
            puVar21 = *(undefined8 **)(piVar6 + 2);
            piVar15[-2] = 0x55b5e7;
            piVar15[-1] = 0;
            pd_typedmess(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar7,
                         puVar21,uVar9 - 1,piVar6 + 4,puVar18,param_14);
            __src = local_40;
            uVar9 = uVar19;
          }
          goto joined_r0x0055b628;
        }
        uVar5 = *puVar21;
        piVar15[-2] = 0x55b6cd;
        piVar15[-1] = 0;
        pd_error(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "%s: no such object",uVar5,puVar10,(char *)puVar18,param_14);
      }
      puVar8 = (undefined8 *)0x0;
      if (local_31 == false) {
        puVar8 = puVar21;
      }
      *(undefined8 **)(param_9 + 0xa8) = puVar8;
      __src = local_40;
      uVar9 = uVar19;
      goto joined_r0x0055b628;
    }
    uVar9 = uVar19;
    if (*(long *)(param_9 + 0xa8) != 0) {
      piVar15[-2] = 0x55b2f9;
      piVar15[-1] = 0;
      memmove(__src + 4,__src,(long)(int)uVar19 << 4);
      uVar23 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      *__src = 2;
      *(undefined8 *)(__src + 2) = *(undefined8 *)(param_9 + 0xa8);
      uVar9 = uVar2;
    }
    if (local_31 == false) {
      if (((*(long *)(param_9 + 0xa8) == 0) && (uVar19 != 0)) && (*__src == 2)) {
        uVar5 = *(undefined8 *)(__src + 2);
        goto LAB_0055b319;
      }
    }
    else {
      uVar5 = 0;
LAB_0055b319:
      *(undefined8 *)(param_9 + 0xa8) = uVar5;
    }
    plVar7 = *(long **)(param_9 + 0x60);
  }
  else {
    piVar6 = getbytes((ulong)uVar2 << 4);
    piVar15 = aiStack_68;
    puVar13 = extraout_RDX;
    uVar22 = extraout_XMM0_Da_02;
    uVar24 = extraout_XMM0_Db_02;
LAB_0055b348:
    uVar23 = CONCAT44(uVar24,uVar22);
    local_40 = piVar6;
    local_48 = uVar2;
    local_58 = (ulong)uVar9;
    uVar14 = (ulong)uVar9;
    lVar4 = local_60 + (long)(int)puVar18 * 0x10;
    lVar20 = lVar4 + 8;
    lVar12 = 0;
    do {
      uVar9 = local_44;
      lVar1 = local_50;
      iVar11 = *(int *)(lVar4 + lVar12);
      puVar10 = (uint *)(ulong)(iVar11 - 1U);
      if (iVar11 - 1U < 2) {
        puVar3 = (undefined4 *)(lVar4 + lVar12);
        uVar22 = *puVar3;
        uVar24 = puVar3[1];
        uVar25 = puVar3[2];
        uVar26 = puVar3[3];
LAB_0055b3a1:
        uVar23 = CONCAT44(uVar24,uVar22);
        puVar3 = (undefined4 *)((long)piVar6 + lVar12);
        *puVar3 = uVar22;
        puVar3[1] = uVar24;
        puVar3[2] = uVar25;
        puVar3[3] = uVar26;
      }
      else if (iVar11 == 9) {
        puVar21 = *(undefined8 **)(lVar20 + lVar12);
        pcVar17 = (char *)(ulong)local_44;
        puVar10 = (uint *)0x0;
        piVar15[-2] = 0x55b3ea;
        piVar15[-1] = 0;
        puVar21 = binbuf_realizedollsym
                            (uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar21,
                             uVar9,lVar1,0,(char *)puVar18,param_14);
        uVar23 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
        if (puVar21 == (undefined8 *)0x0) {
          uVar23 = **(undefined8 **)(lVar20 + lVar12);
          pcVar17 = "$%s: not enough arguments supplied";
          piVar15[-2] = 0x55b43e;
          piVar15[-1] = 0;
          pd_error(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0,"$%s: not enough arguments supplied",uVar23,puVar10,
                   (char *)puVar18,param_14);
          *(undefined4 *)((long)piVar6 + lVar12) = 2;
          piVar15[-2] = 0x55b457;
          piVar15[-1] = 0;
          plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
          uVar23 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
          puVar10 = (uint *)0x90;
          *(long *)((long)piVar6 + lVar12 + 8) = *plVar7 + 0x90;
          puVar13 = extraout_RDX_03;
        }
        else {
          *(undefined4 *)((long)piVar6 + lVar12) = 2;
          *(undefined8 **)((long)piVar6 + lVar12 + 8) = puVar21;
          puVar13 = extraout_RDX_01;
        }
      }
      else if (iVar11 == 8) {
        uVar9 = *(uint *)(lVar20 + lVar12);
        if ((0 < (int)uVar9) && ((int)uVar9 <= (int)local_44)) {
          puVar13 = (uint *)((ulong)(uVar9 - 1) * 0x10);
          puVar3 = (undefined4 *)(local_50 + (long)puVar13);
          uVar22 = *puVar3;
          uVar24 = puVar3[1];
          uVar25 = puVar3[2];
          uVar26 = puVar3[3];
          goto LAB_0055b3a1;
        }
        pcVar17 = "argument $%d out of range";
        piVar15[-2] = 0x55b410;
        piVar15[-1] = 0;
        uVar23 = pd_error(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          "argument $%d out of range",(ulong)uVar9,7,(char *)puVar18,param_14);
        *(undefined4 *)((long)piVar6 + lVar12) = 1;
        *(undefined4 *)((long)piVar6 + lVar12 + 8) = 0;
        puVar13 = extraout_RDX_02;
      }
      else {
        piVar15[-2] = 0x55b37c;
        piVar15[-1] = 0;
        uVar23 = bug(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"text sequence",
                     pcVar17,puVar13,puVar10,(char *)puVar18,param_14,(char)*piVar15);
        puVar13 = extraout_RDX_00;
      }
      lVar12 = lVar12 + 0x10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    uVar9 = (uint)local_58;
    uVar14 = local_58;
    __src = local_40;
    uVar2 = local_48;
    if ((char)local_38 != '\0') goto LAB_0055b2ce;
LAB_0055b481:
    *(undefined1 *)(param_9 + 0xb1) = 0;
    *(undefined8 *)(param_9 + 0xa8) = 0;
    if (((*(char *)(param_9 + 0xb2) != '\0') && (uVar9 == 1)) && (*__src == 1)) {
      *(int *)(param_9 + 0xa0) = __src[2];
      return;
    }
    plVar7 = *(long **)(param_9 + 0x68);
    if (plVar7 == (long *)0x0) {
      piVar15[-2] = 0x55b624;
      piVar15[-1] = 0;
      bug(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"text sequence 3",pcVar17,
          puVar13,puVar10,(char *)puVar18,param_14,(char)*piVar15);
      goto joined_r0x0055b628;
    }
    *(undefined1 *)(param_9 + 0xb2) = 0;
    uVar19 = uVar9;
  }
  *(undefined8 *)((long)piVar15 + -8) = 0x55b574;
  outlet_list(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar7,0,uVar9,piVar6,
              (char *)puVar18,param_14);
  uVar9 = uVar19;
joined_r0x0055b628:
  if (0x62 < (int)uVar9) {
    *(undefined8 *)((long)piVar15 + -8) = 0x55b639;
    freebytes(__src);
  }
  return;
}


