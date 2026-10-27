// Function : canvas_connect
// Namespace: 
// Entry    : 00505960
// Prototype: undefined canvas_connect(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00505960 - 00505ce1


void canvas_connect(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  char *pcVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar9;
  uint uVar10;
  long *plVar11;
  char *in_R8;
  undefined8 in_R9;
  int iVar12;
  long *plVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar15;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  float fVar17;
  float fVar18;
  undefined1 in_stack_ffffffffffffff18;
  long local_b8;
  long *local_b0;
  int local_a4;
  long *local_a0;
  int local_84;
  
  fVar18 = (float)param_4;
  fVar17 = (float)param_2;
  uVar10 = (uint)param_1;
  iVar9 = (int)(float)param_3;
  plVar2 = (long *)__tls_get_addr();
  if (*(long *)(**(long **)(*plVar2 + 0x48) + 0x70) == param_9) {
    iVar7 = *(int *)(**(long **)(*plVar2 + 0x48) + 0x68);
    uVar10 = iVar7 + uVar10;
    iVar9 = iVar7 + iVar9;
  }
  uVar6 = (ulong)uVar10;
  iVar12 = (int)fVar17;
  iVar7 = (int)fVar18;
  plVar13 = *(long **)(param_9 + 0x30);
  plVar2 = plVar13;
  if (uVar10 != 0) {
    do {
      plVar2 = (long *)plVar2[1];
      if (plVar2 == (long *)0x0) {
        uVar15 = logpost(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,0,3,"cannot connect non-existing object",uVar6,
                         in_R8,in_R9,in_stack_ffffffffffffff18);
        goto LAB_00505b3a;
      }
      uVar10 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar10;
    } while (uVar10 != 0);
  }
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    plVar13 = (long *)plVar13[1];
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0x0;
      uVar15 = logpost(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8,plVar2,3,"cannot connect to non-existing object",
                       uVar6,in_R8,in_R9,in_stack_ffffffffffffff18);
      goto LAB_00505b05;
    }
  }
  plVar3 = pd_checkobject(plVar2);
  uVar14 = extraout_XMM0_Da_00;
  uVar16 = extraout_XMM0_Db_00;
  plVar11 = plVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = pd_checkobject(plVar13);
    uVar14 = extraout_XMM0_Da_01;
    uVar16 = extraout_XMM0_Db_01;
    if (plVar4 != (long *)0x0) {
      uVar15 = linetraverser_start(&local_b8,param_9);
      do {
        puVar5 = linetraverser_next(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    &local_b8);
        puVar1 = PTR_text_class_00715c88;
        if (puVar5 == (undefined8 *)0x0) {
          uVar14 = extraout_XMM0_Da_02;
          uVar16 = extraout_XMM0_Db_02;
          if ((*plVar2 == *(long *)PTR_text_class_00715c88) &&
             ((*(byte *)((long)plVar3 + 0x2e) & 3) == 1)) {
            iVar9 = obj_noutlets((long)plVar3);
            uVar15 = extraout_RDX;
            uVar14 = extraout_XMM0_Da_05;
            uVar16 = extraout_XMM0_Db_05;
            while (iVar9 <= iVar12) {
              outlet_new(CONCAT44(uVar16,uVar14),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,(long)plVar3,0,uVar15,uVar6,in_R8,in_R9);
              iVar9 = obj_noutlets((long)plVar3);
              uVar15 = extraout_RDX_00;
              uVar14 = extraout_XMM0_Da_06;
              uVar16 = extraout_XMM0_Db_06;
            }
          }
          if ((*plVar13 == *(long *)puVar1) && ((*(byte *)((long)plVar4 + 0x2e) & 3) == 1)) {
            iVar9 = obj_ninlets(plVar4);
            uVar14 = extraout_XMM0_Da_07;
            uVar16 = extraout_XMM0_Db_07;
            while (iVar9 <= iVar7) {
              inlet_new(CONCAT44(uVar16,uVar14),param_2,param_3,param_4,param_5,param_6,param_7,
                        param_8,(long)plVar4,(long)plVar4,0,0,in_R8,in_R9);
              iVar9 = obj_ninlets(plVar4);
              uVar14 = extraout_XMM0_Da_08;
              uVar16 = extraout_XMM0_Db_08;
            }
          }
          puVar5 = obj_connect(CONCAT44(uVar16,uVar14),param_2,param_3,param_4,param_5,param_6,
                               param_7,param_8,(long)plVar3,iVar12,plVar4,iVar7);
          uVar15 = CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09);
          if (puVar5 != (undefined8 *)0x0) {
            uVar10 = glist_isvisible(param_9);
            if (uVar10 == 0) {
              return;
            }
            if ((*(byte *)(param_9 + 0xe8) & 1) == 0) {
              return;
            }
            sprintf((char *)&local_b8,"l%p",puVar5);
            uVar15 = glist_getcanvas(param_9);
            obj_issignaloutlet((long)plVar3,iVar12);
            uVar15 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_10),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,0,"crr iiii ri rS",uVar15,
                                 "create","line",0,0);
            canvas_fixlinesfor(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,(long)plVar3);
            return;
          }
          goto LAB_00505b05;
        }
        uVar15 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
      } while ((((local_b0 != plVar3) ||
                (uVar15 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02), local_a4 != iVar12)) ||
               (uVar15 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02), local_a0 != plVar4)) ||
              (uVar15 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02), local_84 != iVar7));
      pcVar8 = "io pair already connected";
      uVar14 = extraout_XMM0_Da_02;
      uVar16 = extraout_XMM0_Db_02;
      goto LAB_00505ad9;
    }
  }
  if (plVar2 == (long *)0x0) {
    plVar11 = plVar13;
  }
  pcVar8 = "cannot connect unpatchable object";
LAB_00505ad9:
  uVar15 = logpost(CONCAT44(uVar16,uVar14),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   plVar11,3,pcVar8,uVar6,in_R8,in_R9,in_stack_ffffffffffffff18);
LAB_00505b05:
  if (plVar2 != (long *)0x0) {
    class_getname((undefined8 *)*plVar2);
    uVar15 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
  }
  if (plVar13 != (long *)0x0) {
    class_getname((undefined8 *)*plVar13);
    uVar15 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
  }
LAB_00505b3a:
  post(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "%s %d %d %d %d (%s->%s) connection failed");
  return;
}


