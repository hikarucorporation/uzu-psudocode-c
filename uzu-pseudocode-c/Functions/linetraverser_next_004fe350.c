// Function : linetraverser_next
// Namespace: 
// Entry    : 004fe350
// Prototype: undefined8 * linetraverser_next(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 004fe350 - 004fe61a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
linetraverser_next(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint *puVar12;
  undefined8 extraout_RDX;
  int iVar13;
  long *plVar14;
  undefined4 uVar15;
  long *in_R8;
  int iVar16;
  long in_R9;
  int iVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 uVar18;
  long in_stack_ffffffffffffffb8;
  long *plVar19;
  
  puVar10 = (undefined8 *)param_9[0xd];
  if (puVar10 == (undefined8 *)0x0) {
    plVar14 = param_9 + 7;
    in_stack_ffffffffffffffb8 = (long)param_9 + 0x44;
    do {
      iVar6 = (int)param_9[0xe];
      if (iVar6 == (int)param_9[2]) {
        do {
          while( true ) {
            lVar7 = in_R9;
            in_R9 = in_stack_ffffffffffffffb8;
            if (param_9[1] == 0) {
              plVar19 = *(long **)(*param_9 + 0x30);
            }
            else {
              plVar19 = *(long **)(param_9[1] + 8);
            }
            while( true ) {
              if (plVar19 == (long *)0x0) {
                return (undefined8 *)0x0;
              }
              plVar8 = pd_checkobject(plVar19);
              if (plVar8 != (long *)0x0) break;
              plVar19 = (long *)plVar19[1];
            }
            param_9[1] = (long)plVar8;
            iVar6 = obj_noutlets((long)plVar8);
            *(int *)(param_9 + 2) = iVar6;
            if ((*(byte *)(*param_9 + 0xe8) & 8) == 0) break;
LAB_004fe469:
            *plVar14 = 0;
            param_9[8] = 0;
            iVar6 = (int)param_9[2];
            in_stack_ffffffffffffffb8 = in_R9;
joined_r0x004fe4c5:
            in_R9 = lVar7;
            if (iVar6 != 0) goto LAB_004fe4cb;
          }
          lVar9 = glist_getcanvas(*param_9);
          lVar11 = _UNK_00653f38;
          if ((*(byte *)(lVar9 + 0xe8) & 2) == 0) goto LAB_004fe469;
          in_stack_ffffffffffffffb8 = in_R9;
          if ((*(undefined8 **)(*plVar19 + 0x68) == (undefined8 *)0x0) ||
             (pcVar4 = (code *)**(undefined8 **)(*plVar19 + 0x68), pcVar4 == (code *)0x0)) {
            *plVar14 = _DAT_00653f30;
            param_9[8] = lVar11;
            iVar6 = (int)param_9[2];
            goto joined_r0x004fe4c5;
          }
          in_R8 = param_9 + 8;
          (*pcVar4)(plVar19,*param_9,plVar14,(long)param_9 + 0x3c);
        } while ((int)param_9[2] == 0);
LAB_004fe4cb:
        iVar6 = 0;
      }
      *(int *)(param_9 + 0xe) = iVar6 + 1;
      puVar10 = (undefined8 *)obj_starttraverseoutlet(param_9[1],param_9 + 4,iVar6);
      *(int *)((long)param_9 + 0x14) = iVar6;
    } while (puVar10 == (undefined8 *)0x0);
  }
  uVar18 = (undefined1)in_stack_ffffffffffffffb8;
  plVar14 = param_9 + 3;
  puVar12 = (uint *)((long)param_9 + 0x34);
  lVar7 = obj_nexttraverseoutlet(puVar10,plVar14,param_9 + 5,puVar12);
  param_9[0xd] = lVar7;
  iVar6 = obj_ninlets((long *)param_9[3]);
  *(int *)(param_9 + 6) = iVar6;
  if (iVar6 == 0) {
    bug(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,param_7,
        param_8,"drawline",plVar14,extraout_RDX,puVar12,(char *)in_R8,in_R9,uVar18);
    lVar7 = *param_9;
    bVar1 = *(byte *)(lVar7 + 0xe8);
  }
  else {
    lVar7 = *param_9;
    bVar1 = *(byte *)(lVar7 + 0xe8);
  }
  if ((bVar1 & 8) == 0) {
    lVar11 = glist_getcanvas(lVar7);
    lVar7 = _UNK_00653f38;
    if ((*(byte *)(lVar11 + 0xe8) & 2) != 0) {
      iVar6 = (int)param_9[6] + -1;
      if ((int)param_9[6] == 1) {
        iVar6 = 1;
      }
      iVar17 = (int)param_9[2] + -1;
      if ((int)param_9[2] == 1) {
        iVar17 = 1;
      }
      iVar2 = *(int *)(*param_9 + 0xec);
      iVar5 = iVar2 * 3;
      iVar2 = iVar2 * -7;
      plVar14 = param_9 + 9;
      puVar3 = *(undefined8 **)(*(long *)param_9[3] + 0x68);
      if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (code *)*puVar3, pcVar4 == (code *)0x0)) {
        *plVar14 = _DAT_00653f30;
        param_9[10] = lVar7;
        iVar16 = 10;
        uVar15 = 0;
        iVar13 = 0;
      }
      else {
        plVar19 = param_9 + 10;
        (*pcVar4)((long *)param_9[3],*param_9,plVar14,(undefined4 *)((long)param_9 + 0x4c),plVar19,
                  (long)param_9 + 0x54);
        iVar13 = (int)*plVar14;
        iVar16 = (int)*plVar19;
        uVar15 = *(undefined4 *)((long)param_9 + 0x4c);
      }
      *(int *)(param_9 + 0xb) =
           (int)param_9[7] + iVar5 +
           (((iVar2 - (int)param_9[7]) + (int)param_9[8]) * *(int *)((long)param_9 + 0x14)) / iVar17
      ;
      *(undefined4 *)((long)param_9 + 0x5c) = *(undefined4 *)((long)param_9 + 0x44);
      *(int *)(param_9 + 0xc) =
           iVar13 + iVar5 + (((iVar2 - iVar13) + iVar16) * *(int *)((long)param_9 + 0x34)) / iVar6;
      *(undefined4 *)((long)param_9 + 100) = uVar15;
      goto LAB_004fe609;
    }
  }
  param_9[0xb] = 0;
  param_9[0xc] = 0;
  param_9[9] = 0;
  param_9[10] = 0;
LAB_004fe609:
  return puVar10;
}


