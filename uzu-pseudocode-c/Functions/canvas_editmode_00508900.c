// Function : canvas_editmode
// Namespace: 
// Entry    : 00508900
// Prototype: undefined canvas_editmode(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, ulong param_9)
// Body     : 00508900 - 00508c46


void canvas_editmode(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    ulong param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  undefined7 extraout_var;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined7 extraout_var_00;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  uint uVar12;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  ulong extraout_RDX_02;
  undefined8 extraout_RDX_03;
  char *in_R8;
  char *in_R9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 in_XMM0_Db;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined1 uVar13;
  undefined8 in_stack_ffffffffffffff38;
  char local_b8 [136];
  
  uVar12 = *(uint *)(param_9 + 0xe8) >> 5 & 1;
  uVar11 = (ulong)uVar12;
  pcVar10 = (char *)(long)param_1;
  if (uVar12 != (uint)pcVar10) {
    uVar2 = (ushort)(((uint)pcVar10 & 1) << 5);
    *(ushort *)(param_9 + 0xe8) = (ushort)*(uint *)(param_9 + 0xe8) & 0xffdf | uVar2;
    if (((((ulong)pcVar10 & 1) == 0) ||
        (uVar12 = glist_isvisible(param_9), uVar11 = extraout_RDX, param_1 = extraout_XMM0_Da,
        in_XMM0_Db = extraout_XMM0_Db, uVar12 == 0)) ||
       (bVar3 = glist_istoplevel(param_9), uVar11 = extraout_RDX_00, param_1 = extraout_XMM0_Da_00,
       in_XMM0_Db = extraout_XMM0_Db_00, (int)CONCAT71(extraout_var,bVar3) == 0)) {
      uVar9 = CONCAT44(in_XMM0_Db,param_1);
      uVar13 = (undefined1)in_stack_ffffffffffffff38;
      lVar8 = *(long *)(param_9 + 0xc0);
      if (lVar8 != 0) {
        puVar1 = *(undefined8 **)(lVar8 + 0x20);
        while (uVar13 = (undefined1)in_stack_ffffffffffffff38, puVar1 != (undefined8 *)0x0) {
          uVar9 = glist_deselect(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (long *)param_9,(long *)*puVar1,uVar11,puVar1,in_R8,in_R9);
          lVar8 = *(long *)(param_9 + 0xc0);
          uVar11 = extraout_RDX_02;
          puVar1 = *(undefined8 **)(lVar8 + 0x20);
        }
        if ((*(byte *)(lVar8 + 0x88) & 0x20) != 0) {
          *(byte *)(lVar8 + 0x88) = *(byte *)(lVar8 + 0x88) & 0xdf;
          in_R8 = local_b8;
          sprintf(in_R8,"l%p",*(undefined8 *)(*(long *)(param_9 + 0xc0) + 0x80));
          uVar13 = 0x51;
          in_R9 = "-fill";
          pdgui_vmess(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",in_R8,
                      "-fill",0x51);
        }
      }
      *(ushort *)(param_9 + 0xe8) = uVar2 | (ushort)*(undefined4 *)(param_9 + 0xe8) & 0xffdf;
      uVar12 = glist_isvisible(param_9);
      if ((uVar12 != 0) &&
         (bVar3 = glist_istoplevel(param_9), (int)CONCAT71(extraout_var_00,bVar3) != 0)) {
        plVar5 = (long *)__tls_get_addr();
        if ((*(ulong *)(**(long **)(*plVar5 + 0x48) + 0x88) != param_9) ||
           (*(int *)(**(long **)(*plVar5 + 0x48) + 0x90) != 0)) {
          in_R9 = "$cursor_runmode_nothing";
          pdgui_vmess(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,0,"^r rr",param_9,"configure","-cursor",
                      "$cursor_runmode_nothing",uVar13);
          plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar8 = **(long **)(*plVar5 + 0x48);
          *(ulong *)(lVar8 + 0x88) = param_9;
          *(undefined4 *)(lVar8 + 0x90) = 0;
        }
        uVar9 = glist_getcanvas(param_9);
        in_R8 = "commentbar";
        pdgui_vmess(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,0,"crs",uVar9,"delete","commentbar",in_R9,uVar13
                   );
      }
    }
    else {
      plVar5 = (long *)__tls_get_addr();
      if ((*(ulong *)(**(long **)(*plVar5 + 0x48) + 0x88) != param_9) ||
         (*(int *)(**(long **)(*plVar5 + 0x48) + 0x90) != 4)) {
        pcVar10 = "configure";
        in_R8 = "-cursor";
        in_R9 = "$cursor_editmode_nothing";
        pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,0,"^r rr",param_9,"configure","-cursor",
                    "$cursor_editmode_nothing",(char)in_stack_ffffffffffffff38);
        plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar8 = **(long **)(*plVar5 + 0x48);
        *(ulong *)(lVar8 + 0x88) = param_9;
        *(undefined4 *)(lVar8 + 0x90) = 4;
      }
      for (plVar5 = *(long **)(param_9 + 0x30); uVar13 = (undefined1)in_stack_ffffffffffffff38,
          plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
        plVar6 = pd_checkobject(plVar5);
        if ((plVar6 != (long *)0x0) && ((*(byte *)((long)plVar6 + 0x2e) & 3) == 0)) {
          plVar7 = (long *)glist_findrtext(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2
                                           ,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                           (long)plVar6,extraout_RDX_01,pcVar10,in_R8,in_R9);
          lVar8 = rtext_gettag((long)plVar7);
          uVar12 = rtext_width(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,plVar7);
          uVar4 = rtext_height(plVar7);
          pcVar10 = (char *)(ulong)uVar12;
          in_R8 = (char *)(ulong)uVar4;
          in_R9 = (char *)0x1;
          text_drawborder(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,plVar6,param_9,lVar8,pcVar10,in_R8,1);
        }
      }
    }
    uVar12 = glist_isvisible(param_9);
    if ((uVar12 != 0) && ((*(byte *)(param_9 + 0xe8) & 1) != 0)) {
      uVar9 = glist_getcanvas(param_9);
      uVar11 = (ulong)(*(uint *)(param_9 + 0xe8) >> 5 & 1);
      pcVar10 = "^i";
      uVar9 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,0x65496b,"^i",uVar9,uVar11,in_R8,in_R9,
                          uVar13);
      canvas_reflecttitle(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          pcVar10,extraout_RDX_03,uVar11,in_R8,in_R9,uVar13);
    }
  }
  return;
}


