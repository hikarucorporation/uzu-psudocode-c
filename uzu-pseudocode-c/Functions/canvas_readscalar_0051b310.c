// Function : canvas_readscalar
// Namespace: 
// Entry    : 0051b310
// Prototype: undefined8 canvas_readscalar(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint param_10, ulong param_11, uint * param_12, char * param_13, undefined8 param_14)
// Body     : 0051b310 - 0051b4f9


undefined8
canvas_readscalar(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,uint param_10,ulong param_11,uint *param_12,char *param_13,
                 undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long lVar8;
  char *pcVar9;
  int *piVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar1 = *param_12;
  pcVar12 = param_13;
  uVar2 = glist_isvisible((long)param_9);
  if ((int)uVar1 < (int)param_10) {
    puVar6 = (undefined8 *)((long)(int)uVar1 * 0x10);
    if (*(int *)(param_11 + (long)puVar6) == 2) {
      puVar3 = (undefined8 *)
               canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                  param_8,*(undefined8 **)(param_11 + 8 + (long)puVar6));
      *param_12 = uVar1 + 1;
      lVar4 = template_findbyname(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,
                                  param_7,param_8,(long)puVar3);
      if (lVar4 == 0) {
        uVar16 = *puVar3;
        pcVar9 = "canvas_read: %s: no such template";
        uVar17 = extraout_XMM0_Qa_01;
      }
      else {
        plVar5 = scalar_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,(long)param_9,puVar3,extraout_RDX,puVar6,pcVar12,param_14);
        if (plVar5 != (long *)0x0) {
          puVar6 = puVar3;
          uVar16 = extraout_RDX_00;
          uVar17 = extraout_XMM0_Qa_02;
          if (uVar2 != 0) {
            lVar4 = glist_getcanvas((long)param_9);
            *(byte *)(lVar4 + 0xe8) = *(byte *)(lVar4 + 0xe8) & 0xfd;
            uVar16 = extraout_RDX_01;
            uVar17 = extraout_XMM0_Qa_03;
          }
          uVar16 = glist_add(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                             plVar5,uVar16,puVar6,pcVar12,param_14);
          uVar1 = *param_12;
          uVar15 = 0;
          lVar4 = (long)(int)uVar1;
          if ((int)uVar1 < (int)param_10) {
            bVar7 = true;
            uVar14 = uVar1;
            if (*(int *)(param_11 + lVar4 * 0x10) != 4) {
              piVar10 = (int *)(lVar4 * 0x10 + param_11);
              lVar8 = 0;
              do {
                piVar10 = piVar10 + 4;
                if ((1 - param_10) + uVar1 == (int)lVar8) {
                  lVar11 = (lVar4 - lVar8) + 1;
                  uVar14 = param_10;
                  goto LAB_0051b483;
                }
                lVar8 = lVar8 + -1;
              } while (*piVar10 != 4);
              lVar11 = lVar4 - lVar8;
              uVar14 = uVar1 - (int)lVar8;
LAB_0051b483:
              bVar7 = lVar11 < (int)param_10;
            }
            *param_12 = bVar7 + uVar14;
            uVar15 = (ulong)(uVar14 - uVar1);
          }
          plVar13 = plVar5 + 3;
          uVar17 = glist_readatoms(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_10,param_11,param_12,puVar3,(char *)plVar13,uVar15,
                                   (int *)(lVar4 * 0x10 + param_11));
          uVar16 = extraout_RDX_02;
          if (uVar2 != 0) {
            lVar4 = glist_getcanvas((long)param_9);
            *(byte *)(lVar4 + 0xe8) = *(byte *)(lVar4 + 0xe8) | 2;
            uVar17 = gobj_vis(plVar5,param_9,1);
            uVar16 = extraout_RDX_03;
          }
          if ((int)param_13 == 0) {
            return 1;
          }
          glist_select(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                       plVar5,uVar16,puVar3,(char *)plVar13,uVar15);
          return 1;
        }
        uVar16 = *puVar3;
        pcVar9 = "couldn\'t create scalar \"%s\"";
        puVar6 = puVar3;
        uVar17 = extraout_XMM0_Qa_02;
      }
      pd_error(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar9,uVar16,puVar6
               ,pcVar12,param_14);
      *param_12 = param_10;
      return 0;
    }
    post(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "stopping early: type %d");
  }
  *param_12 = param_10;
  return 0;
}


